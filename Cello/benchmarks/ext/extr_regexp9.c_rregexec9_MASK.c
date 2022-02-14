
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ startchar; int ** reliste; int ** relist; scalar_t__ starttype; scalar_t__ reol; int * rstarts; } ;
struct TYPE_21__ {TYPE_4__* startinst; } ;
struct TYPE_17__ {scalar_t__ rep; scalar_t__ ep; } ;
struct TYPE_16__ {int * rsp; scalar_t__ sp; } ;
struct TYPE_20__ {TYPE_2__ e; TYPE_1__ s; } ;
struct TYPE_18__ {scalar_t__ r; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_3__ u1; } ;
typedef int Rune ;
typedef TYPE_5__ Resub ;
typedef TYPE_6__ Reprog ;
typedef TYPE_7__ Reljunk ;
typedef int Relist ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_6__ const*,int *,TYPE_5__*,int,TYPE_7__*) ;
 int FUNC_2 (TYPE_6__ const*,int *,TYPE_5__*,int,TYPE_7__*) ;

extern int
FUNC_3(const Reprog *VAR_4,
 Rune *VAR_5,
 Resub *VAR_6,
 int VAR_7)
{
 Reljunk VAR_8;
 Relist VAR_9[VAR_1], VAR_10[VAR_1];
 int VAR_11;




 VAR_8.rstarts = VAR_5;
 VAR_8.reol = 0;
 if(VAR_6 && VAR_7>0){
  if(VAR_6->s.sp)
   VAR_8.rstarts = VAR_6->s.rsp;
  if(VAR_6->e.ep)
   VAR_8.reol = VAR_6->e.rep;
 }
 VAR_8.starttype = 0;
 VAR_8.startchar = 0;
 if(VAR_4->startinst->type == VAR_2 && VAR_4->startinst->u1.r < VAR_3) {
  VAR_8.starttype = VAR_2;
  VAR_8.startchar = VAR_4->startinst->u1.r;
 }
 if(VAR_4->startinst->type == VAR_0)
  VAR_8.starttype = VAR_0;


 VAR_8.relist[0] = VAR_9;
 VAR_8.relist[1] = VAR_10;
 VAR_8.reliste[0] = VAR_9 + FUNC_0(VAR_9) - 2;
 VAR_8.reliste[1] = VAR_10 + FUNC_0(VAR_10) - 2;

 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8);
 if(VAR_11 >= 0)
  return VAR_11;
 VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, &VAR_8);
 if(VAR_11 >= 0)
  return VAR_11;
 return -1;
}
