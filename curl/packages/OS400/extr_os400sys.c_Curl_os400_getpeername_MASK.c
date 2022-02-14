
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int laddr ;


 int FUNC_0 (int,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockaddr*,int,struct sockaddr_storage*,int) ;

int
FUNC_2(int VAR_0, struct sockaddr *VAR_1, int *VAR_2)
{
  struct sockaddr_storage VAR_3;
  int VAR_4 = sizeof(VAR_3);
  int VAR_5 = FUNC_0(VAR_0, (struct sockaddr *) &VAR_3, &VAR_4);

  if(!VAR_5) {
    VAR_4 = FUNC_1(VAR_1, *VAR_2, &VAR_3, VAR_4);
    if(VAR_4 < 0)
      return VAR_4;
    *VAR_2 = VAR_4;
  }

  return VAR_5;
}
