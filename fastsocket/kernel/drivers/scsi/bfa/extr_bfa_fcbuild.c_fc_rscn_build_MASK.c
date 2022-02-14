
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_rscn_pl_s {int pagelen; TYPE_1__* event; int payldlen; int command; } ;
struct TYPE_2__ {int portid; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int) ;

u16
FUNC_3(struct fchs_s *VAR_3, struct fc_rscn_pl_s *VAR_4,
  u32 VAR_5, u16 VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_1);
 u16 VAR_8;

 FUNC_2(VAR_3, VAR_7, VAR_5, VAR_6);
 VAR_4->command = VAR_0;
 VAR_4->pagelen = sizeof(VAR_4->event[0]);

 VAR_8 = sizeof(u32) + VAR_4->pagelen;
 VAR_4->payldlen = FUNC_1(VAR_8);

 VAR_4->event[0].format = VAR_2;
 VAR_4->event[0].portid = VAR_5;

 return sizeof(struct fc_rscn_pl_s);
}
