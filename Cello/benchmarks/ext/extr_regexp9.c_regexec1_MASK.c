
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
typedef struct TYPE_29__ TYPE_20__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef scalar_t__ uchar ;
struct TYPE_30__ {scalar_t__ ep; } ;
struct TYPE_28__ {scalar_t__ sp; } ;
struct TYPE_37__ {TYPE_2__ e; TYPE_1__ s; } ;
struct TYPE_36__ {TYPE_13__* next; } ;
struct TYPE_35__ {scalar_t__ r; size_t subid; TYPE_13__* right; TYPE_6__* cp; } ;
struct TYPE_34__ {scalar_t__* spans; scalar_t__* end; } ;
struct TYPE_32__ {char* ep; } ;
struct TYPE_31__ {char* sp; } ;
struct TYPE_33__ {TYPE_4__ e; TYPE_3__ s; } ;
struct TYPE_29__ {TYPE_5__* m; } ;
struct TYPE_27__ {int type; TYPE_7__ u1; TYPE_8__ u2; } ;
struct TYPE_26__ {scalar_t__ inst; TYPE_20__ se; } ;
struct TYPE_25__ {int starttype; char* starts; char startchar; char* eol; TYPE_12__** reliste; TYPE_12__** relist; } ;
struct TYPE_24__ {int startinst; } ;
typedef scalar_t__ Rune ;
typedef TYPE_9__ Resub ;
typedef TYPE_10__ Reprog ;
typedef TYPE_11__ Reljunk ;
typedef TYPE_12__ Relist ;
typedef TYPE_13__ Reinst ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_12__*,int ,int,char*) ;
 int FUNC_1 (TYPE_9__*,int,TYPE_20__*) ;
 TYPE_12__* FUNC_2 (TYPE_12__*,TYPE_13__*,int,TYPE_20__*) ;
 int FUNC_3 (scalar_t__*,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static int
FUNC_5(const Reprog *VAR_1,
 char *VAR_2,
 Resub *VAR_3,
 int VAR_4,
 Reljunk *VAR_5
)
{
 int VAR_6=0;
 Reinst *VAR_7;
 Relist *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11;
 Rune VAR_12, *VAR_13, *VAR_14;
 int VAR_15;
 Relist* VAR_16;
 Relist* VAR_17;
 Relist* VAR_18;
 Relist* VAR_19;
 int VAR_20;
 char *VAR_21;

 VAR_20 = 0;
 VAR_11 = VAR_5->starttype;
 if(VAR_3)
  for(VAR_10=0; VAR_10<VAR_4; VAR_10++) {
   VAR_3[VAR_10].s.sp = 0;
   VAR_3[VAR_10].e.ep = 0;
  }
 VAR_5->relist[0][0].inst = 0;
 VAR_5->relist[1][0].inst = 0;


 VAR_9 = VAR_5->starts;
 do{

  if(VAR_11) {
   switch(VAR_5->starttype) {
   case 128:
    VAR_21 = FUNC_4(VAR_9, VAR_5->startchar);
    if(VAR_21 == 0 || VAR_9 == VAR_5->eol)
     return VAR_20;
    VAR_9 = VAR_21;
    break;
   case 136:
    if(VAR_9 == VAR_2)
     break;
    VAR_21 = FUNC_4(VAR_9, '\n');
    if(VAR_21 == 0 || VAR_9 == VAR_5->eol)
     return VAR_20;
    VAR_9 = VAR_21+1;
    break;
   }
  }
  VAR_12 = *(uchar*)VAR_9;
  if(VAR_12 < VAR_0)
   VAR_15 = 1;
  else
   VAR_15 = FUNC_3(&VAR_12, VAR_9);


  VAR_16 = VAR_5->relist[VAR_6];
  VAR_18 = VAR_5->reliste[VAR_6];
  VAR_17 = VAR_5->relist[VAR_6^=1];
  VAR_19 = VAR_5->reliste[VAR_6];
  VAR_17->inst = 0;


  if(VAR_20 == 0)
   FUNC_0(VAR_16, VAR_1->startinst, VAR_4, VAR_9);


  for(VAR_8=VAR_16; VAR_8->inst; VAR_8++){
   for(VAR_7 = VAR_8->inst; ; VAR_7 = VAR_7->u2.next){
    switch(VAR_7->type){
    case 128:
     if(VAR_7->u1.r == VAR_12){
      if(FUNC_2(VAR_17, VAR_7->u2.next, VAR_4, &VAR_8->se)==VAR_19)
       return -1;
     }
     break;
    case 132:
     VAR_8->se.m[VAR_7->u1.subid].s.sp = VAR_9;
     continue;
    case 129:
     VAR_8->se.m[VAR_7->u1.subid].e.ep = VAR_9;
     continue;
    case 138:
     if(VAR_12 != '\n')
      if(FUNC_2(VAR_17, VAR_7->u2.next, VAR_4, &VAR_8->se)==VAR_19)
       return -1;
     break;
    case 137:
     if(FUNC_2(VAR_17, VAR_7->u2.next, VAR_4, &VAR_8->se)==VAR_19)
       return -1;
     break;
    case 136:
     if(VAR_9 == VAR_2 || *(VAR_9-1) == '\n')
      continue;
     break;
    case 133:
     if(VAR_9 == VAR_5->eol || VAR_12 == 0 || VAR_12 == '\n')
      continue;
     break;
    case 135:
     VAR_14 = VAR_7->u1.cp->end;
     for(VAR_13 = VAR_7->u1.cp->spans; VAR_13 < VAR_14; VAR_13 += 2)
      if(VAR_12 >= VAR_13[0] && VAR_12 <= VAR_13[1]){
       if(FUNC_2(VAR_17, VAR_7->u2.next, VAR_4, &VAR_8->se)==VAR_19)
        return -1;
       break;
      }
     break;
    case 131:
     VAR_14 = VAR_7->u1.cp->end;
     for(VAR_13 = VAR_7->u1.cp->spans; VAR_13 < VAR_14; VAR_13 += 2)
      if(VAR_12 >= VAR_13[0] && VAR_12 <= VAR_13[1])
       break;
     if(VAR_13 == VAR_14)
      if(FUNC_2(VAR_17, VAR_7->u2.next, VAR_4, &VAR_8->se)==VAR_19)
       return -1;
     break;
    case 130:

     if(FUNC_2(VAR_8, VAR_7->u1.right, VAR_4, &VAR_8->se) == VAR_18)
      return -1;

     continue;
    case 134:
     VAR_20 = 1;
     VAR_8->se.m[0].e.ep = VAR_9;
     if(VAR_3 != 0)
      FUNC_1(VAR_3, VAR_4, &VAR_8->se);
     break;
    }
    break;
   }
  }
  if(VAR_9 == VAR_5->eol)
   break;
  VAR_11 = VAR_5->starttype && VAR_17->inst==0;
  VAR_9 += VAR_15;
 }while(VAR_12);
 return VAR_20;
}
