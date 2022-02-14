
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udmaspec {int t2cyc; int tcyc; int tds; int tdh; int tdvs; int tdvh; int tfs; int tli; int tmli; int taz; int tenv; int tsr; int tss; int trfs; int trp; int tack; int tzah; } ;
struct mpc52xx_ata_timings {int udma1; int udma2; int udma3; int udma4; int udma5; int using_udma; } ;
struct mpc52xx_ata_priv {struct udmaspec* udmaspec; struct mpc52xx_ata_timings* timings; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mpc52xx_ata_priv *VAR_1, int VAR_2,
     int VAR_3)
{
 struct mpc52xx_ata_timings *VAR_4 = &VAR_1->timings[VAR_2];
 const struct udmaspec *VAR_5 = &VAR_1->udmaspec[VAR_3];

 if (VAR_3 < 0 || VAR_3 > 2)
  return -VAR_0;

 VAR_4->udma1 = (VAR_5->t2cyc << 24) | (VAR_5->tcyc << 16) | (VAR_5->tds << 8) | VAR_5->tdh;
 VAR_4->udma2 = (VAR_5->tdvs << 24) | (VAR_5->tdvh << 16) | (VAR_5->tfs << 8) | VAR_5->tli;
 VAR_4->udma3 = (VAR_5->tmli << 24) | (VAR_5->taz << 16) | (VAR_5->tenv << 8) | VAR_5->tsr;
 VAR_4->udma4 = (VAR_5->tss << 24) | (VAR_5->trfs << 16) | (VAR_5->trp << 8) | VAR_5->tack;
 VAR_4->udma5 = (VAR_5->tzah << 24);
 VAR_4->using_udma = 1;

 return 0;
}
