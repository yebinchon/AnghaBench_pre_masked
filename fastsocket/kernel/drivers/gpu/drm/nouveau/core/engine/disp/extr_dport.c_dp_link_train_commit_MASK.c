
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dp_state {int link_nr; int* stat; int* conf; int aux; int head; int outp; int disp; TYPE_1__* func; } ;
struct TYPE_2__ {int (* drv_ctl ) (int ,int ,int ,int,int,int) ;} ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct dp_state *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->link_nr; VAR_3++) {
  u8 VAR_4 = (VAR_2->stat[4 + (VAR_3 >> 1)] >> ((VAR_3 & 1) * 4)) & 0xf;
  u8 VAR_5 = (VAR_4 & 0x0c) >> 2;
  u8 VAR_6 = (VAR_4 & 0x03) >> 0;

  VAR_2->conf[VAR_3] = (VAR_5 << 3) | VAR_6;
  if (VAR_6 == 3)
   VAR_2->conf[VAR_3] |= VAR_1;
  if (VAR_5 == 3)
   VAR_2->conf[VAR_3] |= VAR_0;

  FUNC_0("config lane %d %02x\n", VAR_3, VAR_2->conf[VAR_3]);
  VAR_2->func->drv_ctl(VAR_2->disp, VAR_2->outp, VAR_2->head, VAR_3, VAR_6, VAR_5);
 }

 return FUNC_2(VAR_2->aux, FUNC_1(0), VAR_2->conf, 4);
}
