
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_driver {int (* suspend ) (struct ssb_device*,int ) ;} ;
struct ssb_device {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef int pm_message_t ;


 struct ssb_device* FUNC_0 (struct device*) ;
 struct ssb_driver* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ssb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct ssb_device *VAR_2 = FUNC_0(VAR_0);
 struct ssb_driver *VAR_3;
 int VAR_4 = 0;

 if (VAR_0->driver) {
  VAR_3 = FUNC_1(VAR_0->driver);
  if (VAR_3 && VAR_3->suspend)
   VAR_4 = VAR_3->suspend(VAR_2, VAR_1);
  if (VAR_4)
   goto out;
 }
out:
 return VAR_4;
}
