
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int *,int ) ;
 int VAR_3 ;

int
FUNC_1(pid_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6;

 if (!VAR_5) {
  return VAR_0;
 }

 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_1, 0, ((void*)0), 0);
 if (VAR_6 == -1) {
  return VAR_3;
 }

 *VAR_5 = VAR_6;

 return 0;
}
