
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; } ;
struct eadm_private {int state; } ;
struct aob {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct subchannel*,int ) ;
 struct subchannel* FUNC_1 () ;
 int FUNC_2 (struct subchannel*,int ) ;
 int FUNC_3 (struct subchannel*,struct aob*) ;
 struct eadm_private* FUNC_4 (struct subchannel*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct aob *VAR_4)
{
 struct eadm_private *VAR_5;
 struct subchannel *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_2;

 FUNC_5(VAR_6->lock, VAR_7);
 FUNC_2(VAR_6, VAR_1);
 VAR_8 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_8)
  goto out_unlock;


 FUNC_2(VAR_6, 0);
 VAR_5 = FUNC_4(VAR_6);
 VAR_5->state = VAR_0;
 FUNC_0(VAR_6, VAR_3);

out_unlock:
 FUNC_6(VAR_6->lock, VAR_7);

 return VAR_8;
}
