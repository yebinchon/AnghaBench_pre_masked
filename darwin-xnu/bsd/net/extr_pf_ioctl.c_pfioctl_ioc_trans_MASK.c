
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int u_long ;
struct proc {int dummy; } ;
struct pfr_table {char* anchor; size_t rs_num; int ticket; int pfrt_anchor; } ;
struct pfioc_trans_e {char* anchor; size_t rs_num; int ticket; int pfrt_anchor; } ;
struct pfioc_trans_64 {int esize; int size; int array; } ;
struct pfioc_trans_32 {int esize; int size; int array; } ;
struct pf_ruleset {TYPE_2__* rules; int tticket; int topen; } ;
struct TYPE_3__ {int ticket; int open; } ;
struct TYPE_4__ {TYPE_1__ inactive; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 size_t VAR_6 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct pfr_table*,int ) ;
 struct pfr_table* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct pfr_table*,int) ;
 int FUNC_4 (int,struct pfr_table*,int) ;
 int FUNC_5 (struct pfr_table*,int,int) ;
 int FUNC_6 (int *,size_t,char*) ;
 int FUNC_7 (int ,size_t,char*) ;
 struct pf_ruleset* FUNC_8 (char*) ;
 int FUNC_9 (int ,size_t,char*) ;
 int FUNC_10 (struct pfr_table*,int *,int *,int ) ;
 int FUNC_11 (struct pfr_table*,int ,int *,int *,int ) ;
 int FUNC_12 (struct pfr_table*,int ,int *,int ) ;
 int FUNC_13 (struct proc*) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_15(u_long VAR_7, struct pfioc_trans_32 *VAR_8,
    struct pfioc_trans_64 *VAR_9, struct proc *VAR_10)
{
 int VAR_11 = FUNC_13(VAR_10);
 int VAR_12 = 0, VAR_13, VAR_14;
 user_addr_t VAR_15;

 VAR_13 = (VAR_11 ? VAR_9->esize : VAR_8->esize);
 VAR_14 = (VAR_11 ? VAR_9->size : VAR_8->size);
 VAR_15 = (VAR_11 ? VAR_9->array : VAR_8->array);

 switch (VAR_7) {
 case 132: {
  struct pfioc_trans_e *VAR_16;
  struct pfr_table *VAR_17;
  int VAR_18;

  if (VAR_13 != sizeof (*VAR_16)) {
   VAR_12 = VAR_3;
   goto fail;
  }
  VAR_16 = FUNC_2(sizeof (*VAR_16), VAR_4, VAR_5);
  VAR_17 = FUNC_2(sizeof (*VAR_17), VAR_4, VAR_5);
  for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++, VAR_15 += sizeof (*VAR_16)) {
   if (FUNC_4(VAR_15, VAR_16, sizeof (*VAR_16))) {
    FUNC_1(VAR_17, VAR_4);
    FUNC_1(VAR_16, VAR_4);
    VAR_12 = VAR_1;
    goto fail;
   }
   VAR_16->anchor[sizeof (VAR_16->anchor) - 1] = '\0';
   switch (VAR_16->rs_num) {
   case 129:
    break;
   case 128:
    FUNC_3(VAR_17, sizeof (*VAR_17));
    FUNC_14(VAR_17->pfrt_anchor, VAR_16->anchor,
        sizeof (VAR_17->pfrt_anchor));
    if ((VAR_12 = FUNC_10(VAR_17,
        &VAR_16->ticket, ((void*)0), 0))) {
     FUNC_1(VAR_17, VAR_4);
     FUNC_1(VAR_16, VAR_4);
     goto fail;
    }
    break;
   default:
    if ((VAR_12 = FUNC_6(&VAR_16->ticket,
        VAR_16->rs_num, VAR_16->anchor))) {
     FUNC_1(VAR_17, VAR_4);
     FUNC_1(VAR_16, VAR_4);
     goto fail;
    }
    break;
   }
   if (FUNC_5(VAR_16, VAR_15, sizeof (*VAR_16))) {
    FUNC_1(VAR_17, VAR_4);
    FUNC_1(VAR_16, VAR_4);
    VAR_12 = VAR_1;
    goto fail;
   }
  }
  FUNC_1(VAR_17, VAR_4);
  FUNC_1(VAR_16, VAR_4);
  break;
 }

 case 130: {
  struct pfioc_trans_e *VAR_19;
  struct pfr_table *VAR_20;
  int VAR_21;

  if (VAR_13 != sizeof (*VAR_19)) {
   VAR_12 = VAR_3;
   goto fail;
  }
  VAR_19 = FUNC_2(sizeof (*VAR_19), VAR_4, VAR_5);
  VAR_20 = FUNC_2(sizeof (*VAR_20), VAR_4, VAR_5);
  for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++, VAR_15 += sizeof (*VAR_19)) {
   if (FUNC_4(VAR_15, VAR_19, sizeof (*VAR_19))) {
    FUNC_1(VAR_20, VAR_4);
    FUNC_1(VAR_19, VAR_4);
    VAR_12 = VAR_1;
    goto fail;
   }
   VAR_19->anchor[sizeof (VAR_19->anchor) - 1] = '\0';
   switch (VAR_19->rs_num) {
   case 129:
    break;
   case 128:
    FUNC_3(VAR_20, sizeof (*VAR_20));
    FUNC_14(VAR_20->pfrt_anchor, VAR_19->anchor,
        sizeof (VAR_20->pfrt_anchor));
    if ((VAR_12 = FUNC_12(VAR_20,
        VAR_19->ticket, ((void*)0), 0))) {
     FUNC_1(VAR_20, VAR_4);
     FUNC_1(VAR_19, VAR_4);
     goto fail;
    }
    break;
   default:
    if ((VAR_12 = FUNC_9(VAR_19->ticket,
        VAR_19->rs_num, VAR_19->anchor))) {
     FUNC_1(VAR_20, VAR_4);
     FUNC_1(VAR_19, VAR_4);
     goto fail;
    }
    break;
   }
  }
  FUNC_1(VAR_20, VAR_4);
  FUNC_1(VAR_19, VAR_4);
  break;
 }

 case 131: {
  struct pfioc_trans_e *VAR_22;
  struct pfr_table *VAR_23;
  struct pf_ruleset *VAR_24;
  user_addr_t VAR_25 = VAR_15;
  int VAR_26;

  if (VAR_13 != sizeof (*VAR_22)) {
   VAR_12 = VAR_3;
   goto fail;
  }
  VAR_22 = FUNC_2(sizeof (*VAR_22), VAR_4, VAR_5);
  VAR_23 = FUNC_2(sizeof (*VAR_23), VAR_4, VAR_5);

  for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++, VAR_15 += sizeof (*VAR_22)) {
   if (FUNC_4(VAR_15, VAR_22, sizeof (*VAR_22))) {
    FUNC_1(VAR_23, VAR_4);
    FUNC_1(VAR_22, VAR_4);
    VAR_12 = VAR_1;
    goto fail;
   }
   VAR_22->anchor[sizeof (VAR_22->anchor) - 1] = '\0';
   switch (VAR_22->rs_num) {
   case 129:
    break;
   case 128:
    VAR_24 = FUNC_8(VAR_22->anchor);
    if (VAR_24 == ((void*)0) || !VAR_24->topen || VAR_22->ticket !=
        VAR_24->tticket) {
     FUNC_1(VAR_23, VAR_4);
     FUNC_1(VAR_22, VAR_4);
     VAR_12 = VAR_0;
     goto fail;
    }
    break;
   default:
    if (VAR_22->rs_num < 0 || VAR_22->rs_num >=
        VAR_6) {
     FUNC_1(VAR_23, VAR_4);
     FUNC_1(VAR_22, VAR_4);
     VAR_12 = VAR_2;
     goto fail;
    }
    VAR_24 = FUNC_8(VAR_22->anchor);
    if (VAR_24 == ((void*)0) ||
        !VAR_24->rules[VAR_22->rs_num].inactive.open ||
        VAR_24->rules[VAR_22->rs_num].inactive.ticket !=
        VAR_22->ticket) {
     FUNC_1(VAR_23, VAR_4);
     FUNC_1(VAR_22, VAR_4);
     VAR_12 = VAR_0;
     goto fail;
    }
    break;
   }
  }
  VAR_15 = VAR_25;

  for (VAR_26 = 0; VAR_26 < VAR_14; VAR_26++, VAR_15 += sizeof (*VAR_22)) {
   if (FUNC_4(VAR_15, VAR_22, sizeof (*VAR_22))) {
    FUNC_1(VAR_23, VAR_4);
    FUNC_1(VAR_22, VAR_4);
    VAR_12 = VAR_1;
    goto fail;
   }
   VAR_22->anchor[sizeof (VAR_22->anchor) - 1] = '\0';
   switch (VAR_22->rs_num) {
   case 129:
    break;
   case 128:
    FUNC_3(VAR_23, sizeof (*VAR_23));
    FUNC_14(VAR_23->pfrt_anchor, VAR_22->anchor,
        sizeof (VAR_23->pfrt_anchor));
    if ((VAR_12 = FUNC_11(VAR_23, VAR_22->ticket,
        ((void*)0), ((void*)0), 0))) {
     FUNC_1(VAR_23, VAR_4);
     FUNC_1(VAR_22, VAR_4);
     goto fail;
    }
    break;
   default:
    if ((VAR_12 = FUNC_7(VAR_22->ticket,
        VAR_22->rs_num, VAR_22->anchor))) {
     FUNC_1(VAR_23, VAR_4);
     FUNC_1(VAR_22, VAR_4);
     goto fail;
    }
    break;
   }
  }
  FUNC_1(VAR_23, VAR_4);
  FUNC_1(VAR_22, VAR_4);
  break;
 }

 default:
  FUNC_0(0);

 }
fail:
 return (VAR_12);
}
