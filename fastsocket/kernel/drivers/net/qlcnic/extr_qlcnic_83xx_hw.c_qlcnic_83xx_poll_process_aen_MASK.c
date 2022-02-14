
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_3__ {int mbx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qlcnic_adapter *VAR_3)
{
 u32 VAR_4, VAR_5;
 unsigned long VAR_6;

 FUNC_5(&VAR_3->ahw->mbx_lock, VAR_6);

 VAR_4 = FUNC_1(VAR_3->ahw, VAR_0);
 if (!(VAR_4 & VAR_2))
  goto out;

 VAR_5 = FUNC_4(FUNC_0(VAR_3->ahw, 0));
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_3);

out:
 FUNC_3(VAR_3);
 FUNC_6(&VAR_3->ahw->mbx_lock, VAR_6);
}
