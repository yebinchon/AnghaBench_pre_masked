
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ip6_pktopts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ip6_pktopts* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct ip6_pktopts*) ;
 int FUNC_2 (int,int *,int,struct ip6_pktopts*,int,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, u_char *VAR_4, int VAR_5, struct ip6_pktopts **VAR_6,
    int VAR_7)
{
 struct ip6_pktopts *VAR_8;

 VAR_8 = *VAR_6;
 if (VAR_8 == ((void*)0)) {
  VAR_8 = FUNC_0(sizeof (*VAR_8), VAR_1, VAR_2);
  if (VAR_8 == ((void*)0))
   return (VAR_0);
  FUNC_1(VAR_8);
  *VAR_6 = VAR_8;
 }

 return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, 1, 0, VAR_7));
}
