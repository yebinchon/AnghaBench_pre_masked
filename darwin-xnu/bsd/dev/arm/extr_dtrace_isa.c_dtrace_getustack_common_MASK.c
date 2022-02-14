
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(uint64_t * VAR_1, int VAR_2, user_addr_t VAR_3,
   user_addr_t VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_1 == ((void*)0) || VAR_2 > 0);

 while (VAR_3 != 0) {
  VAR_5++;
  if (VAR_1 != ((void*)0)) {
   *VAR_1++ = (uint64_t) VAR_3;
   VAR_2--;
   if (VAR_2 <= 0)
    break;
  }

  if (VAR_4 == 0)
   break;

  VAR_3 = FUNC_1((VAR_4 + VAR_0));
  VAR_4 = FUNC_1(VAR_4);
 }

 return (VAR_5);
}
