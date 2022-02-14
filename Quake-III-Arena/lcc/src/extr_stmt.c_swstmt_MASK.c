
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct swtch {int lab; scalar_t__ ncases; TYPE_9__* deflab; void* labels; void* values; int size; TYPE_8__* sym; } ;
typedef TYPE_4__* Tree ;
struct TYPE_24__ {scalar_t__ ref; } ;
struct TYPE_23__ {scalar_t__ type; } ;
struct TYPE_22__ {TYPE_3__* next; struct TYPE_22__* prev; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_2__** kids; int op; } ;
struct TYPE_20__ {TYPE_5__* prev; } ;
struct TYPE_18__ {TYPE_8__* sym; } ;
struct TYPE_19__ {TYPE_1__ u; int op; } ;
typedef TYPE_5__* Code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*) ;
 int * FUNC_1 (TYPE_8__*,TYPE_4__*) ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_4 (int ) ;
 TYPE_5__* VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char) ;
 TYPE_4__* FUNC_9 (char) ;
 TYPE_9__* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 TYPE_8__* FUNC_12 (int ,scalar_t__,int ) ;
 int FUNC_13 () ;
 int VAR_6 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_7 ;
 void* FUNC_17 (int ,int,int ) ;
 int FUNC_18 (scalar_t__) ;
 double VAR_8 ;
 TYPE_4__* FUNC_19 (TYPE_4__*,int ) ;
 int FUNC_20 (int,struct swtch*,int) ;
 int FUNC_21 (struct swtch*) ;
 int VAR_9 ;
 int FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static void FUNC_24(int VAR_10, int VAR_11, int VAR_12) {
 Tree VAR_13;
 struct swtch VAR_14;
 Code VAR_15, VAR_16;

 VAR_9 = FUNC_13();
 FUNC_8('(');
 FUNC_6(((void*)0));
 VAR_13 = FUNC_9(')');
 if (!FUNC_15(VAR_13->type)) {
  FUNC_7("illegal type `%t' in switch expression\n",
   VAR_13->type);
  VAR_13 = FUNC_19(VAR_13, VAR_6);
 }
 VAR_13 = FUNC_3(VAR_13, FUNC_18(VAR_13->type));
 if (FUNC_11(VAR_13->op) == VAR_1 && FUNC_14(VAR_13->kids[0]->op)
 && VAR_13->kids[0]->u.sym->type == VAR_13->type
 && !FUNC_16(VAR_13->kids[0]->u.sym->type)) {
  VAR_14.sym = VAR_13->kids[0]->u.sym;
  FUNC_22(((void*)0), 0, 0);
 } else {
  VAR_14.sym = FUNC_12(VAR_2, VAR_13->type, VAR_7);
  FUNC_0(VAR_14.sym);
  FUNC_22(FUNC_1(VAR_14.sym, VAR_13), 0, 0);
 }
 VAR_15 = FUNC_4(VAR_4);
 VAR_14.lab = VAR_11;
 VAR_14.deflab = ((void*)0);
 VAR_14.ncases = 0;
 VAR_14.size = VAR_3;
 VAR_14.values = FUNC_17(VAR_3, sizeof *VAR_14.values, VAR_0);
 VAR_14.labels = FUNC_17(VAR_3, sizeof *VAR_14.labels, VAR_0);
 VAR_8 /= 10.0;
 FUNC_20(VAR_10, &VAR_14, VAR_12);
 if (VAR_14.deflab == ((void*)0)) {
  VAR_14.deflab = FUNC_10(VAR_11);
  FUNC_5(VAR_11);
  if (VAR_14.ncases == 0)
   FUNC_23("switch statement with no cases\n");
 }
 if (FUNC_10(VAR_11 + 1)->ref)
  FUNC_5(VAR_11 + 1);
 VAR_16 = VAR_5;
 VAR_5 = VAR_15->prev;
 VAR_5->next = VAR_15->prev = ((void*)0);
 if (VAR_14.ncases > 0)
  FUNC_21(&VAR_14);
 FUNC_2(VAR_11);
 VAR_15->next->prev = VAR_5;
 VAR_5->next = VAR_15->next;
 VAR_5 = VAR_16;
}
