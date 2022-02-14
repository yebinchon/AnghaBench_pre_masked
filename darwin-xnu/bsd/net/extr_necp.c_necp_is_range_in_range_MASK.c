
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;

__attribute__((used)) static bool
FUNC_1(struct sockaddr *VAR_2, struct sockaddr *VAR_3, struct sockaddr *VAR_4, struct sockaddr *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  return (VAR_0);
 }


 VAR_6 = FUNC_0(VAR_2, VAR_4, 1);
 if (VAR_6 != 0 && VAR_6 != 1) {
  return (VAR_0);
 }


 VAR_6 = FUNC_0(VAR_3, VAR_5, 1);
 if (VAR_6 != 0 && VAR_6 != -1) {
  return (VAR_0);
 }

 return (VAR_1);
}
