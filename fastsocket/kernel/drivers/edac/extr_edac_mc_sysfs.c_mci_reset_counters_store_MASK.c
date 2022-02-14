
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {int nr_csrows; int start_time; struct csrow_info* csrows; scalar_t__ ce_count; scalar_t__ ue_count; scalar_t__ ce_noinfo_count; scalar_t__ ue_noinfo_count; } ;
struct csrow_info {int nr_channels; TYPE_1__* channels; scalar_t__ ce_count; scalar_t__ ue_count; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ ce_count; } ;


 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_0(struct mem_ctl_info *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5;

 VAR_1->ue_noinfo_count = 0;
 VAR_1->ce_noinfo_count = 0;
 VAR_1->ue_count = 0;
 VAR_1->ce_count = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr_csrows; VAR_4++) {
  struct csrow_info *VAR_6 = &VAR_1->csrows[VAR_4];

  VAR_6->ue_count = 0;
  VAR_6->ce_count = 0;

  for (VAR_5 = 0; VAR_5 < VAR_6->nr_channels; VAR_5++)
   VAR_6->channels[VAR_5].ce_count = 0;
 }

 VAR_1->start_time = VAR_0;
 return VAR_3;
}
