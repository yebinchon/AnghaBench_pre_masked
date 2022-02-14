
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(uint64_t * VAR_2, int VAR_3, user_addr_t VAR_4,
   user_addr_t VAR_5)
{
 int VAR_6 = 0;
 boolean_t VAR_7 = FUNC_4(FUNC_1());

 FUNC_0(VAR_2 == ((void*)0) || VAR_3 > 0);

 while (VAR_4 != 0) {
  VAR_6++;
  if (VAR_2 != ((void*)0)) {
   *VAR_2++ = (uint64_t) VAR_4;
   VAR_3--;
   if (VAR_3 <= 0)
    break;
  }

  if (VAR_5 == 0)
   break;

  if (VAR_7) {
   VAR_4 = FUNC_3((VAR_5 + VAR_1));
   VAR_5 = FUNC_3(VAR_5);
  } else {
   VAR_4 = FUNC_2((VAR_5 + VAR_0));
   VAR_5 = FUNC_2(VAR_5);
  }
 }

 return (VAR_6);
}
