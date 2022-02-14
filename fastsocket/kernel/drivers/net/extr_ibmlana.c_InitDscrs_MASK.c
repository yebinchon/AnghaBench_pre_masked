
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int fragcount; int startlo; int link; int cntlo; int inuse; scalar_t__ seqno; scalar_t__ starthi; scalar_t__ length; scalar_t__ status; scalar_t__ cnthi; scalar_t__ fraglength; scalar_t__ config; } ;
typedef TYPE_1__ tda_t ;
struct net_device {int mem_start; int mem_end; } ;
typedef TYPE_1__ rra_t ;
typedef TYPE_1__ rda_t ;
struct TYPE_8__ {int tdastart; int txbufstart; int rxbufcnt; int rrastart; int rdastart; int rxbufstart; int lastrxdescr; int txused; scalar_t__ txusedcnt; scalar_t__ currtxdescr; scalar_t__ nexttxdescr; scalar_t__ nextrxdescr; scalar_t__ base; } ;
typedef TYPE_4__ ibmlana_priv ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 ibmlana_priv *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;
 tda_t VAR_8;
 rda_t VAR_9;
 rra_t VAR_10;



 FUNC_2(VAR_3->base, 0xaa,
        VAR_2->mem_start - VAR_2->mem_start);



 VAR_3->tdastart = VAR_4 = 0;
 VAR_3->txbufstart = VAR_5 = sizeof(tda_t) * VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_8.status = 0;
  VAR_8.config = 0;
  VAR_8.length = 0;
  VAR_8.fragcount = 1;
  VAR_8.startlo = VAR_5;
  VAR_8.starthi = 0;
  VAR_8.fraglength = 0;
  if (VAR_7 == VAR_1 - 1)
   VAR_8.link = VAR_3->tdastart;
  else
   VAR_8.link = VAR_4 + sizeof(tda_t);
  VAR_8.link |= 1;
  FUNC_0(VAR_3->base + VAR_4, &VAR_8, sizeof(tda_t));
  VAR_4 += sizeof(tda_t);
  VAR_5 += VAR_0;
 }



 VAR_3->rxbufcnt = (VAR_2->mem_end - VAR_2->mem_start - VAR_5) / (sizeof(rra_t) + sizeof(rda_t) + VAR_0);



 VAR_3->rrastart = VAR_6 = VAR_3->txbufstart + (VAR_1 * VAR_0);
 VAR_3->rdastart = VAR_4 = VAR_3->rrastart + (VAR_3->rxbufcnt * sizeof(rra_t));
 VAR_3->rxbufstart = VAR_5 = VAR_3->rdastart + (VAR_3->rxbufcnt * sizeof(rda_t));

 for (VAR_7 = 0; VAR_7 < VAR_3->rxbufcnt; VAR_7++) {
  VAR_10.startlo = VAR_5;
  VAR_10.starthi = 0;
  VAR_10.cntlo = VAR_0 >> 1;
  VAR_10.cnthi = 0;
  FUNC_0(VAR_3->base + VAR_6, &VAR_10, sizeof(rra_t));

  VAR_9.status = 0;
  VAR_9.length = 0;
  VAR_9.startlo = 0;
  VAR_9.starthi = 0;
  VAR_9.seqno = 0;
  if (VAR_7 < VAR_3->rxbufcnt - 1)
   VAR_9.link = VAR_4 + sizeof(rda_t);
  else
   VAR_9.link = 1;
  VAR_9.inuse = 1;
  FUNC_0(VAR_3->base + VAR_4, &VAR_9, sizeof(rda_t));

  VAR_5 += VAR_0;
  VAR_6 += sizeof(rra_t);
  VAR_4 += sizeof(rda_t);
 }



 VAR_3->nextrxdescr = 0;
 VAR_3->lastrxdescr = VAR_3->rxbufcnt - 1;
 VAR_3->nexttxdescr = 0;
 VAR_3->currtxdescr = 0;
 VAR_3->txusedcnt = 0;
 FUNC_1(VAR_3->txused, 0, sizeof(VAR_3->txused));
}
