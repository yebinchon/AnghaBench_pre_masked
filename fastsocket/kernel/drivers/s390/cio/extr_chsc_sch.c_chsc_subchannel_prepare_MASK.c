
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schid; } ;
struct schib {int scsw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,struct schib*) ;

__attribute__((used)) static int FUNC_2(struct subchannel *VAR_1)
{
 int VAR_2;
 struct schib VAR_3;





 VAR_2 = FUNC_1(VAR_1->schid, &VAR_3);
 if (!VAR_2 && FUNC_0(&VAR_3.scsw))
  return -VAR_0;
 return 0;
}
