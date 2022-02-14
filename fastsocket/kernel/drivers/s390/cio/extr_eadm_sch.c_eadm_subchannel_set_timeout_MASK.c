
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct subchannel {int dummy; } ;
struct TYPE_5__ {unsigned long data; scalar_t__ expires; int function; } ;
struct eadm_private {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 struct eadm_private* FUNC_2 (struct subchannel*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct subchannel *VAR_2, int VAR_3)
{
 struct eadm_private *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3 == 0) {
  FUNC_1(&VAR_4->timer);
  return;
 }
 if (FUNC_4(&VAR_4->timer)) {
  if (FUNC_3(&VAR_4->timer, VAR_1 + VAR_3))
   return;
 }
 VAR_4->timer.function = VAR_0;
 VAR_4->timer.data = (unsigned long) VAR_2;
 VAR_4->timer.expires = VAR_1 + VAR_3;
 FUNC_0(&VAR_4->timer);
}
