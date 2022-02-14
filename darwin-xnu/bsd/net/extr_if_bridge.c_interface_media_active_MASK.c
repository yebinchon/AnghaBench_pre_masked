
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct ifmediareq {int ifm_status; scalar_t__ ifm_count; } ;
typedef int ifmr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifmediareq*,int) ;
 scalar_t__ FUNC_1 (struct ifnet*,int ,int ,struct ifmediareq*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_3)
{
 struct ifmediareq VAR_4;
 int VAR_5 = 0;

 FUNC_0(&VAR_4, sizeof(VAR_4));
 if (FUNC_1(VAR_3, 0, VAR_2, &VAR_4) == 0) {
  if ((VAR_4.ifm_status & VAR_1) && VAR_4.ifm_count > 0)
   VAR_5 = VAR_4.ifm_status & VAR_0 ? 1 : 0;
 }

 return (VAR_5);
}
