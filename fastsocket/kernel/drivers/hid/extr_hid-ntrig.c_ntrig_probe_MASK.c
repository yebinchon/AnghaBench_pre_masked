
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntrig_data {scalar_t__ found_contact_id; scalar_t__ reading_a_point; } ;
struct hid_device_id {int dummy; } ;
struct hid_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hid_device*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*,struct ntrig_data*) ;
 int FUNC_4 (struct ntrig_data*) ;
 struct ntrig_data* FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_3, const struct hid_device_id *VAR_4)
{
 int VAR_5;
 struct ntrig_data *VAR_6;

 VAR_6 = FUNC_5(sizeof(struct ntrig_data), VAR_1);
 if (!VAR_6) {
  FUNC_0(&VAR_3->dev, "cannot allocate N-Trig data\n");
  return -VAR_0;
 }
 VAR_6->reading_a_point = 0;
 VAR_6->found_contact_id = 0;
 FUNC_3(VAR_3, VAR_6);

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_3, VAR_2);

 if (VAR_5)
  FUNC_4 (VAR_6);

 return VAR_5;
}
