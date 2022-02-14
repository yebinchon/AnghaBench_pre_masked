
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_cb {scalar_t__ mtx; } ;


 int FUNC_0 (struct ctl_cb*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct ctl_cb *VAR_2)
{
 if (VAR_2 != 0) {
  if (VAR_2->mtx != 0)
   FUNC_1(VAR_2->mtx, VAR_1);
  FUNC_0(VAR_2, VAR_0);
 }
}
