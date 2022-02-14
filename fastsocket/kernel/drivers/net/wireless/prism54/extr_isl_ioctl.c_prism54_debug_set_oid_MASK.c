
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct islpci_mgmtframe {TYPE_1__* header; } ;
struct TYPE_6__ {int priv_oid; int ndev; } ;
typedef TYPE_2__ islpci_private ;
struct TYPE_5__ {int operation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct islpci_mgmtframe*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,struct islpci_mgmtframe**) ;
 TYPE_2__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_5, struct iw_request_info *VAR_6,
        struct iw_point *VAR_7, char *VAR_8)
{
 islpci_private *VAR_9 = FUNC_3(VAR_5);
 struct islpci_mgmtframe *VAR_10;
 int VAR_11 = 0, VAR_12 = VAR_2;

 FUNC_4("%s: set_oid 0x%08X\tlen: %d\n", VAR_5->name, VAR_9->priv_oid,
        VAR_7->length);

 if (FUNC_0(VAR_9) >= VAR_4) {
  VAR_11 =
      FUNC_2(VAR_9->ndev, VAR_3,
        VAR_9->priv_oid, VAR_8, VAR_7->length,
        &VAR_10);
  FUNC_4("%s: ret: %i\n", VAR_5->name, VAR_11);
  if (VAR_11 || !VAR_10
      || VAR_10->header->operation == VAR_2) {
   if (VAR_10) {
    FUNC_1(VAR_10);
   }
   FUNC_4("%s: EIO\n", VAR_5->name);
   VAR_11 = -VAR_1;
  }
  if (!VAR_11) {
   VAR_12 = VAR_10->header->operation;
   FUNC_4("%s: response_op: %i\n", VAR_5->name,
          VAR_12);
   FUNC_1(VAR_10);
  }
 }

 return (VAR_11 ? VAR_11 : -VAR_0);
}
