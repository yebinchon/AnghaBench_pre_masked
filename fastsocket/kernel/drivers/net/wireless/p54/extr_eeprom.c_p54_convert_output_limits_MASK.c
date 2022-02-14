
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pda_channel_output_limit {int dummy; } ;
struct p54_common {TYPE_1__* output_limit; } ;
struct ieee80211_hw {int wiphy; struct p54_common* priv; } ;
struct TYPE_2__ {int entries; int entry_size; int data; scalar_t__ offset; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_3,
         u8 *VAR_4, size_t VAR_5)
{
 struct p54_common *VAR_6 = VAR_3->priv;

 if (VAR_5 < 2)
  return -VAR_0;

 if (VAR_4[0] != 0) {
  FUNC_2(VAR_3->wiphy, "unknown output power db revision:%x\n",
     VAR_4[0]);
  return -VAR_0;
 }

 if (2 + VAR_4[1] * sizeof(struct pda_channel_output_limit) > VAR_5)
  return -VAR_0;

 VAR_6->output_limit = FUNC_0(VAR_4[1] *
  sizeof(struct pda_channel_output_limit) +
  sizeof(*VAR_6->output_limit), VAR_2);

 if (!VAR_6->output_limit)
  return -VAR_1;

 VAR_6->output_limit->offset = 0;
 VAR_6->output_limit->entries = VAR_4[1];
 VAR_6->output_limit->entry_size =
  sizeof(struct pda_channel_output_limit);
 VAR_6->output_limit->len = VAR_6->output_limit->entry_size *
      VAR_6->output_limit->entries +
      VAR_6->output_limit->offset;

 FUNC_1(VAR_6->output_limit->data, &VAR_4[2],
        VAR_4[1] * sizeof(struct pda_channel_output_limit));

 return 0;
}
