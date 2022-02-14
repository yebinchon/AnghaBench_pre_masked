
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (char*,size_t,struct sockaddr*,size_t) ;
 scalar_t__ FUNC_1 (char*,size_t,struct sockaddr*,size_t) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, size_t VAR_1,
  struct sockaddr *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   VAR_4 = 0;
 }
 return VAR_4;
}
