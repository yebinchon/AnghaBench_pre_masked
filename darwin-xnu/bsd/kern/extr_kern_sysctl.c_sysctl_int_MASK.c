
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int*,scalar_t__,int) ;
 int VAR_4 ;

int
FUNC_3(user_addr_t VAR_5, size_t *VAR_6,
           user_addr_t VAR_7, size_t VAR_8, int *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_5 != VAR_3 && VAR_6 == ((void*)0))
  return (VAR_0);
 if (VAR_5 && *VAR_6 < sizeof(int))
  return (VAR_2);
 if (VAR_7 && VAR_8 != sizeof(int))
  return (VAR_1);
 *VAR_6 = sizeof(int);
 if (VAR_5)
  VAR_10 = FUNC_2(VAR_9, VAR_5, sizeof(int));
 if (VAR_10 == 0 && VAR_7) {
  VAR_10 = FUNC_1(VAR_7, VAR_9, sizeof(int));
  FUNC_0(VAR_4, *VAR_9);
 }
 return (VAR_10);
}
