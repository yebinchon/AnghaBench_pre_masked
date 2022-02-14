
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int regs ;
struct TYPE_5__ {int ax; } ;
struct TYPE_6__ {TYPE_1__ x; } ;
typedef TYPE_2__ __dpmi_regs ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_2(int VAR_0)
{
 __dpmi_regs VAR_1;

 FUNC_1(&VAR_1,0,sizeof(VAR_1));
 VAR_1.x.ax=VAR_0;

 FUNC_0(0x10,&VAR_1);
}
