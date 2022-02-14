
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_driver {int (* resume ) (struct sa1111_dev*) ;} ;
struct sa1111_dev {int dummy; } ;
struct device {int driver; } ;


 struct sa1111_dev* FUNC_0 (struct device*) ;
 struct sa1111_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct sa1111_dev*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct sa1111_dev *VAR_1 = FUNC_0(VAR_0);
 struct sa1111_driver *VAR_2 = FUNC_1(VAR_0->driver);
 int VAR_3 = 0;

 if (VAR_2 && VAR_2->resume)
  VAR_3 = VAR_2->resume(VAR_1);
 return VAR_3;
}
