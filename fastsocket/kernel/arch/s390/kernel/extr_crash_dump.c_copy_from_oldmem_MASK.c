
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (void*,void*,size_t) ;
 unsigned long FUNC_1 (size_t,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, void *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6;

 if ((unsigned long) VAR_3 < VAR_1) {
  VAR_5 = FUNC_1(VAR_4, VAR_1 - (unsigned long) VAR_3);
  VAR_6 = FUNC_0(VAR_2, VAR_3 + VAR_0, VAR_5);
  if (VAR_6)
   return VAR_6;
 }
 return FUNC_0(VAR_2 + VAR_5, VAR_3 + VAR_5, VAR_4 - VAR_5);
}
