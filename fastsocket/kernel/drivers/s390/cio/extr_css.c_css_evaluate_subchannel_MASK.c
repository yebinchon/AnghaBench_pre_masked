
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel_id {int dummy; } ;
struct subchannel {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel*,int) ;
 int FUNC_1 (struct subchannel_id,int) ;
 int FUNC_2 (struct subchannel_id) ;
 struct subchannel* FUNC_3 (struct subchannel_id) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct subchannel_id VAR_1, int VAR_2)
{
 struct subchannel *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  FUNC_4(&VAR_3->dev);
 } else
  VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4 == -VAR_0)
  FUNC_2(VAR_1);
}
