
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct pfr_addr {int pfra_fback; } ;
typedef int ad ;


 scalar_t__ FUNC_0 (int,struct pfr_addr*,int,int) ;
 scalar_t__ FUNC_1 (struct pfr_addr*,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(user_addr_t VAR_1, int VAR_2, int VAR_3)
{
 struct pfr_addr VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_1 += sizeof (VAR_4)) {
  if (FUNC_0(VAR_1, &VAR_4, sizeof (VAR_4), VAR_3))
   break;
  VAR_4.pfra_fback = VAR_0;
  if (FUNC_1(&VAR_4, VAR_1, sizeof (VAR_4), VAR_3))
   break;
 }
}
