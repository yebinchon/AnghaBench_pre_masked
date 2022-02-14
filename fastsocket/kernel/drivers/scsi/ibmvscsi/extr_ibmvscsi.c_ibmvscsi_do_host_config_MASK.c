
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int length; int type; } ;
struct viosrp_host_config {int buffer; TYPE_3__ common; } ;
struct TYPE_5__ {struct viosrp_host_config host_config; } ;
struct TYPE_6__ {TYPE_1__ mad; } ;
struct srp_event_struct {int comp; TYPE_2__ iu; } ;
struct ibmvscsi_host_data {int dev; TYPE_4__* host; int pool; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,unsigned char*,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct srp_event_struct*) ;
 struct srp_event_struct* FUNC_6 (int *) ;
 int FUNC_7 (struct srp_event_struct*,struct ibmvscsi_host_data*,int) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct srp_event_struct*,int ,int ,int) ;
 int FUNC_10 (struct viosrp_host_config*,int,int) ;
 int FUNC_11 (int ,unsigned long) ;
 int FUNC_12 (int ,unsigned long) ;
 int VAR_5 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct ibmvscsi_host_data *VAR_6,
       unsigned char *VAR_7, int VAR_8)
{
 struct viosrp_host_config *VAR_9;
 struct srp_event_struct *VAR_10;
 unsigned long VAR_11;
 dma_addr_t VAR_12;
 int VAR_13;

 VAR_10 = FUNC_6(&VAR_6->pool);
 if (!VAR_10) {
  FUNC_0(VAR_6->dev, "couldn't allocate event for HOST_CONFIG!\n");
  return -1;
 }

 FUNC_9(VAR_10,
     VAR_5,
     VAR_3,
     VAR_4);

 VAR_9 = &VAR_10->iu.mad.host_config;


 FUNC_10(VAR_9, 0x00, sizeof(*VAR_9));
 VAR_9->common.type = VAR_2;
 VAR_9->common.length = VAR_8;
 VAR_9->buffer = VAR_12 = FUNC_1(VAR_6->dev, VAR_7,
          VAR_8,
          VAR_0);

 if (FUNC_2(VAR_6->dev, VAR_9->buffer)) {
  if (!FUNC_4(VAR_1))
   FUNC_0(VAR_6->dev,
           "dma_mapping error getting host config\n");
  FUNC_5(&VAR_6->pool, VAR_10);
  return -1;
 }

 FUNC_8(&VAR_10->comp);
 FUNC_11(VAR_6->host->host_lock, VAR_11);
 VAR_13 = FUNC_7(VAR_10, VAR_6, VAR_4 * 2);
 FUNC_12(VAR_6->host->host_lock, VAR_11);
 if (VAR_13 == 0)
  FUNC_13(&VAR_10->comp);
 FUNC_3(VAR_6->dev, VAR_12, VAR_8, VAR_0);

 return VAR_13;
}
