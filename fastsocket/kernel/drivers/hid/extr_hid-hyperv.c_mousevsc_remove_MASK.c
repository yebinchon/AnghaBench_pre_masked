
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousevsc_dev {int hid_device; } ;
struct hv_device {int channel; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mousevsc_dev* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct mousevsc_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_0)
{
 struct mousevsc_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_0->channel);
 FUNC_1(VAR_1->hid_device);
 FUNC_0(VAR_1->hid_device);
 FUNC_3(VAR_1);

 return 0;
}
