
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_21__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_30__ {scalar_t__ rep; } ;
struct TYPE_28__ {scalar_t__ rsp; } ;
struct TYPE_37__ {TYPE_2__ e; TYPE_1__ s; } ;
struct TYPE_36__ {char r; size_t subid; TYPE_13__* right; TYPE_7__* cp; } ;
struct TYPE_35__ {char* end; char* spans; } ;
struct TYPE_34__ {TYPE_13__* next; } ;
struct TYPE_32__ {char* rep; } ;
struct TYPE_31__ {char* rsp; } ;
struct TYPE_33__ {TYPE_4__ e; TYPE_3__ s; } ;
struct TYPE_29__ {TYPE_5__* m; } ;
struct TYPE_27__ {int type; TYPE_8__ u1; TYPE_6__ u2; } ;
struct TYPE_26__ {scalar_t__ inst; TYPE_21__ se; } ;
struct TYPE_25__ {int startchar; char* rstarts; int starttype; char* reol; TYPE_12__** reliste; TYPE_12__** relist; } ;
struct TYPE_24__ {int startinst; } ;
typedef char Rune ;
typedef TYPE_9__ Resub ;
typedef TYPE_10__ Reprog ;
typedef TYPE_11__ Reljunk ;
typedef TYPE_12__ Relist ;
typedef TYPE_13__ Reinst ;
 int FUNC_0 (TYPE_9__*,int,TYPE_21__*) ;
 TYPE_12__* FUNC_1 (TYPE_12__*,TYPE_13__*,int,TYPE_21__*) ;
 int FUNC_2 (TYPE_12__*,int ,int,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int
FUNC_4(const Reprog *VAR_0,
 Rune *VAR_1,
 Resub *VAR_2,
 int VAR_3,
 Reljunk *VAR_4)
{
 int VAR_5=0;
 Reinst *VAR_6;
 Relist *VAR_7;
 Rune *VAR_8;
 int VAR_9, VAR_10;
 Rune VAR_11, *VAR_12, *VAR_13;
 Relist* VAR_14;
 Relist* VAR_15;
 Relist* VAR_16;
 Relist* VAR_17;
 int VAR_18;
 Rune *VAR_19;

 VAR_18 = 0;
 VAR_10 = VAR_4->startchar;
 if(VAR_2)
  for(VAR_9=0; VAR_9<VAR_3; VAR_9++) {
   VAR_2[VAR_9].s.rsp = 0;
   VAR_2[VAR_9].e.rep = 0;
  }
 VAR_4->relist[0][0].inst = 0;
 VAR_4->relist[1][0].inst = 0;


 VAR_8 = VAR_4->rstarts;
 do{


  if(VAR_10) {
   switch(VAR_4->starttype) {
   case 128:
    VAR_19 = FUNC_3(VAR_8, VAR_4->startchar);
    if(VAR_19 == 0 || VAR_19 == VAR_4->reol)
     return VAR_18;
    VAR_8 = VAR_19;
    break;
   case 136:
    if(VAR_8 == VAR_1)
     break;
    VAR_19 = FUNC_3(VAR_8, '\n');
    if(VAR_19 == 0 || VAR_8 == VAR_4->reol)
     return VAR_18;
    VAR_8 = VAR_19+1;
    break;
   }
  }

  VAR_11 = *VAR_8;


  VAR_14 = VAR_4->relist[VAR_5];
  VAR_16 = VAR_4->reliste[VAR_5];
  VAR_15 = VAR_4->relist[VAR_5^=1];
  VAR_17 = VAR_4->reliste[VAR_5];
  VAR_15->inst = 0;


  FUNC_2(VAR_14, VAR_0->startinst, VAR_3, VAR_8);


  for(VAR_7=VAR_14; VAR_7->inst; VAR_7++){
   for(VAR_6=VAR_7->inst; ; VAR_6 = VAR_6->u2.next){
    switch(VAR_6->type){
    case 128:
     if(VAR_6->u1.r == VAR_11)
      if(FUNC_1(VAR_15, VAR_6->u2.next, VAR_3, &VAR_7->se)==VAR_17)
       return -1;
     break;
    case 132:
     VAR_7->se.m[VAR_6->u1.subid].s.rsp = VAR_8;
     continue;
    case 129:
     VAR_7->se.m[VAR_6->u1.subid].e.rep = VAR_8;
     continue;
    case 138:
     if(VAR_11 != '\n')
      if(FUNC_1(VAR_15, VAR_6->u2.next, VAR_3, &VAR_7->se)==VAR_17)
       return -1;
     break;
    case 137:
     if(FUNC_1(VAR_15, VAR_6->u2.next, VAR_3, &VAR_7->se)==VAR_17)
       return -1;
     break;
    case 136:
     if(VAR_8 == VAR_1 || *(VAR_8-1) == '\n')
      continue;
     break;
    case 133:
     if(VAR_8 == VAR_4->reol || VAR_11 == 0 || VAR_11 == '\n')
      continue;
     break;
    case 135:
     VAR_13 = VAR_6->u1.cp->end;
     for(VAR_12 = VAR_6->u1.cp->spans; VAR_12 < VAR_13; VAR_12 += 2)
      if(VAR_11 >= VAR_12[0] && VAR_11 <= VAR_12[1]){
       if(FUNC_1(VAR_15, VAR_6->u2.next, VAR_3, &VAR_7->se)==VAR_17)
        return -1;
       break;
      }
     break;
    case 131:
     VAR_13 = VAR_6->u1.cp->end;
     for(VAR_12 = VAR_6->u1.cp->spans; VAR_12 < VAR_13; VAR_12 += 2)
      if(VAR_11 >= VAR_12[0] && VAR_11 <= VAR_12[1])
       break;
     if(VAR_12 == VAR_13)
      if(FUNC_1(VAR_15, VAR_6->u2.next, VAR_3, &VAR_7->se)==VAR_17)
       return -1;
     break;
    case 130:

     if(FUNC_1(VAR_7, VAR_6->u1.right, VAR_3, &VAR_7->se) == VAR_16)
      return -1;

     continue;
    case 134:
     VAR_18 = 1;
     VAR_7->se.m[0].e.rep = VAR_8;
     if(VAR_2 != 0)
      FUNC_0(VAR_2, VAR_3, &VAR_7->se);
     break;
    }
    break;
   }
  }
  if(VAR_8 == VAR_4->reol)
   break;
  VAR_10 = VAR_4->startchar && VAR_15->inst==0;
  VAR_8++;
 }while(VAR_11);
 return VAR_18;
}
