
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tf_triangle ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (tf_triangle *VAR_0)
{
 int VAR_1;

 for (VAR_1=0 ; VAR_1<sizeof(tf_triangle)/4 ; VAR_1++)
 {
  ((int *)VAR_0)[VAR_1] = FUNC_0 (((int *)VAR_0)[VAR_1]);
 }
}
