
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_3,
           unsigned long VAR_4, void *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9, VAR_10;

 if ((VAR_4 * VAR_2) < VAR_0)
  return FUNC_1(VAR_3, VAR_4);


 VAR_8 = VAR_3;
 VAR_9 = VAR_3 + VAR_4;
 VAR_7 = VAR_8;

 while (VAR_7 < VAR_9) {
  if (FUNC_0(VAR_7)) {

   VAR_10 = VAR_7 - VAR_8;
   VAR_6 = FUNC_1(VAR_8, VAR_10);
   if (VAR_6)
    return VAR_6;

   VAR_7 += (VAR_0 / VAR_2);
   VAR_8 = VAR_7;
  } else
   VAR_7 += (VAR_1 / VAR_2);
 }


 VAR_10 = VAR_7 - VAR_8;
 return FUNC_1(VAR_8, VAR_10);
}
