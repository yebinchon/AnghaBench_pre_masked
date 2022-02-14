
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct pmcraid_instance {TYPE_2__ cdev; TYPE_1__* host; } ;
struct pmcraid_aen_msg {int hostno; int length; } ;
struct genl_family {int hdrsize; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,TYPE_3__*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int,struct pmcraid_aen_msg*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,...) ;
 TYPE_3__ VAR_7 ;
 int FUNC_9 (char*,int) ;

__attribute__((used)) static int FUNC_10(
 struct pmcraid_instance *VAR_8,
 struct pmcraid_aen_msg *VAR_9,
 u32 VAR_10
)
{
 struct sk_buff *VAR_11;
 void *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15;

 VAR_9->hostno = (VAR_8->host->unique_id << 16 |
      FUNC_0(VAR_8->cdev.dev));
 VAR_9->length = VAR_10;

 VAR_10 += sizeof(*VAR_9);

 VAR_13 = FUNC_6(VAR_10);

 VAR_14 =
  (VAR_13 + (VAR_2 +
  ((struct genl_family *)&VAR_7)->hdrsize)
   + VAR_4);
 VAR_11 = FUNC_3(VAR_14, VAR_3);


 if (!VAR_11) {
  FUNC_8("Failed to allocate aen data SKB of size: %x\n",
        VAR_13);
  return -VAR_1;
 }


 VAR_12 = FUNC_4(VAR_11, 0, 0,
     &VAR_7, 0,
     VAR_6);
 if (!VAR_12) {
  FUNC_8("failed to copy command details\n");
  FUNC_7(VAR_11);
  return -VAR_1;
 }

 VAR_15 = FUNC_5(VAR_11, VAR_5, VAR_10, VAR_9);

 if (VAR_15) {
  FUNC_8("failed to copy AEN attribute data\n");
  FUNC_7(VAR_11);
  return -VAR_0;
 }


 VAR_15 = FUNC_1(VAR_11, VAR_12);

 if (VAR_15 < 0) {
  FUNC_8("genlmsg_end failed\n");
  FUNC_7(VAR_11);
  return VAR_15;
 }

 VAR_15 =
  FUNC_2(VAR_11, 0, VAR_7.id, VAR_3);




 if (VAR_15)
  FUNC_9("error (%x) sending aen event message\n", VAR_15);
 return VAR_15;
}
