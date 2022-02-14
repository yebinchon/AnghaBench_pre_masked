
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,char const*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

uint64_t
FUNC_2(uint32_t VAR_2, uint64_t VAR_3, const char *VAR_4)
{
 if (!FUNC_1(VAR_2)) {
  return 0;
 }

 if ((int64_t)VAR_3 == -1) {
  VAR_1 = VAR_0;
  return (uint64_t)-1;
 }

 if (VAR_3 == 0 && VAR_4 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (uint64_t)-1;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
