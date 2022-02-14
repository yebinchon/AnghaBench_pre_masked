
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* extif; } ;
struct TYPE_3__ {int (* enable_tearsync ) (int ,int ) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 u8 VAR_2;

 VAR_1.extif->enable_tearsync(0, 0);
 VAR_2 = FUNC_0(VAR_0);
 VAR_2 &= ~(1 << 3);
 FUNC_1(VAR_0, VAR_2);
 VAR_2 = FUNC_0(VAR_0);
}
