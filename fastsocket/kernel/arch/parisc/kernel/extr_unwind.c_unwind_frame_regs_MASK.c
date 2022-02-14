
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_table_entry {unsigned long region_start; int Save_RP; int Total_frame_size; scalar_t__ Millicode; int Save_SP; int region_end; } ;
struct unwind_frame_info {unsigned long ip; unsigned long prev_sp; int sp; unsigned long prev_ip; unsigned long rp; unsigned long r31; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*,unsigned long,...) ;
 struct unwind_table_entry* FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long*) ;
 int FUNC_3 (unsigned long,int *,int *,char**,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (struct unwind_frame_info*,unsigned long,long) ;

__attribute__((used)) static void FUNC_6(struct unwind_frame_info *VAR_3)
{
 const struct unwind_table_entry *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;
 long VAR_7 = 0;
 int VAR_8, VAR_9 = 0;

 VAR_4 = FUNC_1(VAR_3->ip);
 if (VAR_4 == ((void*)0)) {
  unsigned long VAR_10;
  extern char VAR_11[], VAR_12[];

  FUNC_0("Cannot find unwind entry for 0x%lx; forced unwinding\n", VAR_3->ip);
  VAR_10 = VAR_3->sp & ~63;
  do {
   unsigned long VAR_13;

   VAR_3->prev_sp = VAR_10 - 64;
   VAR_3->prev_ip = 0;
   if (FUNC_2(VAR_13, (unsigned long *)(VAR_3->prev_sp - VAR_2)))
    break;
   VAR_3->prev_ip = VAR_13;
   VAR_10 = VAR_3->prev_sp;
  } while (VAR_3->prev_ip < (unsigned long)VAR_11 ||
    VAR_3->prev_ip > (unsigned long)VAR_12);

  VAR_3->rp = 0;

  FUNC_0("analyzing func @ %lx with no unwind info, setting "
      "prev_sp=%lx prev_ip=%lx\n", VAR_3->ip,
      VAR_3->prev_sp, VAR_3->prev_ip);
 } else {
  FUNC_0("e->start = 0x%x, e->end = 0x%x, Save_SP = %d, "
      "Save_RP = %d, Millicode = %d size = %u\n",
      VAR_4->region_start, VAR_4->region_end, VAR_4->Save_SP, VAR_4->Save_RP,
      VAR_4->Millicode, VAR_4->Total_frame_size);

  VAR_8 = VAR_4->Save_RP;

  for (VAR_5 = VAR_4->region_start;
       (VAR_7 < (VAR_4->Total_frame_size << 3) ||
        VAR_8) &&
       VAR_5 < VAR_3->ip;
       VAR_5 += 4) {

   VAR_6 = *(unsigned int *)VAR_5;

   if ((VAR_6 & 0xffffc000) == 0x37de0000 ||
       (VAR_6 & 0xffe00000) == 0x6fc00000) {

    VAR_7 += (VAR_6 & 0x1 ? -1 << 13 : 0) |
     ((VAR_6 & 0x3fff) >> 1);
    FUNC_0("analyzing func @ %lx, insn=%08x @ "
        "%lx, frame_size = %ld\n", VAR_3->ip,
        VAR_6, VAR_5, VAR_7);
   } else if ((VAR_6 & 0xffe00008) == 0x73c00008) {

    VAR_7 += (VAR_6 & 0x1 ? -1 << 13 : 0) |
     (((VAR_6 >> 4) & 0x3ff) << 3);
    FUNC_0("analyzing func @ %lx, insn=%08x @ "
        "%lx, frame_size = %ld\n", VAR_3->ip,
        VAR_6, VAR_5, VAR_7);
   } else if (VAR_6 == 0x6bc23fd9) {

    VAR_9 = 20;
    VAR_8 = 0;
    FUNC_0("analyzing func @ %lx, insn=stw rp,"
        "-20(sp) @ %lx\n", VAR_3->ip, VAR_5);
   } else if (VAR_6 == 0x0fc212c1) {

    VAR_9 = 16;
    VAR_8 = 0;
    FUNC_0("analyzing func @ %lx, insn=std rp,"
        "-16(sp) @ %lx\n", VAR_3->ip, VAR_5);
   }
  }

  if (!FUNC_5(VAR_3, VAR_4->region_start, VAR_7)) {
   VAR_3->prev_sp = VAR_3->sp - VAR_7;
   if (VAR_4->Millicode)
    VAR_3->rp = VAR_3->r31;
   else if (VAR_9)
    VAR_3->rp = *(unsigned long *)(VAR_3->prev_sp - VAR_9);
   VAR_3->prev_ip = VAR_3->rp;
   VAR_3->rp = 0;
  }

  FUNC_0("analyzing func @ %lx, setting prev_sp=%lx "
      "prev_ip=%lx npc=%lx\n", VAR_3->ip, VAR_3->prev_sp,
      VAR_3->prev_ip, VAR_5);
 }
}
