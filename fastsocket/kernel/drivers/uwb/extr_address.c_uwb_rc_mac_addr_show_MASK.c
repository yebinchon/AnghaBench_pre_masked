
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_mac_addr {int dummy; } ;
struct uwb_dev {struct uwb_rc* rc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct uwb_dev* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (char*,int ,struct uwb_mac_addr*) ;
 scalar_t__ FUNC_4 (struct uwb_rc*,struct uwb_mac_addr*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct uwb_dev *VAR_5 = FUNC_2(VAR_2);
 struct uwb_rc *VAR_6 = VAR_5->rc;
 struct uwb_mac_addr VAR_7;
 ssize_t VAR_8;

 FUNC_0(&VAR_6->uwb_dev.mutex);
 VAR_8 = FUNC_4(VAR_6, &VAR_7, VAR_0);
 FUNC_1(&VAR_6->uwb_dev.mutex);
 if (VAR_8 >= 0) {
  VAR_8 = FUNC_3(VAR_4, VAR_1, &VAR_7);
  VAR_4[VAR_8++] = '\n';
 }
 return VAR_8;
}
