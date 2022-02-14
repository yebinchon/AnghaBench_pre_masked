
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, int VAR_6)
{
 int VAR_7 = 6;
 int VAR_8, VAR_9, VAR_10 = VAR_6;
 int VAR_11 = VAR_2;

 FUNC_0(VAR_4 + VAR_6, 0xff, VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_1(VAR_10++, (unsigned long *) VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if ((VAR_1 - VAR_10) >= VAR_2)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_1 - VAR_10;
  if (VAR_11 <=0)
   break;
  for (VAR_8 = 0; VAR_8< VAR_11; VAR_8++) {
   VAR_4[VAR_6 + VAR_7 +
    (VAR_9 * VAR_2) + VAR_8] = VAR_3[VAR_8];
   FUNC_1(VAR_10++, (unsigned long *) VAR_5);
  }
 }
 return VAR_10 - 1;
}
