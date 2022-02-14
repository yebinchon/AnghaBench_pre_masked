
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_2, u8 *VAR_3,
  u8 *VAR_4)
{
 unsigned int VAR_5;
 u8 VAR_6, VAR_7;
 int VAR_8 = VAR_1;
 int VAR_9;

 *VAR_4 = 1;
 *VAR_3 = 0;

 for (VAR_5 = VAR_0; VAR_5 > 0; VAR_5--) {
  VAR_7 = ((VAR_2 * VAR_5) / VAR_1) & 0xff;
  VAR_6 = VAR_5 - VAR_7;
  VAR_9 = (VAR_1 * VAR_7) / VAR_5;


  if (FUNC_0(VAR_9 - VAR_2) <= FUNC_0(VAR_8 - VAR_2)) {
   *VAR_3 = VAR_6;
   *VAR_4 = VAR_7;
   VAR_8 = VAR_9;
  }
 }

 return VAR_8;
}
