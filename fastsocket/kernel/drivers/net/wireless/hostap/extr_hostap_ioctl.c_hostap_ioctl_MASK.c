
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_10__ {int sa_data; } ;
struct TYPE_11__ {int data; TYPE_1__ ap_addr; scalar_t__ name; } ;
struct iwreq {TYPE_2__ u; } ;
struct ifreq {int dummy; } ;
struct hostap_interface {TYPE_3__* local; } ;
struct TYPE_12__ {int dev; TYPE_9__* ap; } ;
typedef TYPE_3__ local_info_t ;
struct TYPE_13__ {int mac_restrictions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_9__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int*) ;
 int FUNC_4 (int ) ;
 struct hostap_interface* FUNC_5 (struct net_device*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (struct net_device*,int*) ;
 int FUNC_9 (struct net_device*,int*) ;
 int FUNC_10 (struct net_device*,int*) ;
 int FUNC_11 (struct net_device*,int*) ;
 int FUNC_12 (TYPE_3__*,int ,int) ;
 int FUNC_13 (TYPE_3__*,int ,int,int ) ;

int FUNC_14(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct iwreq *VAR_6 = (struct iwreq *) VAR_4;
 struct hostap_interface *VAR_7;
 local_info_t *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_5(VAR_3);
 VAR_8 = VAR_7->local;

 switch (VAR_5) {



 case 135:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_8(VAR_3, (int *) VAR_6->u.name);
  break;

 case 132:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_9(VAR_3, (int *) VAR_6->u.name);
  break;

 case 131:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_10(VAR_3, (int *) VAR_6->u.name);
  break;

 case 129:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_12(VAR_8, VAR_6->u.ap_addr.sa_data, 1);
  break;

 case 128:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_13(VAR_8, VAR_6->u.ap_addr.sa_data, 1, 0);
  break;

 case 130:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_11(VAR_3,
         (int *) VAR_6->u.name);
  break;


 case 133:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_3(VAR_8, (int *) VAR_6->u.name);
  break;

 case 139:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_0(&VAR_8->ap->mac_restrictions,
           VAR_6->u.ap_addr.sa_data);
  break;
 case 138:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_1(&VAR_8->ap->mac_restrictions,
           VAR_6->u.ap_addr.sa_data);
  break;
 case 134:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_2(VAR_8->ap, VAR_8->dev,
            VAR_6->u.ap_addr.sa_data);
  break;
 case 136:
  if (!FUNC_4(VAR_0)) VAR_9 = -VAR_2;
  else VAR_9 = FUNC_7(VAR_8, &VAR_6->u.data);
  break;

 default:
  VAR_9 = -VAR_1;
  break;
 }

 return VAR_9;
}
