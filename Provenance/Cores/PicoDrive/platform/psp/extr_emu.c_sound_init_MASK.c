
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SceUID ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char*,int ,int ,int,int *) ;
 int FUNC_2 (char*,int ,int,int,int ,int *) ;
 int FUNC_3 (int,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(void)
{
 SceUID VAR_7;
 int VAR_8;

 VAR_4 = FUNC_1("sndsem", 0, 0, 1, ((void*)0));
 if (VAR_4 < 0) FUNC_0("sceKernelCreateSema() failed: %i\n", VAR_4);

 VAR_3 = VAR_2 = 0;
 VAR_1 = VAR_0;
 VAR_6 = 0;
 VAR_7 = FUNC_2("sndthread", VAR_5, 0x12, 0x10000, 0, ((void*)0));
 if (VAR_7 >= 0)
 {
  VAR_8 = FUNC_3(VAR_7, 0, 0);
  if (VAR_8 < 0) FUNC_0("sound_init: sceKernelStartThread returned %08x\n", VAR_8);
 }
 else
  FUNC_0("sceKernelCreateThread failed: %i\n", VAR_7);
}
