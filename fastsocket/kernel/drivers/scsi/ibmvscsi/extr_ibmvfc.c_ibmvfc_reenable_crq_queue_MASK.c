
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; } ;
struct ibmvfc_host {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 struct vio_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ibmvfc_host *VAR_3)
{
 int VAR_4 = 0;
 struct vio_dev *VAR_5 = FUNC_4(VAR_3->dev);


 do {
  if (VAR_4)
   FUNC_2(100);
  VAR_4 = FUNC_3(VAR_1, VAR_5->unit_address);
 } while (VAR_4 == VAR_2 || VAR_4 == VAR_0 || FUNC_0(VAR_4));

 if (VAR_4)
  FUNC_1(VAR_3->dev, "Error enabling adapter (rc=%d)\n", VAR_4);

 return VAR_4;
}
