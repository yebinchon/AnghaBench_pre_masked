
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 () ;
 int FUNC_3 (int ,size_t,int *) ;

int FUNC_4(int VAR_2)
{
 cpu_set_t VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2();

 if (VAR_2 < 0 || VAR_2 >= (int)VAR_4) {
  VAR_1 = VAR_0;
  return -1;
 }

 FUNC_1(&VAR_3);
 FUNC_0(VAR_2, &VAR_3);

 VAR_5 = FUNC_3(0, VAR_4, &VAR_3);

 FUNC_1(&VAR_3);

 return VAR_5;
}
