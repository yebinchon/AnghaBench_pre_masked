
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


struct net_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ chan; } ;
typedef TYPE_3__ pc300dev_t ;
struct TYPE_9__ {unsigned short encoding; unsigned short parity; } ;
struct TYPE_11__ {TYPE_2__ proto_settings; } ;
typedef TYPE_4__ pc300chconf_t ;
struct TYPE_12__ {int conf; scalar_t__ card; } ;
typedef TYPE_5__ pc300ch_t ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_13__ {TYPE_1__ hw; } ;
typedef TYPE_6__ pc300_t ;
struct TYPE_14__ {scalar_t__ priv; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_7__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_11, unsigned short VAR_12,
        unsigned short VAR_13)
{
 pc300dev_t *VAR_14 = (pc300dev_t *)FUNC_0(VAR_11)->priv;
 pc300ch_t *VAR_15 = (pc300ch_t *)VAR_14->chan;
 pc300_t *VAR_16 = (pc300_t *)VAR_15->card;
 pc300chconf_t *VAR_17 = (pc300chconf_t *)&VAR_15->conf;

 if (VAR_16->hw.type == VAR_10) {
  if (VAR_12 != VAR_3 && VAR_12 != VAR_4) {
   return -VAR_0;
  }
 } else {
  if (VAR_12 != VAR_3 && VAR_12 != VAR_4 &&
      VAR_12 != VAR_1 && VAR_12 != VAR_2) {

   return -VAR_0;
  }
 }

 if (VAR_13 != VAR_9 && VAR_13 != VAR_5 &&
     VAR_13 != VAR_6 && VAR_13 != VAR_8 &&
     VAR_13 != VAR_7) {
  return -VAR_0;
 }

 VAR_17->proto_settings.encoding = VAR_12;
 VAR_17->proto_settings.parity = VAR_13;
 return 0;
}
