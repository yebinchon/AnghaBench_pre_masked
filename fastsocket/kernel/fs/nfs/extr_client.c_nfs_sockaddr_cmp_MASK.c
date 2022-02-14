
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;




 int FUNC_0 (struct sockaddr const*,struct sockaddr const*) ;
 int FUNC_1 (struct sockaddr const*,struct sockaddr const*) ;

__attribute__((used)) static int FUNC_2(const struct sockaddr *VAR_0,
       const struct sockaddr *VAR_1)
{
 if (VAR_0->sa_family != VAR_1->sa_family)
  return 0;

 switch (VAR_0->sa_family) {
 case 129:
  return FUNC_0(VAR_0, VAR_1);
 case 128:
  return FUNC_1(VAR_0, VAR_1);
 }
 return 0;
}
