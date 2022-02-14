
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int regs ;
struct TYPE_5__ {int ax; int cx; int dx; } ;
struct TYPE_6__ {TYPE_1__ x; } ;
typedef TYPE_2__ __dpmi_regs ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

int FUNC_2(void)
{
 __dpmi_regs VAR_0;

 FUNC_1(&VAR_0,0,sizeof(VAR_0));
 VAR_0.x.ax=0;
 FUNC_0(0x33,&VAR_0);
 if(VAR_0.x.ax!=0xFFFF)
  return(0);

 FUNC_1(&VAR_0,0,sizeof(VAR_0));
 VAR_0.x.ax=0x7;
 VAR_0.x.cx=0;
 VAR_0.x.dx=260;
 FUNC_0(0x33,&VAR_0);

 FUNC_1(&VAR_0,0,sizeof(VAR_0));
 VAR_0.x.ax=0x8;
 VAR_0.x.cx=0;
 VAR_0.x.dx=260;
 FUNC_0(0x33,&VAR_0);

 FUNC_1(&VAR_0,0,sizeof(VAR_0));
 VAR_0.x.ax=0xF;
 VAR_0.x.cx=8;
 VAR_0.x.dx=8;
 FUNC_0(0x33,&VAR_0);

 FUNC_1(&VAR_0,0,sizeof(VAR_0));
 VAR_0.x.ax=0x2;
 FUNC_0(0x33,&VAR_0);

 return(1);
}
