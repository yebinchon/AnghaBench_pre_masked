
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (int ,int*) ;
 int VAR_0 ;

__attribute__((used)) static void *FUNC_4(void)
{
 void *VAR_1;
 int VAR_2, VAR_3;

 VAR_1 = FUNC_3(VAR_0, &VAR_2);
 if (FUNC_1(VAR_1))
  goto out;
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  return FUNC_0(VAR_3);
out:
 return VAR_1;
}
