
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct output_device {int request_state; TYPE_1__* props; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_state ) (struct output_device*) ;} ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char const*,char**,int ) ;
 int FUNC_2 (struct output_device*) ;
 struct output_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3,size_t VAR_4)
{
 char *VAR_5;
 struct output_device *VAR_6 = FUNC_3(VAR_1);
 int VAR_7 = FUNC_1(VAR_3,&VAR_5,0);
 size_t VAR_8 = VAR_5 - VAR_3;

 if (FUNC_0(*VAR_5))
  VAR_8++;
 if (VAR_8 != VAR_4)
  return -VAR_0;

 if (VAR_6->props) {
  VAR_6->request_state = VAR_7;
  VAR_6->props->set_state(VAR_6);
 }
 return VAR_4;
}
