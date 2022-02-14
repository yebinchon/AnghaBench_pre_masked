
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rndis_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct rndis_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->state != VAR_0)
  return 0;

 VAR_3 = FUNC_0(VAR_2, 0);
 if (VAR_3 == 0)
  VAR_2->state = VAR_1;

 return VAR_3;
}
