
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int capabilities2; int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_2)
{
 u32 VAR_3 = 0;

 if (FUNC_1(VAR_2)) {
  if (VAR_2->ahw->capabilities2 &
      VAR_0)
   VAR_2->flags |= VAR_1;
 } else {
  VAR_3 = VAR_2->ahw->capabilities;
  if (FUNC_0(VAR_3))
   VAR_2->flags |= VAR_1;
 }
}
