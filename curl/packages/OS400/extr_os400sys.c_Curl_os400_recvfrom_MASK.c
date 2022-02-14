
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int laddr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int,struct sockaddr*,int*) ;
 int FUNC_1 (struct sockaddr*,int,struct sockaddr_storage*,int) ;

int
FUNC_2(int VAR_1, char * VAR_2, int VAR_3, int VAR_4,
                                struct sockaddr * VAR_5, int * VAR_6)
{
  int VAR_7;
  struct sockaddr_storage VAR_8;
  int VAR_9 = sizeof(VAR_8);

  if(!VAR_5 || !VAR_6 || *VAR_6 <= 0)
    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  VAR_8.ss_family = VAR_0;
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4,
                    (struct sockaddr *) &VAR_8, &VAR_9);

  if(VAR_7 < 0)
    return VAR_7;

  if(VAR_8.ss_family == VAR_0)
    VAR_9 = 0;
  else {
    VAR_9 = FUNC_1(VAR_5, *VAR_6, &VAR_8, VAR_9);
    if(VAR_9 < 0)
      return VAR_9;
  }
  *VAR_6 = VAR_9;
  return VAR_7;
}
