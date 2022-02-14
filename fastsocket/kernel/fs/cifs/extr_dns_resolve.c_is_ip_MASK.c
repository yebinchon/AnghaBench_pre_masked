
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr*,char const*,int) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1)
{
 struct sockaddr_storage VAR_2;

 return FUNC_0((struct sockaddr *)&VAR_2, VAR_0, VAR_1);
}
