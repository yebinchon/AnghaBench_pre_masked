
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u_int16_t ;
typedef size_t u_int ;
struct secasvar {int flags; scalar_t__ remote_ike_port; int refcnt; TYPE_2__* lft_c; int state; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct secashead {TYPE_1__ saidx; int * savtree; } ;
struct TYPE_4__ {scalar_t__ sadb_lifetime_addtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,size_t,char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 struct secasvar* FUNC_3 (int *) ;
 struct secasvar* FUNC_4 (struct secasvar*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (struct secasvar*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct secasvar*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int ) ;
 int VAR_8 ;

__attribute__((used)) static struct secasvar *
FUNC_10(
       struct secashead *VAR_9,
       u_int VAR_10,
       u_int16_t VAR_11)
{
 struct secasvar *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17;

 FUNC_2(VAR_8, VAR_3);


 VAR_14 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_16 = ((void*)0);

 for (VAR_12 = FUNC_3(&VAR_9->savtree[VAR_10]);
      VAR_12 != ((void*)0);
      VAR_12 = VAR_13) {

  VAR_13 = FUNC_4(VAR_12, VAR_6);


  FUNC_1(VAR_12->state, VAR_10, "key_do_allocsa_policy");

  if (VAR_9->saidx.mode == VAR_1 && VAR_11 &&
      ((VAR_12->flags & VAR_4) != 0) &&
      FUNC_7(VAR_11) != VAR_12->remote_ike_port)
   continue;

  if (VAR_9->saidx.mode == VAR_0 &&
      ((VAR_12->flags & VAR_5) != 0) &&
      FUNC_7(VAR_11) != VAR_12->remote_ike_port)
   continue;

  if ((VAR_9->saidx.mode == VAR_1 &&
       ((VAR_12->flags & VAR_4) != 0)) ||
      (VAR_9->saidx.mode == VAR_0 &&
       ((VAR_12->flags & VAR_5) != 0))) {
    if (VAR_15 == ((void*)0)) {
     VAR_15 = VAR_12;
     continue;
    } else
     VAR_14 = VAR_15;
   } else {
    if (VAR_16 == ((void*)0)) {
     VAR_16 = VAR_12;
     continue;
    } else
     VAR_14 = VAR_16;
   }




  if (VAR_14->lft_c == ((void*)0) || VAR_12->lft_c == ((void*)0))
   FUNC_8("key_do_allocsa_policy: "
      "lifetime_current is NULL.\n");


  if (VAR_7) {
   if (VAR_14->lft_c->sadb_lifetime_addtime >
    VAR_12->lft_c->sadb_lifetime_addtime) {
    if ((VAR_12->flags & VAR_5) != 0)
     VAR_15 = VAR_12;
    else
     VAR_16 = VAR_12;
   }
   continue;

  }


  if (VAR_14->lft_c->sadb_lifetime_addtime <
   VAR_12->lft_c->sadb_lifetime_addtime) {
   VAR_17 = VAR_14;
   if ((VAR_9->saidx.mode == VAR_1 &&
     ((VAR_12->flags & VAR_4) != 0)) ||
    (VAR_9->saidx.mode == VAR_0 &&
     ((VAR_12->flags & VAR_5) != 0))) {
    VAR_15 = VAR_12;
   } else {
    VAR_16 = VAR_12;
   }
  } else {
   VAR_17 = VAR_12;
  }






  if (VAR_17->lft_c->sadb_lifetime_addtime != 0) {
   FUNC_6(VAR_17);
  }
 }


 if (VAR_15 == ((void*)0))
  VAR_14 = VAR_16;
 else if (VAR_16 == ((void*)0))
  VAR_14 = VAR_15;
 else if (VAR_9->saidx.mode == VAR_1 && VAR_11)
  VAR_14 = VAR_15;
 else if (VAR_15->lft_c->sadb_lifetime_addtime >
    VAR_16->lft_c->sadb_lifetime_addtime)
  VAR_14 = VAR_15;
 else
  VAR_14 = VAR_16;

 if (VAR_14) {
  VAR_14->refcnt++;
  FUNC_0(VAR_2,
      FUNC_9("DP allocsa_policy cause "
      "refcnt++:%d SA:0x%llx\n", VAR_14->refcnt,
      (uint64_t)FUNC_5(VAR_14)));
 }
 return VAR_14;
}
