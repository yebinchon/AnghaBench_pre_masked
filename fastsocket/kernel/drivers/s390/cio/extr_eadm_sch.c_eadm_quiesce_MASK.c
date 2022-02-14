
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct subchannel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct subchannel *VAR_1)
{
 int VAR_2;

 do {
  FUNC_1(VAR_1->lock);
  VAR_2 = FUNC_0(VAR_1);
  FUNC_2(VAR_1->lock);
 } while (VAR_2 == -VAR_0);
}
