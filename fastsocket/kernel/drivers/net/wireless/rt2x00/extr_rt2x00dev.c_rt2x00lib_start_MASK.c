
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2x00_dev {int flags; scalar_t__ intf_associated; scalar_t__ intf_sta_count; scalar_t__ intf_ap_count; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct rt2x00_dev *VAR_1)
{
 int VAR_2;

 if (FUNC_4(VAR_0, &VAR_1->flags))
  return 0;





 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;




 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_1->intf_ap_count = 0;
 VAR_1->intf_sta_count = 0;
 VAR_1->intf_associated = 0;


 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_3(VAR_0, &VAR_1->flags);

 return 0;
}
