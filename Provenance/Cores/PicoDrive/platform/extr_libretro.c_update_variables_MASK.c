
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_variable {char* key; int * value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,struct retro_variable*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct retro_variable VAR_5;

 VAR_5.value = ((void*)0);
 VAR_5.key = "picodrive_input1";
 if (FUNC_1(VAR_4, &VAR_5) && VAR_5.value)
  FUNC_0(0, FUNC_2(VAR_5.value));

 VAR_5.value = ((void*)0);
 VAR_5.key = "picodrive_input2";
 if (FUNC_1(VAR_4, &VAR_5) && VAR_5.value)
  FUNC_0(1, FUNC_2(VAR_5.value));

 VAR_5.value = ((void*)0);
 VAR_5.key = "picodrive_sprlim";
 if (FUNC_1(VAR_4, &VAR_5) && VAR_5.value) {
  if (FUNC_3(VAR_5.value, "enabled") == 0)
   VAR_3 |= VAR_0;
  else
   VAR_3 &= ~VAR_0;
 }

 VAR_5.value = ((void*)0);
 VAR_5.key = "picodrive_ramcart";
 if (FUNC_1(VAR_4, &VAR_5) && VAR_5.value) {
  if (FUNC_3(VAR_5.value, "enabled") == 0)
   VAR_3 |= VAR_2;
  else
   VAR_3 &= ~VAR_2;
 }
}
