
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucode_cpu_info {scalar_t__ valid; } ;
typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct ucode_cpu_info* VAR_0 ;

__attribute__((used)) static enum ucode_state FUNC_2(int VAR_1)
{
 struct ucode_cpu_info *VAR_2 = VAR_0 + VAR_1;
 enum ucode_state VAR_3;

 if (VAR_2->valid)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_0(VAR_1);

 return VAR_3;
}
