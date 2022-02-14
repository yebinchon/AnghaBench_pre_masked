
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;
 int FUNC_0 (void*,size_t,int) ;
 scalar_t__ VAR_3 ;

int
FUNC_1(void *VAR_4, size_t VAR_5, int VAR_6)
{
 void *VAR_7;
 size_t VAR_8;
 int VAR_9;






 VAR_8 = ((uintptr_t) VAR_4) & VAR_2;
 VAR_7 = (void *) (((uintptr_t) VAR_4) & ~VAR_2);
 VAR_5 += VAR_8;
 VAR_9 = FUNC_0(VAR_7, VAR_5, VAR_6);
 if (VAR_9 == -1 && VAR_3 == VAR_1) {





  VAR_3 = VAR_0;
 }
 return VAR_9;
}
