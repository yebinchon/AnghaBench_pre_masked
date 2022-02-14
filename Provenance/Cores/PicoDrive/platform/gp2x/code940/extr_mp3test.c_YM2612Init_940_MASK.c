
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucData ;
struct TYPE_6__ {int baseclock; int rate; int busy; scalar_t__* jobs; } ;
typedef TYPE_1__ _940_data_t ;
typedef TYPE_1__ _940_ctl_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 unsigned char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int * VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_6 (int ,int,int,int ,int ,int) ;
 unsigned char* VAR_12 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (unsigned char*,unsigned char*,int,int *) ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 unsigned char* VAR_15 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int) ;

void FUNC_12(int VAR_16, int VAR_17)
{
 FUNC_7("YM2612Init_940()\n");
 FUNC_7("Mem usage: shared_data: %i, shared_ctl: %i\n", sizeof(*VAR_14), sizeof(*VAR_13));

 FUNC_1(1, 2);
 FUNC_0(1);

 VAR_10[0x3B46>>1] = 0xffff;
 VAR_10[0x3B42>>1] = 0xffff;

 VAR_9[0x4508>>2] = ~(1<<26);

 if (VAR_15 == ((void*)0))
 {
  VAR_15 = (unsigned char *) FUNC_6(0, 0x210000, VAR_4|VAR_5, VAR_2, VAR_11, 0x2000000);
  if(VAR_15 == VAR_1)
  {
   FUNC_7("mmap(shared_data) failed with %i\n", VAR_7);
   FUNC_2(1);
  }
  VAR_14 = (_940_data_t *) (VAR_15+0x100000);

  VAR_13 = (_940_ctl_t *) (VAR_15+0x200000);
  VAR_12 = (unsigned char *) FUNC_6(0, VAR_3, VAR_4|VAR_5, VAR_2, VAR_11, 0x3000000);
  if (VAR_12 == VAR_1)
  {
   FUNC_7("mmap(mp3_mem) failed with %i\n", VAR_7);
   FUNC_2(1);
  }
  VAR_6 = 1;
 }

 if (VAR_6)
 {
  unsigned char VAR_18[1024];
  int VAR_19;
  char VAR_20[1024];
  FILE *VAR_21;

  FUNC_11(VAR_20, VAR_8[0], 1023);
  VAR_20[1023] = 0;
  for (VAR_19 = FUNC_10(VAR_20); VAR_19 > 0; VAR_19--)
   if (VAR_20[VAR_19] == '/') { VAR_20[VAR_19] = 0; break; }
  FUNC_9(VAR_20, "/code940.bin");

  VAR_21 = FUNC_4(VAR_20, "rb");
  if(!VAR_21)
  {
   FUNC_7("failed to open %s\n", VAR_20);
   FUNC_2(1);
  }

  FUNC_8(VAR_15, VAR_18, sizeof(VAR_18), VAR_21);
  FUNC_3(VAR_21);
  VAR_6 = 0;
 }

 FUNC_5(VAR_14, 0, sizeof(*VAR_14));
 FUNC_5(VAR_13, 0, sizeof(*VAR_13));


 VAR_13->baseclock = VAR_16;
 VAR_13->rate = VAR_17;
 VAR_13->jobs[0] = VAR_0;
 VAR_13->jobs[1] = 0;
 VAR_13->busy = 1;


 FUNC_1(0, 2);
 FUNC_0(0);
}
