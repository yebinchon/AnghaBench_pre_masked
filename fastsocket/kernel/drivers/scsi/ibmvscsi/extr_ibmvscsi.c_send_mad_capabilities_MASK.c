
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_23__ {int length; int type; } ;
struct viosrp_capabilities {TYPE_9__ common; int buffer; } ;
struct TYPE_16__ {struct viosrp_capabilities capabilities; } ;
struct TYPE_17__ {TYPE_2__ mad; } ;
struct srp_event_struct {TYPE_3__ iu; } ;
struct TYPE_20__ {int length; void* server_support; int cap_type; } ;
struct TYPE_21__ {int type; TYPE_6__ common; } ;
struct TYPE_18__ {int length; void* server_support; int cap_type; } ;
struct TYPE_19__ {int ecl; TYPE_4__ common; } ;
struct TYPE_22__ {char* name; char* loc; TYPE_7__ reserve; TYPE_5__ migration; int flags; } ;
struct ibmvscsi_host_data {TYPE_10__* host; TYPE_11__* dev; TYPE_8__ caps; int caps_addr; scalar_t__ client_migrated; int pool; } ;
struct device_node {int dummy; } ;
struct TYPE_15__ {struct device_node* of_node; } ;
struct TYPE_14__ {TYPE_1__ archdata; } ;
struct TYPE_13__ {int host_lock; TYPE_11__ shost_gendev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (TYPE_11__*,char*) ;
 char const* FUNC_2 (TYPE_11__*) ;
 struct srp_event_struct* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct srp_event_struct*,struct ibmvscsi_host_data*,int) ;
 int VAR_10 ;
 int FUNC_5 (struct srp_event_struct*,int ,int ,int) ;
 int FUNC_6 (struct viosrp_capabilities*,int ,int) ;
 char* FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (char*,char const*,int) ;

__attribute__((used)) static void FUNC_11(struct ibmvscsi_host_data *VAR_11)
{
 struct viosrp_capabilities *VAR_12;
 struct srp_event_struct *VAR_13;
 unsigned long VAR_14;
 struct device_node *VAR_15 = VAR_11->dev->archdata.of_node;
 const char *VAR_16;

 VAR_13 = FUNC_3(&VAR_11->pool);
 FUNC_0(!VAR_13);

 FUNC_5(VAR_13, VAR_8,
     VAR_7, VAR_10);

 VAR_12 = &VAR_13->iu.mad.capabilities;
 FUNC_6(VAR_12, 0, sizeof(*VAR_12));

 VAR_11->caps.flags = VAR_0;
 if (VAR_11->client_migrated)
  VAR_11->caps.flags |= VAR_1;

 FUNC_10(VAR_11->caps.name, FUNC_2(&VAR_11->host->shost_gendev),
  sizeof(VAR_11->caps.name));
 VAR_11->caps.name[sizeof(VAR_11->caps.name) - 1] = '\0';

 VAR_16 = FUNC_7(VAR_15, "ibm,loc-code", ((void*)0));
 VAR_16 = VAR_16 ? VAR_16 : FUNC_2(VAR_11->dev);
 FUNC_10(VAR_11->caps.loc, VAR_16, sizeof(VAR_11->caps.loc));
 VAR_11->caps.loc[sizeof(VAR_11->caps.loc) - 1] = '\0';

 VAR_12->common.type = VAR_6;
 VAR_12->buffer = VAR_11->caps_addr;

 VAR_11->caps.migration.common.cap_type = VAR_3;
 VAR_11->caps.migration.common.length = sizeof(VAR_11->caps.migration);
 VAR_11->caps.migration.common.server_support = VAR_5;
 VAR_11->caps.migration.ecl = 1;

 if (VAR_9) {
  VAR_11->caps.reserve.common.cap_type = VAR_4;
  VAR_11->caps.reserve.common.length = sizeof(VAR_11->caps.reserve);
  VAR_11->caps.reserve.common.server_support = VAR_5;
  VAR_11->caps.reserve.type = VAR_2;
  VAR_12->common.length = sizeof(VAR_11->caps);
 } else
  VAR_12->common.length = sizeof(VAR_11->caps) - sizeof(VAR_11->caps.reserve);

 FUNC_8(VAR_11->host->host_lock, VAR_14);
 if (FUNC_4(VAR_13, VAR_11, VAR_10 * 2))
  FUNC_1(VAR_11->dev, "couldn't send CAPABILITIES_REQ!\n");
 FUNC_9(VAR_11->host->host_lock, VAR_14);
}
