
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 unsigned int FUNC_0 (struct sockaddr const*) ;
 unsigned int FUNC_1 (struct sockaddr const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct sockaddr *VAR_1)
{
 unsigned int VAR_2;

 switch (VAR_1->sa_family) {
 case 129:
  VAR_2 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_1(VAR_1);
  break;
 default:
  VAR_2 = 0;
 }
 return VAR_2 & (VAR_0 - 1);
}
