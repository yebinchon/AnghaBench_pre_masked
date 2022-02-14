
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int *) ;
 scalar_t__ VAR_2 ;

int
FUNC_1(int VAR_3, struct sockaddr *VAR_4, socklen_t *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);


 if (VAR_6 < 0 && VAR_2 == VAR_1)
  VAR_2 = VAR_0;
 return VAR_6;
}
