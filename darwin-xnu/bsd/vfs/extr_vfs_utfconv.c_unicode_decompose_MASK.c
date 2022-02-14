
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int*) ;

__attribute__((used)) static int
FUNC_1(u_int16_t VAR_7, u_int16_t *VAR_8)
{
 if ((VAR_7 >= VAR_2) &&
     (VAR_7 <= (VAR_2 + VAR_3))) {
  u_int32_t VAR_9;

  VAR_7 -= VAR_2;
  VAR_9 = (VAR_7 % VAR_5 ? 3 : 2);

  *(VAR_8++) =
   VAR_7 / VAR_1 + VAR_0;
  *(VAR_8++) =
   (VAR_7 % VAR_1) / VAR_5 + VAR_6;
  if (VAR_9 > 2)
   *VAR_8 = (VAR_7 % VAR_5) + VAR_4;
  return (VAR_9);
 } else {
  return (FUNC_0(VAR_7, VAR_8));
 }
}
