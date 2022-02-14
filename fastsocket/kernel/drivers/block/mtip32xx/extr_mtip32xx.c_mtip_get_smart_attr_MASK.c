
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smart_attr {unsigned int attr_id; } ;
struct mtip_port {int* identify; TYPE_2__* dd; scalar_t__ smart_buf; int smart_buf_dma; int identify_valid; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct smart_attr*,struct smart_attr*,int) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (struct mtip_port*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct mtip_port *VAR_3, unsigned int VAR_4,
      struct smart_attr *VAR_5)
{
 int VAR_6, VAR_7;
 struct smart_attr *VAR_8;

 if (!VAR_5)
  return -VAR_1;

 if (!VAR_3->identify_valid) {
  FUNC_0(&VAR_3->dd->pdev->dev, "IDENTIFY DATA not valid\n");
  return -VAR_2;
 }
 if (!(VAR_3->identify[82] & 0x1)) {
  FUNC_0(&VAR_3->dd->pdev->dev, "SMART not supported\n");
  return -VAR_2;
 }
 if (!(VAR_3->identify[85] & 0x1)) {
  FUNC_0(&VAR_3->dd->pdev->dev, "SMART not enabled\n");
  return -VAR_2;
 }

 FUNC_2(VAR_3->smart_buf, 0, VAR_0);
 VAR_6 = FUNC_3(VAR_3, VAR_3->smart_buf, VAR_3->smart_buf_dma);
 if (VAR_6) {
  FUNC_0(&VAR_3->dd->pdev->dev, "Failed to ge SMART data\n");
  return VAR_6;
 }

 VAR_8 = (struct smart_attr *)(VAR_3->smart_buf + 2);
 for (VAR_7 = 0; VAR_7 < 29; VAR_7++, VAR_8++)
  if (VAR_8->attr_id == VAR_4) {
   FUNC_1(VAR_5, VAR_8, sizeof(struct smart_attr));
   break;
  }

 if (VAR_7 == 29) {
  FUNC_0(&VAR_3->dd->pdev->dev,
   "Query for invalid SMART attribute ID\n");
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
