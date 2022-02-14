
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int video; int * vsram; int * cram; int * vram; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int,int,void*) ;
 int FUNC_3 (void*,int,int ) ;
 char* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 void* FUNC_7 (char*,char*) ;
 void* FUNC_8 () ;
 void* FUNC_9 (char*,char*) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(int VAR_5)
{
 void *VAR_6, *VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_4(1, 0, VAR_5);
 if (!VAR_8) return;

 VAR_7 = FUNC_8();
 if (VAR_7 == ((void*)0)) return;

 if (FUNC_12(VAR_8 + FUNC_13(VAR_8) - 3, ".gz") == 0) {
  VAR_6 = FUNC_9(VAR_8, "rb");
  FUNC_6(1);
 } else {
  VAR_6 = FUNC_7(VAR_8, "rb");
  FUNC_6(0);
 }

 if (VAR_6) {
  if (VAR_2 & VAR_0) {
   FUNC_0(VAR_6);
  } else {
   FUNC_3(VAR_6, 0x10020, VAR_4);
   FUNC_2(VAR_1.vram, 1, sizeof(VAR_1.vram), VAR_6);
   FUNC_3(VAR_6, 0x2000, VAR_3);
   FUNC_2(VAR_1.cram, 1, sizeof(VAR_1.cram), VAR_6);
   FUNC_2(VAR_1.vsram, 1, sizeof(VAR_1.vsram), VAR_6);
   FUNC_3(VAR_6, 0x221a0, VAR_4);
   FUNC_2(&VAR_1.video, 1, sizeof(VAR_1.video), VAR_6);
  }
  FUNC_1(VAR_6);
 }

 FUNC_5(0);
 FUNC_10(1, 0);

 FUNC_11(VAR_7);
}
