
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_addr_t ;
typedef int quad_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;

int
FUNC_2(user_addr_t VAR_4, size_t *VAR_5,
            user_addr_t VAR_6, size_t VAR_7, quad_t *VAR_8)
{
 int VAR_9 = 0;

 if (VAR_4 != VAR_3 && VAR_5 == ((void*)0))
  return (VAR_0);
 if (VAR_4 && *VAR_5 < sizeof(quad_t))
  return (VAR_2);
 if (VAR_6 && VAR_7 != sizeof(quad_t))
  return (VAR_1);
 *VAR_5 = sizeof(quad_t);
 if (VAR_4)
  VAR_9 = FUNC_1(VAR_8, VAR_4, sizeof(quad_t));
 if (VAR_9 == 0 && VAR_6)
  VAR_9 = FUNC_0(VAR_6, VAR_8, sizeof(quad_t));
 return (VAR_9);
}
