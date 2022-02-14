
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {scalar_t__ type; TYPE_4__* ml_priv; } ;
struct TYPE_8__ {int fr_pvc_info; } ;
struct TYPE_9__ {scalar_t__ type; int size; TYPE_2__ ifs_ifsu; } ;
struct ifreq {TYPE_3__ ifr_settings; } ;
struct TYPE_10__ {TYPE_1__* frad; int dlci; } ;
typedef TYPE_4__ pvc_device ;
typedef int info ;
struct TYPE_11__ {int master; int dlci; } ;
typedef TYPE_5__ fr_proto_pvc_info ;
struct TYPE_7__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_5__*,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8, struct ifreq *VAR_9, int VAR_10)
{
 pvc_device *VAR_11 = VAR_8->ml_priv;
 fr_proto_pvc_info VAR_12;

 if (VAR_9->ifr_settings.type == VAR_5) {
  if (VAR_8->type == VAR_0)
   VAR_9->ifr_settings.type = VAR_6;
  else
   VAR_9->ifr_settings.type = VAR_7;

  if (VAR_9->ifr_settings.size < sizeof(VAR_12)) {

   VAR_9->ifr_settings.size = sizeof(VAR_12);
   return -VAR_3;
  }

  VAR_12.dlci = VAR_11->dlci;
  FUNC_1(VAR_12.master, VAR_11->frad->name, VAR_4);
  if (FUNC_0(VAR_9->ifr_settings.ifs_ifsu.fr_pvc_info,
     &VAR_12, sizeof(VAR_12)))
   return -VAR_1;
  return 0;
 }

 return -VAR_2;
}
