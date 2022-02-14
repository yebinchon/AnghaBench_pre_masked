
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int * lock; } ;
struct eadm_private {int head; } ;


 int FUNC_0 (struct subchannel*) ;
 struct eadm_private* FUNC_1 (struct subchannel*) ;
 int FUNC_2 (struct eadm_private*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct subchannel*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct subchannel *VAR_1)
{
 struct eadm_private *VAR_2 = FUNC_1(VAR_1);

 FUNC_5(&VAR_0);
 FUNC_3(&VAR_2->head);
 FUNC_6(&VAR_0);

 FUNC_0(VAR_1);

 FUNC_5(VAR_1->lock);
 FUNC_4(VAR_1, ((void*)0));
 FUNC_6(VAR_1->lock);

 FUNC_2(VAR_2);

 return 0;
}
