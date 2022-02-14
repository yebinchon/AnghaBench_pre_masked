
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sastat {int spi; } ;


 scalar_t__ FUNC_0 (int ,struct sastat*) ;

__attribute__((used)) static int
FUNC_1 (struct sastat *VAR_0,
     u_int32_t VAR_1,
     struct sastat *VAR_2,
     u_int32_t *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 if (VAR_0 == ((void*)0) ||
     VAR_2 == ((void*)0) ||
     VAR_3 == ((void*)0)) {
  return -1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (FUNC_0(VAR_0[VAR_4].spi,
           &VAR_2[VAR_5]) == 0) {
   VAR_5++;
  }
 }
 *VAR_3 = VAR_5;

 if (VAR_5) {
  return 0;
 }
 return -1;
}
