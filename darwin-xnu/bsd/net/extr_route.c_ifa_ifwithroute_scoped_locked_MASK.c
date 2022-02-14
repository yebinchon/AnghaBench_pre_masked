
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifaddr {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ifaddr* FUNC_0 (int,struct sockaddr const*,struct sockaddr const*,unsigned int) ;

struct ifaddr *
FUNC_1(int VAR_2, const struct sockaddr *VAR_3,
    const struct sockaddr *VAR_4, unsigned int VAR_5)
{
 if (VAR_5 != VAR_0)
  VAR_2 |= VAR_1;
 else
  VAR_2 &= ~VAR_1;

 return (FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5));
}
