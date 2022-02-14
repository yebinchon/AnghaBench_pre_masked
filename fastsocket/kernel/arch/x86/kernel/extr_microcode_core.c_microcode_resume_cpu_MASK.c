
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucode_cpu_info {int mc; } ;
typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 struct ucode_cpu_info* VAR_2 ;

__attribute__((used)) static enum ucode_state FUNC_2(int VAR_3)
{
 struct ucode_cpu_info *VAR_4 = VAR_2 + VAR_3;

 if (!VAR_4->mc)
  return VAR_0;

 FUNC_1("microcode: CPU%d updated upon resume\n", VAR_3);
 FUNC_0(VAR_3);

 return VAR_1;
}
