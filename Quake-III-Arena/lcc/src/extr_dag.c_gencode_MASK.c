
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_21__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_19__ ;


struct TYPE_29__ {int src; } ;
struct TYPE_25__ {int x; TYPE_8__** locals; } ;
struct TYPE_23__ {int offset; int base; int sym; } ;
struct TYPE_30__ {TYPE_8__* var; int forest; TYPE_6__ point; TYPE_5__* begin; TYPE_2__ block; TYPE_1__ addr; } ;
struct TYPE_32__ {int kind; TYPE_7__ u; struct TYPE_32__* next; struct TYPE_32__* prev; } ;
struct TYPE_31__ {scalar_t__ sclass; scalar_t__ type; double ref; } ;
struct TYPE_26__ {int x; } ;
struct TYPE_27__ {TYPE_3__ block; } ;
struct TYPE_28__ {TYPE_4__ u; } ;
struct TYPE_24__ {int (* local ) (TYPE_8__*) ;int (* gen ) (int ) ;int (* blockend ) (int *) ;int (* blockbeg ) (int *) ;int (* address ) (int ,int ,int ) ;int (* stabsym ) (TYPE_8__*) ;int wants_dag; } ;
struct TYPE_22__ {TYPE_9__* next; } ;
typedef TYPE_8__* Symbol ;
typedef int Coordinate ;
typedef TYPE_9__* Code ;





 int VAR_0 ;


 TYPE_21__* VAR_1 ;




 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_19__ VAR_3 ;
 TYPE_9__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ,int ) ;

void FUNC_16(Symbol VAR_9[], Symbol VAR_10[]) {
 Code VAR_11;
 Coordinate VAR_12;

 if (VAR_7 == -1)
  VAR_7 = !VAR_1->wants_dag;
 VAR_12 = VAR_8;
 if (VAR_2) {
  int VAR_13;
  Symbol VAR_14, VAR_15;
  VAR_11 = VAR_3.next->next;
  VAR_4 = VAR_3.next;
  for (VAR_13 = 0; (VAR_14 = VAR_10[VAR_13]) != ((void*)0)
           && (VAR_15 = VAR_9[VAR_13]) != ((void*)0); VAR_13++)
   if (VAR_14->sclass != VAR_15->sclass || VAR_14->type != VAR_15->type)
    FUNC_15(FUNC_0(VAR_14, FUNC_3(VAR_15)), 0, 0);
  VAR_4->next = VAR_11;
  VAR_11->prev = VAR_4;
 }
 if (VAR_6 && VAR_1->stabsym) {
  int VAR_16;
  Symbol VAR_17, VAR_18;
  for (VAR_16 = 0; (VAR_17 = VAR_10[VAR_16]) != ((void*)0)
           && (VAR_18 = VAR_9[VAR_16]) != ((void*)0); VAR_16++) {
   (*VAR_1->stabsym)(VAR_17);
   if (VAR_17->sclass != VAR_18->sclass || VAR_17->type != VAR_18->type)
    (*VAR_1->stabsym)(VAR_18);
  }
  FUNC_14(VAR_0);
 }
 VAR_11 = VAR_3.next;
 for ( ; VAR_5 <= 0 && VAR_11; VAR_11 = VAR_11->next)
  switch (VAR_11->kind) {
  case 136: (*VAR_1->address)(VAR_11->u.addr.sym, VAR_11->u.addr.base,
           VAR_11->u.addr.offset); break;
  case 135: {
           Symbol *VAR_19 = VAR_11->u.block.locals;
           (*VAR_1->blockbeg)(&VAR_11->u.block.x);
           for ( ; *VAR_19; VAR_19++)
            if ((*VAR_19)->ref != 0.0)
             (*VAR_1->local)(*VAR_19);
            else if (VAR_6) (*VAR_1->local)(*VAR_19);
          }
 break;
  case 134: (*VAR_1->blockend)(&VAR_11->u.begin->u.block.x); break;
  case 133: VAR_8 = VAR_11->u.point.src; break;
  case 132: case 131:
  case 130: if (VAR_7)
           VAR_11->u.forest = FUNC_4(VAR_11->u.forest);
          FUNC_2(VAR_11->u.forest);
          VAR_11->u.forest = (*VAR_1->gen)(VAR_11->u.forest); break;
  case 129: (*VAR_1->local)(VAR_11->u.var); break;
  case 128: break;
  default: FUNC_1(0);
  }
 VAR_8 = VAR_12;
}
