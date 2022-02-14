
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schid; } ;
struct idset {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct idset*,int ) ;
 struct subchannel* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct idset *VAR_2 = VAR_1;
 struct subchannel *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_3->schid);
 return 0;
}
