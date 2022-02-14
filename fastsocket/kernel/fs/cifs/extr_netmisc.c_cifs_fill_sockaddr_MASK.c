
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr*,char const*,int) ;
 int FUNC_1 (struct sockaddr*,unsigned short const) ;

int
FUNC_2(struct sockaddr *VAR_0, const char *VAR_1, int VAR_2,
     const unsigned short int VAR_3)
{
 if (!FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0;
 return FUNC_1(VAR_0, VAR_3);
}
