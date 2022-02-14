
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pg_state {void* current_prot; int level; scalar_t__ current_address; int start_address; TYPE_1__* marker; } ;
typedef int pgprotval_t ;
typedef void* pgprot_t ;
struct TYPE_2__ {scalar_t__ start_address; int name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct seq_file*,void*,int) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2, struct pg_state *VAR_3,
        pgprot_t VAR_4, int VAR_5)
{
 pgprotval_t VAR_6, VAR_7;
 static const char VAR_8[] = "KMGTPE";






 VAR_6 = FUNC_0(VAR_4) & VAR_0;
 VAR_7 = FUNC_0(VAR_3->current_prot) & VAR_0;

 if (!VAR_3->level) {

  VAR_3->current_prot = VAR_4;
  VAR_3->level = VAR_5;
  VAR_3->marker = VAR_1;
  FUNC_2(VAR_2, "---[ %s ]---\n", VAR_3->marker->name);
 } else if (VAR_6 != VAR_7 || VAR_5 != VAR_3->level ||
     VAR_3->current_address >= VAR_3->marker[1].start_address) {
  const char *VAR_9 = VAR_8;
  unsigned long VAR_10;
  int VAR_11 = sizeof(unsigned long) * 2;




  FUNC_2(VAR_2, "0x%0*lx-0x%0*lx   ",
      VAR_11, VAR_3->start_address,
      VAR_11, VAR_3->current_address);

  VAR_10 = (VAR_3->current_address - VAR_3->start_address) >> 10;
  while (!(VAR_10 & 1023) && VAR_9[1]) {
   VAR_10 >>= 10;
   VAR_9++;
  }
  FUNC_2(VAR_2, "%9lu%c ", VAR_10, *VAR_9);
  FUNC_1(VAR_2, VAR_3->current_prot, VAR_3->level);






  if (VAR_3->current_address >= VAR_3->marker[1].start_address) {
   VAR_3->marker++;
   FUNC_2(VAR_2, "---[ %s ]---\n", VAR_3->marker->name);
  }

  VAR_3->start_address = VAR_3->current_address;
  VAR_3->current_prot = VAR_4;
  VAR_3->level = VAR_5;
 }
}
