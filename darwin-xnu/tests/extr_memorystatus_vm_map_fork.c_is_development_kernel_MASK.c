
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(void)
{
 int VAR_1;
 int VAR_2 = 0;
 size_t VAR_3 = sizeof(VAR_2);

 VAR_1 = FUNC_0("kern.development", &VAR_2, &VAR_3, ((void*)0), 0);
 if (VAR_1 != 0) {
  return VAR_0;
 }

 return (VAR_2 != 0);
}
