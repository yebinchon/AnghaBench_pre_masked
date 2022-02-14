
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousevsc_dev {int report_desc_size; int report_desc; } ;
struct hv_device {int dummy; } ;
struct hid_device {int dummy; } ;


 struct hv_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,int ,int ) ;
 struct mousevsc_dev* FUNC_2 (struct hv_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_0)
{
 struct hv_device *VAR_1 = FUNC_0(VAR_0);
 struct mousevsc_dev *VAR_2 = FUNC_2(VAR_1);

 return FUNC_1(VAR_0, VAR_2->report_desc,
    VAR_2->report_desc_size);
}
