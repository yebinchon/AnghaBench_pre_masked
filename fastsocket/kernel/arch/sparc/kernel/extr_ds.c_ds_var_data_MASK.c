
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct ds_var_resp {int result; TYPE_1__ hdr; } ;
struct ds_info {int dummy; } ;
struct ds_data {int dummy; } ;
struct ds_cap_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct ds_info *VAR_4,
   struct ds_cap_state *VAR_5,
   void *VAR_6, int VAR_7)
{
 struct ds_data *VAR_8 = VAR_6;
 struct ds_var_resp *VAR_9;

 VAR_9 = (struct ds_var_resp *) (VAR_8 + 1);

 if (VAR_9->hdr.type != VAR_1 &&
     VAR_9->hdr.type != VAR_0)
  return;

 VAR_3 = VAR_9->result;
 FUNC_0();
 VAR_2 = 1;
}
