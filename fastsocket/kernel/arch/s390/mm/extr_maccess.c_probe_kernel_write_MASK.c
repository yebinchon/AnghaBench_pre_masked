
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long FUNC_0 (void*,void*,size_t) ;

long FUNC_1(void *VAR_1, void *VAR_2, size_t VAR_3)
{
 long VAR_4 = 0;

 while (VAR_3) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   break;
  VAR_1 += VAR_4;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }
 return VAR_4 < 0 ? -VAR_0 : 0;
}
