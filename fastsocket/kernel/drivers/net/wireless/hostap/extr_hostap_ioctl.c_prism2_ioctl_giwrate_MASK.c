
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int fixed; int value; } ;
struct hostap_interface {TYPE_3__* local; } ;
struct TYPE_6__ {scalar_t__ iw_mode; TYPE_2__* func; TYPE_1__* ap; int fw_tx_rate_control; } ;
typedef TYPE_3__ local_info_t ;
struct TYPE_5__ {scalar_t__ (* get_rid ) (struct net_device*,int ,int*,int,int) ;} ;
struct TYPE_4__ {int last_tx_rate; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int ,int*,int,int) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
    struct iw_request_info *VAR_5,
    struct iw_param *VAR_6, char *VAR_7)
{
 u16 VAR_8;
 struct hostap_interface *VAR_9;
 local_info_t *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_4);
 VAR_10 = VAR_9->local;

 if (VAR_10->func->get_rid(VAR_4, VAR_2, &VAR_8, 2, 1) <
     0)
  return -VAR_0;

 if ((VAR_8 & 0x1) && (VAR_8 > 1))
  VAR_6->fixed = 0;
 else
  VAR_6->fixed = 1;

 if (VAR_10->iw_mode == VAR_3 && VAR_10->ap != ((void*)0) &&
     !VAR_10->fw_tx_rate_control) {



  VAR_6->value = VAR_10->ap->last_tx_rate > 0 ?
   VAR_10->ap->last_tx_rate * 100000 : 11000000;
  return 0;
 }

 if (VAR_10->func->get_rid(VAR_4, VAR_1, &VAR_8, 2, 1) <
     0)
  return -VAR_0;

 switch (VAR_8) {
 case 130:
  VAR_6->value = 1000000;
  break;
 case 129:
  VAR_6->value = 2000000;
  break;
 case 128:
  VAR_6->value = 5500000;
  break;
 case 131:
  VAR_6->value = 11000000;
  break;
 default:

  VAR_6->value = 11000000;
  VAR_11 = -VAR_0;
  break;
 }

 return VAR_11;
}
