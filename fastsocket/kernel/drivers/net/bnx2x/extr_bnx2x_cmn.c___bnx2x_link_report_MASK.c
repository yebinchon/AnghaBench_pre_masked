
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_link_report_data {int line_speed; scalar_t__ link_report_flags; } ;
struct TYPE_3__ {scalar_t__ link_report_flags; } ;
struct bnx2x {int dev; TYPE_1__ last_reported_link; int link_cnt; } ;
typedef int cur_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_link_report_data*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x_link_report_data*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,struct bnx2x_link_report_data*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int ,char const*,char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__*) ;

void FUNC_12(struct bnx2x *VAR_4)
{
 struct bnx2x_link_report_data VAR_5;


 if (FUNC_1(VAR_4) && !FUNC_0(VAR_4))
  FUNC_3(VAR_4);


 FUNC_2(VAR_4, &VAR_5);


 if (!FUNC_4(&VAR_5, &VAR_4->last_reported_link, sizeof(VAR_5)) ||
     (FUNC_11(VAR_1,
        &VAR_4->last_reported_link.link_report_flags) &&
      FUNC_11(VAR_1,
        &VAR_5.link_report_flags)))
  return;

 VAR_4->link_cnt++;




 FUNC_5(&VAR_4->last_reported_link, &VAR_5, sizeof(VAR_5));

 if (FUNC_11(VAR_1,
       &VAR_5.link_report_flags)) {
  FUNC_8(VAR_4->dev);
  FUNC_6(VAR_4->dev, "NIC Link is Down\n");
  return;
 } else {
  const char *VAR_6;
  const char *VAR_7;

  FUNC_9(VAR_4->dev);

  if (FUNC_10(VAR_0,
           &VAR_5.link_report_flags))
   VAR_6 = "full";
  else
   VAR_6 = "half";





  if (VAR_5.link_report_flags) {
   if (FUNC_11(VAR_2,
         &VAR_5.link_report_flags)) {
    if (FUNC_11(VAR_3,
         &VAR_5.link_report_flags))
     VAR_7 = "ON - receive & transmit";
    else
     VAR_7 = "ON - receive";
   } else {
    VAR_7 = "ON - transmit";
   }
  } else {
   VAR_7 = "none";
  }
  FUNC_7(VAR_4->dev, "NIC Link is Up, %d Mbps %s duplex, Flow control: %s\n",
       VAR_5.line_speed, VAR_6, VAR_7);
 }
}
