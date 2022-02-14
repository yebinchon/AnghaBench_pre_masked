
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_raw_obj {int (* wait_comp ) (struct bnx2x*,struct bnx2x_raw_obj*) ;int (* clear_pending ) (struct bnx2x_raw_obj*) ;int (* set_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_rss_config_obj {int (* config_rss ) (struct bnx2x*,struct bnx2x_config_rss_params*) ;struct bnx2x_raw_obj raw; } ;
struct bnx2x_config_rss_params {int ramrod_flags; struct bnx2x_rss_config_obj* rss_obj; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x_raw_obj*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_2 (struct bnx2x_raw_obj*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_raw_obj*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct bnx2x *VAR_2,
       struct bnx2x_config_rss_params *VAR_3)
{
 int VAR_4;
 struct bnx2x_rss_config_obj *VAR_5 = VAR_3->rss_obj;
 struct bnx2x_raw_obj *VAR_6 = &VAR_5->raw;


 if (FUNC_4(VAR_1, &VAR_3->ramrod_flags))
  return 0;

 VAR_6->set_pending(VAR_6);

 VAR_4 = VAR_5->config_rss(VAR_2, VAR_3);
 if (VAR_4 < 0) {
  VAR_6->clear_pending(VAR_6);
  return VAR_4;
 }

 if (FUNC_4(VAR_0, &VAR_3->ramrod_flags))
  VAR_4 = VAR_6->wait_comp(VAR_2, VAR_6);

 return VAR_4;
}
