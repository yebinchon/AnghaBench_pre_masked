
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ba_end; } ;
struct TYPE_8__ {TYPE_2__ mac; } ;
struct TYPE_9__ {TYPE_3__ hdr; } ;
struct carl9170_tx_superframe {TYPE_4__ f; } ;
struct TYPE_6__ {struct carl9170_tx_superframe** ampdu_prev; } ;
struct TYPE_10__ {TYPE_1__ wlan; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1)
{
 struct carl9170_tx_superframe *VAR_2 = VAR_0.wlan.ampdu_prev[VAR_1];

 if (VAR_2)
  VAR_2->f.hdr.mac.ba_end = 1;

 FUNC_0(VAR_1);
}
