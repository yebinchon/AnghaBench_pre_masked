
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int schib; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct subchannel *VAR_1)
{

 if (!FUNC_1(&VAR_1->schib))
  return -VAR_0;


 return FUNC_0(VAR_1);
}
