
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SceKernelLoadExecVSHParam {int size; char* key; int unk5; scalar_t__ unk4; scalar_t__ configfile; int * vshmain_args; scalar_t__ vshmain_args_size; void* argp; int args; } ;
typedef int game_param ;
typedef int SceSize ;


 int FUNC_0 (struct SceKernelLoadExecVSHParam*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,struct SceKernelLoadExecVSHParam*) ;
 scalar_t__ VAR_0 ;

void FUNC_3(const char *VAR_1, SceSize VAR_2, void *VAR_3)
{
   struct SceKernelLoadExecVSHParam VAR_4;

   VAR_0 = 0;

   FUNC_0(&VAR_4,0,sizeof(VAR_4));

   VAR_4.size = sizeof(VAR_4);
   VAR_4.args = VAR_2;
   VAR_4.argp = VAR_3;
   VAR_4.key = "game";
   VAR_4.vshmain_args_size = 0;
   VAR_4.vshmain_args = ((void*)0);
   VAR_4.configfile = 0;
   VAR_4.unk4 = 0;
   VAR_4.unk5 = 0x10000;

   int VAR_5 = FUNC_1(0);

   int VAR_6 = FUNC_2(VAR_1, &VAR_4);
   FUNC_1(VAR_5);
}
