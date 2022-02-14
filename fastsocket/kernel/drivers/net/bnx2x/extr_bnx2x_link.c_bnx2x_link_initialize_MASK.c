
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct link_vars {scalar_t__ line_speed; int link_status; } ;
struct link_params {scalar_t__ loopback_mode; int num_phys; int port; struct bnx2x_phy* phy; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; int flags; int supported; int (* config_init ) (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;} ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (struct link_params*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct link_params*) ;
 int FUNC_7 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_8 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_9 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_10 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static int FUNC_11(struct link_params *VAR_16,
     struct link_vars *VAR_17)
{
 int VAR_18 = 0;
 u8 VAR_19, VAR_20;
 struct bnx2x *VAR_21 = VAR_16->bp;





 VAR_17->line_speed = VAR_16->phy[VAR_3].req_line_speed;





 if (!FUNC_4(VAR_21))
  FUNC_7(&VAR_16->phy[VAR_3], VAR_16, VAR_17);

 VAR_20 = (FUNC_3(VAR_16) ||
         (VAR_16->loopback_mode == VAR_6));

 if (VAR_20 ||
     (VAR_16->phy[VAR_0].flags & VAR_2) ||
     (VAR_16->loopback_mode == VAR_5)) {
  struct bnx2x_phy *VAR_22 = &VAR_16->phy[VAR_3];
  if (VAR_17->line_speed == VAR_14 &&
      (FUNC_0(VAR_21) ||
       FUNC_1(VAR_21)))
   FUNC_8(VAR_22, VAR_16);
   if (VAR_16->phy[VAR_3].config_init)
    VAR_16->phy[VAR_3].config_init(VAR_22,
         VAR_16,
         VAR_17);
 }


 if (VAR_20) {
  if (VAR_16->phy[VAR_3].supported &
      VAR_15)
   VAR_17->link_status |= VAR_4;
 } else {
  for (VAR_19 = VAR_0; VAR_19 < VAR_16->num_phys;
        VAR_19++) {





   if (VAR_16->phy[VAR_19].supported &
       VAR_15)
    VAR_17->link_status |= VAR_4;

   if (VAR_19 == VAR_1 &&
       (FUNC_6(VAR_16) ==
        VAR_13)) {
    FUNC_2(VAR_7,
       "Not initializing second phy\n");
    continue;
   }
   VAR_16->phy[VAR_19].config_init(
    &VAR_16->phy[VAR_19],
    VAR_16, VAR_17);
  }
 }

 FUNC_5(VAR_21, VAR_9 +
         VAR_16->port*4,
         (VAR_11 |
   VAR_12 |
   VAR_10 |
   VAR_8));
 return VAR_18;
}
