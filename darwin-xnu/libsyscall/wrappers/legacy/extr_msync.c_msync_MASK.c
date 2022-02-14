
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 uintptr_t VAR_0 ;
 int FUNC_0 (void*,size_t,int) ;

int
FUNC_1(void *VAR_1, size_t VAR_2, int VAR_3)
{
 size_t VAR_4;






 VAR_4 = ((uintptr_t) VAR_1) & VAR_0;
 VAR_1 = (void *) (((uintptr_t) VAR_1) & ~VAR_0);
 VAR_2 += VAR_4;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
