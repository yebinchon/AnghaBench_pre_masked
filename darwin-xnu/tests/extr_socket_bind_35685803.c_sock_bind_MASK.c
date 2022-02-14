
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_len; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int FUNC_0 (int,struct sockaddr const*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_1, int VAR_2)
{
 struct sockaddr_in VAR_3 = {
  .sin_len = sizeof(VAR_3),
  .sin_family = VAR_0,
 };

 VAR_3.sin_port = FUNC_1(VAR_2);
 return (FUNC_0(VAR_1, (const struct sockaddr *)&VAR_3, sizeof(VAR_3)));
}
