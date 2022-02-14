
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef scalar_t__ u_int32_t ;
typedef size_t u_int ;
struct uio {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct uio*) ;

int
FUNC_1(struct uio **VAR_1, u_int VAR_2)
{
 user_ssize_t VAR_3 = 0;
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct uio *VAR_5 = VAR_1[VAR_4];

  if (VAR_5 != ((void*)0)) {
   user_ssize_t VAR_6 = FUNC_0(VAR_5);





   if (VAR_6 < 0 || (u_int32_t)VAR_6 > VAR_0)
    return (0);

   VAR_3 += VAR_6;
   if (VAR_3 < 0 || (u_int32_t)VAR_3 > VAR_0)
    return (0);
  }
 }
 return (1);
}
