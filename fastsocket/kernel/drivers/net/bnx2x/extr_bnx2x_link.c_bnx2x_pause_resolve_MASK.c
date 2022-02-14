
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {int link_status; int flow_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct link_vars *VAR_5, u32 VAR_6)
{
 switch (VAR_6) {
 case 0xb:
  VAR_5->flow_ctrl = VAR_2;
  break;

 case 0xe:
  VAR_5->flow_ctrl = VAR_1;
  break;

 case 0x5:
 case 0x7:
 case 0xd:
 case 0xf:
  VAR_5->flow_ctrl = VAR_0;
  break;

 default:
  break;
 }
 if (VAR_6 & (1<<0))
  VAR_5->link_status |= VAR_4;
 if (VAR_6 & (1<<1))
  VAR_5->link_status |= VAR_3;

}
