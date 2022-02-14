
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int dummy; } ;


 scalar_t__ FUNC_0 (struct sockaddr const*,struct sockaddr const*) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr *VAR_0,
    const struct sockaddr *VAR_1)
{
 const struct sockaddr_in *VAR_2 = (const struct sockaddr_in *)VAR_0;
 const struct sockaddr_in *VAR_3 = (const struct sockaddr_in *)VAR_1;

 return FUNC_0(VAR_0, VAR_1) &&
  (VAR_2->sin_port == VAR_3->sin_port);
}
