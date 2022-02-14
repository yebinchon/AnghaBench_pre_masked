
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int ssize_t ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,void const*,size_t,int,struct sockaddr const*,int ) ;
 scalar_t__ VAR_2 ;

ssize_t
FUNC_1(int VAR_3, const void *VAR_4, size_t VAR_5, int VAR_6, const struct sockaddr *VAR_7, socklen_t VAR_8)
{
 int VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);


 if (VAR_9 < 0 && VAR_2 == VAR_1)
  VAR_2 = VAR_0;
 return VAR_9;
}
