
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jmp_buf ;


 scalar_t__ FUNC_0 (int *) ;
 void FUNC_1 (void*,void const*,int) ;

unsigned long FUNC_2(void *VAR_0, const void *VAR_1, int VAR_2,
        void **VAR_3, jmp_buf **VAR_4,
        void (*VAR_5)(void *VAR_6, const void *VAR_7,
     int VAR_8), int *VAR_9)
{
 unsigned long *VAR_10 = (unsigned long *) VAR_3, VAR_11;

 jmp_buf VAR_12;
 *VAR_4 = &VAR_12;
 if (FUNC_0(&VAR_12) == 0) {
  (*VAR_5)(VAR_0, VAR_1, VAR_2);
  VAR_11 = 0;
  *VAR_9 = 0;
 }
 else {
  VAR_11 = *VAR_10;
  *VAR_9 = 1;
 }
 *VAR_3 = ((void*)0);
 *VAR_4 = ((void*)0);
 return VAR_11;
}
