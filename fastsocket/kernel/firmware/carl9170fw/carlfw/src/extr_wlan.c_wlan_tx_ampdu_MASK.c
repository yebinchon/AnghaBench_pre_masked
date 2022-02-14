
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ba_end; scalar_t__ ampdu; } ;
struct TYPE_10__ {TYPE_2__ mac; } ;
struct TYPE_8__ {int i3e; } ;
struct TYPE_11__ {TYPE_3__ hdr; TYPE_1__ data; } ;
struct TYPE_13__ {unsigned int queue; } ;
struct carl9170_tx_superframe {TYPE_4__ f; TYPE_6__ s; } ;
struct TYPE_12__ {struct carl9170_tx_superframe** ampdu_prev; } ;
struct TYPE_14__ {TYPE_5__ wlan; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct carl9170_tx_superframe *VAR_1)
{
 unsigned int VAR_2 = VAR_1->s.queue;
 struct carl9170_tx_superframe *VAR_3 = VAR_0.wlan.ampdu_prev[VAR_2];

 if (VAR_1->f.hdr.mac.ampdu) {
  if (VAR_3 &&
      !FUNC_0(&VAR_1->f.data.i3e, &VAR_3->f.data.i3e))
   VAR_3->f.hdr.mac.ba_end = 1;
  else
   VAR_1->f.hdr.mac.ba_end = 0;

  VAR_0.wlan.ampdu_prev[VAR_2] = VAR_1;
 } else {
  FUNC_1(VAR_2);
 }
}
