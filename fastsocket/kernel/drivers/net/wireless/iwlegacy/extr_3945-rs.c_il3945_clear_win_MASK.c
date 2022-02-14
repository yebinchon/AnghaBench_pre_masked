
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il3945_rate_scale_data {int success_ratio; scalar_t__ stamp; int average_tpt; scalar_t__ counter; scalar_t__ success_counter; scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct il3945_rate_scale_data *VAR_1)
{
 VAR_1->data = 0;
 VAR_1->success_counter = 0;
 VAR_1->success_ratio = -1;
 VAR_1->counter = 0;
 VAR_1->average_tpt = VAR_0;
 VAR_1->stamp = 0;
}
