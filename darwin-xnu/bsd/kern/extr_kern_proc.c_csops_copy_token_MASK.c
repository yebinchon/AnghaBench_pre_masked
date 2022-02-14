
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_size_t ;
typedef int user_addr_t ;
typedef int uint32_t ;
typedef int length32 ;
typedef int fakeheader ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, size_t VAR_2, user_size_t VAR_3, user_addr_t VAR_4)
{
 char VAR_5[8] = { 0 };
 int VAR_6;

 if (VAR_3 < sizeof(VAR_5))
  return VAR_0;


 if (((void*)0) == VAR_1) {
  VAR_1 = VAR_5;
  VAR_2 = sizeof(VAR_5);
 } else if (VAR_3 < VAR_2) {

  uint32_t VAR_7 = FUNC_1((uint32_t)VAR_2);
  FUNC_2(&VAR_5[4], &VAR_7, sizeof(VAR_7));

  VAR_6 = FUNC_0(VAR_5, VAR_4, sizeof(VAR_5));
  if (VAR_6 == 0)
   return VAR_0;
  return VAR_6;
 }
 return FUNC_0(VAR_1, VAR_4, VAR_2);
}
