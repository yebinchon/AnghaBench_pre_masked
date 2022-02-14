
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 int VAR_0 ;
 unsigned long FUNC_0 (void*,void const*,int,void**,int **,int ,int*) ;

int FUNC_1(void *VAR_1, const void *VAR_2, int VAR_3,
        void **VAR_4, jmp_buf **VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_0, &VAR_7);
 if (!VAR_7)
  return 0;
 else
  return VAR_3 - (VAR_6 - (unsigned long) VAR_1);
}
