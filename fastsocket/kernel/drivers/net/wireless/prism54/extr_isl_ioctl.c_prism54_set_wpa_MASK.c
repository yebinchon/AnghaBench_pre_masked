
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {int wpa; int mib_sem; } ;
typedef TYPE_1__ islpci_private ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int*) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_9, struct iw_request_info *VAR_10,
  __u32 * VAR_11, char *VAR_12)
{
 islpci_private *VAR_13 = FUNC_3(VAR_9);
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 if (FUNC_1(VAR_13) < VAR_8)
  return 0;

 VAR_18 = 1;
 VAR_17 = 1;
 VAR_16 = 0x01;
 VAR_14 = VAR_2;
 VAR_15 = VAR_0;

 FUNC_0(&VAR_13->mib_sem);
 VAR_13->wpa = *VAR_11;

 switch (VAR_13->wpa) {
  default:
  case 0:
   VAR_18 = 0;
   VAR_17 = 0;
   VAR_16 = 0;
   VAR_14 = VAR_1;
   FUNC_4("%s: Disabling WPA\n", VAR_9->name);
   break;
  case 2:
  case 1:
   FUNC_4("%s: Enabling WPA\n", VAR_9->name);
   break;
 }
 FUNC_5(&VAR_13->mib_sem);

 FUNC_2(VAR_13, VAR_3, 0, &VAR_15);
 FUNC_2(VAR_13, VAR_7, 0, &VAR_18);
 FUNC_2(VAR_13, VAR_5, 0, &VAR_17);
 FUNC_2(VAR_13, VAR_4, 0, &VAR_16);
 FUNC_2(VAR_13, VAR_6, 0, &VAR_14);

 return 0;
}
