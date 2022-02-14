
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct islpci_mgmtframe {int data; TYPE_1__* header; } ;
struct TYPE_6__ {int priv_oid; int ndev; } ;
typedef TYPE_2__ islpci_private ;
struct TYPE_5__ {scalar_t__ operation; int length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct islpci_mgmtframe*) ;
 int FUNC_2 (int ,int ,int,char*,int,struct islpci_mgmtframe**) ;
 int FUNC_3 (char*,int ,int) ;
 TYPE_2__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4, struct iw_request_info *VAR_5,
        struct iw_point *VAR_6, char *VAR_7)
{
 islpci_private *VAR_8 = FUNC_4(VAR_4);
 struct islpci_mgmtframe *VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_5("%s: get_oid 0x%08X\n", VAR_4->name, VAR_8->priv_oid);
 VAR_6->length = 0;

 if (FUNC_0(VAR_8) >= VAR_3) {
  VAR_10 =
      FUNC_2(VAR_8->ndev, VAR_2,
        VAR_8->priv_oid, VAR_7, 256,
        &VAR_9);
  FUNC_5("%s: ret: %i\n", VAR_4->name, VAR_10);
  if (VAR_10 || !VAR_9
      || VAR_9->header->operation == VAR_1) {
   if (VAR_9) {
    FUNC_1(VAR_9);
   }
   FUNC_5("%s: EIO\n", VAR_4->name);
   VAR_10 = -VAR_0;
  }
  if (!VAR_10) {
   VAR_6->length = VAR_9->header->length;
   FUNC_3(VAR_7, VAR_9->data, VAR_6->length);
   FUNC_1(VAR_9);
   FUNC_5("%s: len: %i\n", VAR_4->name, VAR_6->length);
  }
 }

 return VAR_10;
}
