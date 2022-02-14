
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ar9170 {int current_density; int current_factor; } ;
struct TYPE_2__ {int ampdu_settings; } ;
struct _carl9170_tx_superframe {TYPE_1__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct ar9170 *VAR_6, struct sk_buff *VAR_7)
{
 struct _carl9170_tx_superframe *VAR_8;
 int VAR_9;

 VAR_8 = (void *) VAR_7->data;

 VAR_9 = (VAR_8->s.ampdu_settings & VAR_2) <<
  VAR_3;
 if (VAR_9 != VAR_6->current_density) {
  VAR_6->current_density = VAR_9;
  VAR_8->s.ampdu_settings |=
   VAR_0;
 }

 VAR_9 = (VAR_8->s.ampdu_settings & VAR_4) <<
  VAR_5;

 if (VAR_9 != VAR_6->current_factor) {
  VAR_6->current_factor = VAR_9;
  VAR_8->s.ampdu_settings |=
   VAR_1;
 }
}
