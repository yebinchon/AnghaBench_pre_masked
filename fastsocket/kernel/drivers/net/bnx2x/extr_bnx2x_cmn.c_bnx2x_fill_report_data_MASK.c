
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct bnx2x_link_report_data {int link_report_flags; int line_speed; } ;
struct TYPE_2__ {scalar_t__ duplex; int flow_ctrl; int link_up; } ;
struct bnx2x {int flags; TYPE_1__ link_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x_link_report_data*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_8,
       struct bnx2x_link_report_data *VAR_9)
{
 u16 VAR_10 = FUNC_1(VAR_8);

 FUNC_2(VAR_9, 0, sizeof(*VAR_9));


 VAR_9->line_speed = VAR_10;


 if (!VAR_8->link_vars.link_up || (VAR_8->flags & VAR_7))
  FUNC_0(VAR_3,
     &VAR_9->link_report_flags);


 if (VAR_8->link_vars.duplex == VAR_6)
  FUNC_0(VAR_2, &VAR_9->link_report_flags);


 if (VAR_8->link_vars.flow_ctrl & VAR_0)
  FUNC_0(VAR_4, &VAR_9->link_report_flags);


 if (VAR_8->link_vars.flow_ctrl & VAR_1)
  FUNC_0(VAR_5, &VAR_9->link_report_flags);
}
