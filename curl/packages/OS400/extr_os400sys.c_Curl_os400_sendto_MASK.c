
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int,char*,int,int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_storage*,struct sockaddr*,int) ;

int
FUNC_2(int VAR_0, char * VAR_1, int VAR_2, int VAR_3,
                                struct sockaddr * VAR_4, int VAR_5)
{
  int VAR_6;
  struct sockaddr_storage VAR_7;

  VAR_6 = FUNC_1(&VAR_7, VAR_4, VAR_5);

  if(VAR_6 < 0)
    return -1;

  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, (struct sockaddr *) &VAR_7, VAR_6);
}
