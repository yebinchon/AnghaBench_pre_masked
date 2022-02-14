
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct schib {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel_id) ;
 scalar_t__ FUNC_1 (struct subchannel_id,struct schib*) ;

__attribute__((used)) static int
FUNC_2(struct subchannel_id VAR_1, void *VAR_2)
{
 struct schib VAR_3;

 if (FUNC_1(VAR_1, &VAR_3))

  return -VAR_0;

 FUNC_0(VAR_1);
 return 0;
}
