
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int uint32_t ;
struct uthread {int uu_defer_reclaims; TYPE_1__* uu_vreclaims; } ;
struct namecache {int dummy; } ;
typedef int * kauth_cred_t ;
struct TYPE_12__ {int v_flag; scalar_t__ v_type; scalar_t__ v_kusecount; char const* v_name; int v_iocount; scalar_t__ v_usecount; int v_lflag; struct TYPE_12__* v_defer_reclaimlist; struct TYPE_12__* v_parent; int v_nclinks; scalar_t__ v_cred_timestamp; scalar_t__ v_authorized_actions; int * v_cred; int v_ncchildren; int v_nc_generation; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct namecache* FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct namecache* FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct namecache*,int) ;
 int FUNC_6 () ;
 struct uthread* FUNC_7 (int ) ;
 int FUNC_8 (int **) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,int,int ,int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int ,int ,int) ;
 int FUNC_18 (TYPE_1__*) ;

void
FUNC_19(vnode_t VAR_12, vnode_t VAR_13, const char *VAR_14, int VAR_15, uint32_t VAR_16, int VAR_17)
{
 struct namecache *VAR_18;
        vnode_t VAR_19 = VAR_1;
 int VAR_20 = (VAR_12->v_flag & VAR_3);
 int VAR_21 = 0;
 kauth_cred_t VAR_22 = ((void*)0);
 const char *VAR_23 = ((void*)0);
 const char *VAR_24 = ((void*)0);

 if (VAR_17 & VAR_9) {
         if (VAR_13 && FUNC_15(VAR_13) != 0) {
   VAR_13 = VAR_1;
  }

  if (VAR_20 && VAR_13 && (VAR_13 != VAR_12) && (VAR_13 != VAR_12->v_parent) && (VAR_13->v_type == VAR_11)) {
   FUNC_13(VAR_13);
   ++VAR_13->v_kusecount;
   VAR_21 = 1;
   FUNC_18(VAR_13);
  }
 } else {
         VAR_13 = VAR_1;
 }
 if ( (VAR_17 & VAR_8) ) {
  if (VAR_14 != VAR_12->v_name) {
   if (VAR_14 && *VAR_14) {
    if (VAR_15 == 0)
     VAR_15 = FUNC_9(VAR_14);
           VAR_24 = FUNC_10(VAR_14, VAR_15, VAR_16, 0);
   }
  } else
   VAR_17 &= ~VAR_8;
 }
 if ( (VAR_17 & (VAR_10 | VAR_9 | VAR_7 | VAR_8)) ) {

  FUNC_2();

  if ( (VAR_17 & VAR_10) ) {

   if (VAR_12->v_parent)
    VAR_12->v_parent->v_nc_generation++;

   while ( (VAR_18 = FUNC_1(&VAR_12->v_nclinks)) )
    FUNC_5(VAR_18, 1);

   while ( (VAR_18 = FUNC_4(&VAR_12->v_ncchildren)) )
    FUNC_5(VAR_18, 1);




   VAR_22 = VAR_12->v_cred;
   VAR_12->v_cred = VAR_0;
   VAR_12->v_authorized_actions = 0;
   VAR_12->v_cred_timestamp = 0;
  }
  if ( (VAR_17 & VAR_8) ) {
   VAR_23 = VAR_12->v_name;
   VAR_12->v_name = VAR_24;
  }
  if (VAR_17 & VAR_9) {
   if (VAR_13 != VAR_12 && VAR_13 != VAR_12->v_parent) {
    VAR_19 = VAR_12->v_parent;
    VAR_12->v_parent = VAR_13;
    VAR_13 = VAR_1;

    if (VAR_19)
     VAR_17 |= VAR_7;
   }
  }
  if (VAR_17 & VAR_7) {
   while ( (VAR_18 = FUNC_1(&VAR_12->v_nclinks)) )
    FUNC_5(VAR_18, 1);
  }
  FUNC_3();

  if (VAR_23 != ((void*)0))
   FUNC_11(VAR_23);

  if (FUNC_0(VAR_22))
   FUNC_8(&VAR_22);
 }
 if (VAR_13 != VAR_1) {

  if (VAR_21) {
   FUNC_13(VAR_13);
   if (VAR_13->v_kusecount > 0)
    --VAR_13->v_kusecount;
   FUNC_18(VAR_13);
  }
         FUNC_16(VAR_13);
 }
 if (VAR_19) {
         struct uthread *VAR_25;

  if (VAR_20) {
          FUNC_13(VAR_19);
   if ((VAR_19->v_type != VAR_2) && (VAR_19->v_kusecount > 0))
    --VAR_19->v_kusecount;
   FUNC_18(VAR_19);
  }
         VAR_25 = FUNC_7(FUNC_6());
  VAR_25->uu_defer_reclaims = 1;
  VAR_25->uu_vreclaims = VAR_1;

         while ( (VAR_12 = VAR_19) != VAR_1 ) {

          FUNC_13(VAR_12);
   FUNC_17(VAR_12, 0, 0, 1);
   if ( (VAR_12->v_iocount == 1) && (VAR_12->v_usecount == 0) &&
        ((VAR_12->v_lflag & (VAR_5 | VAR_6 | VAR_4)) == VAR_5)) {
           FUNC_12(VAR_12);

           FUNC_2();
    VAR_19 = VAR_12->v_parent;
    VAR_12->v_parent = VAR_1;
    FUNC_3();
   } else {




           VAR_19 = VAR_1;
   }
   FUNC_18(VAR_12);
  }
  VAR_25->uu_defer_reclaims = 0;

  while ( (VAR_12 = VAR_25->uu_vreclaims) != VAR_1) {
          VAR_25->uu_vreclaims = VAR_12->v_defer_reclaimlist;





   FUNC_14(VAR_12);
  }
 }
}
