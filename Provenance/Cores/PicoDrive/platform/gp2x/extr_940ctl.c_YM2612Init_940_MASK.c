
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int binpath ;
struct TYPE_7__ {scalar_t__ frame_count; } ;
struct TYPE_9__ {TYPE_1__ m; } ;
struct TYPE_8__ {int baseclock; int rate; } ;
typedef int FILE ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 TYPE_2__* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (int,int *,int) ;
 int FUNC_9 () ;
 int * VAR_7 ;
 int FUNC_10 (scalar_t__,unsigned char*,int) ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,int) ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_15 (int,int,char*) ;

void FUNC_16(int VAR_13, int VAR_14)
{
 static int VAR_15;


 if (VAR_4.m.frame_count > 0 && !VAR_5 && VAR_14 == VAR_15)
  return;

 FUNC_13("YM2612Init_940()\n");
 FUNC_13("Mem usage: shared_data: %i, shared_ctl: %i\n", sizeof(*VAR_11), sizeof(*VAR_10));

 FUNC_14(1, 2);
 FUNC_12(1);

 VAR_9[0x3B40>>1] = 0;
 VAR_9[0x3B42>>1] = 1;

 VAR_8[0x4504>>2] = 0;
 VAR_8[0x4508>>2] = ~(1<<26);


 if (VAR_5)
 {
  unsigned char VAR_16[1024];
  int VAR_17, VAR_18 = 0;
  char VAR_19[512];
  FILE *VAR_20;

  FUNC_2(VAR_19, VAR_0, sizeof(VAR_19));
  VAR_20 = FUNC_5(VAR_19, "rb");
  if(!VAR_20)
  {
   FUNC_11(VAR_6, 0, 320*240*2);
   FUNC_15(10, 100, "failed to open required file:");
   FUNC_15(10, 110, VAR_0);
   FUNC_7();
   FUNC_8(VAR_3|VAR_2, ((void*)0), 100);
   FUNC_13("failed to open %s\n", VAR_19);
   FUNC_3(1);
  }

  while(1)
  {
   VAR_17 = FUNC_6(VAR_16, 1, 1024, VAR_20);
   if(VAR_17 <= 0)
    break;
   FUNC_10(VAR_12 + VAR_18, VAR_16, VAR_17);
   VAR_18 += VAR_17;
  }
  FUNC_4(VAR_20);
  VAR_5 = 0;
 }

 FUNC_11(VAR_11, 0, sizeof(*VAR_11));
 FUNC_11(VAR_10, 0, sizeof(*VAR_10));


 FUNC_0(VAR_13, VAR_14);

 FUNC_9();

 VAR_7 = ((void*)0);

 VAR_9[0x3B46>>1] = 0xffff;
 VAR_8[0x4500>>2] = 0xffffffff;
 VAR_8[0x4510>>2] = 0xffffffff;


 FUNC_14(0, 2);
 FUNC_12(0);




 VAR_10->baseclock = VAR_13;
 VAR_10->rate = VAR_14;
 FUNC_1(VAR_1);

 VAR_15 = VAR_14;
}
