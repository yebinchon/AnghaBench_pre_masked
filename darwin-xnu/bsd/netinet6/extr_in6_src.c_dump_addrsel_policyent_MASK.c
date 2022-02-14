
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walkarg {int w_req; } ;
struct in6_addrpolicy {int dummy; } ;


 int FUNC_0 (int ,struct in6_addrpolicy const*,int) ;

__attribute__((used)) static int
FUNC_1(const struct in6_addrpolicy *VAR_0, void *VAR_1)
{
 int VAR_2 = 0;
 struct walkarg *VAR_3 = VAR_1;

 VAR_2 = FUNC_0(VAR_3->w_req, VAR_0, sizeof (*VAR_0));

 return (VAR_2);
}
