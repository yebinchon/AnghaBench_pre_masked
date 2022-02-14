
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; int schid; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *,int) ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct subchannel *VAR_1 = (struct subchannel *) VAR_0;

 FUNC_3(VAR_1->lock);
 FUNC_0(1, "timeout");
 FUNC_1(1, &VAR_1->schid, sizeof(VAR_1->schid));
 if (FUNC_2(VAR_1))
  FUNC_0(0, "clear failed");
 FUNC_4(VAR_1->lock);
}
