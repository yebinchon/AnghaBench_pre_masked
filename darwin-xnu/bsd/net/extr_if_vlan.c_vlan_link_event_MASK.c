
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int dummy; } ;
struct ifmediareq {scalar_t__ ifm_count; int ifm_status; int ifm_name; } ;
typedef int ifmr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifmediareq*,int) ;
 scalar_t__ FUNC_1 (struct ifnet*,int ,int ,struct ifmediareq*) ;
 char* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (int ,int,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct ifnet * VAR_5, struct ifnet * VAR_6)
{
    struct ifmediareq VAR_7;


    FUNC_0(&VAR_7, sizeof(VAR_7));
    FUNC_5(VAR_7.ifm_name, sizeof(VAR_7.ifm_name),
      "%s%d", FUNC_2(VAR_6), FUNC_3(VAR_6));
    if (FUNC_1(VAR_6, 0, VAR_4, &VAR_7) == 0
 && VAR_7.ifm_count > 0 && VAR_7.ifm_status & VAR_1) {
 u_int32_t VAR_8;

 VAR_8 = (VAR_7.ifm_status & VAR_0)
     ? VAR_3 : VAR_2;
 FUNC_4(VAR_5, VAR_8);
    }
    return;
}
