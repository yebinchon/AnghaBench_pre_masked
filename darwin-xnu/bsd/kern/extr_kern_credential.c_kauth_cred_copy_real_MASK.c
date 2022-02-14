
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp_cred ;
struct ucred {int dummy; } ;
typedef TYPE_1__* posix_cred_t ;
typedef struct ucred* kauth_cred_t ;
struct TYPE_3__ {scalar_t__ cr_ruid; scalar_t__ cr_uid; scalar_t__ cr_rgid; scalar_t__ cr_gid; scalar_t__ cr_gmuid; int cr_flags; } ;


 int FUNC_0 (struct ucred*) ;
 int VAR_0 ;
 int FUNC_1 (struct ucred*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct ucred*,struct ucred*,int) ;
 int FUNC_5 (struct ucred*) ;
 scalar_t__ FUNC_6 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_7 (struct ucred*) ;
 struct ucred* FUNC_8 (struct ucred*) ;
 int FUNC_9 (struct ucred*) ;
 int FUNC_10 (struct ucred*) ;
 TYPE_1__* FUNC_11 (struct ucred*) ;

kauth_cred_t
FUNC_12(kauth_cred_t VAR_3)
{
 kauth_cred_t VAR_4 = ((void*)0), VAR_5;
 struct ucred VAR_6;
 posix_cred_t VAR_7 = FUNC_11(&VAR_6);
 posix_cred_t VAR_8 = FUNC_11(VAR_3);


 if ((VAR_8->cr_ruid == VAR_8->cr_uid) &&
     (VAR_8->cr_rgid == VAR_8->cr_gid)) {
  FUNC_9(VAR_3);
  return(VAR_3);
 }





 FUNC_4(VAR_3, &VAR_6, sizeof(VAR_6));
 VAR_7->cr_uid = VAR_8->cr_ruid;

 if (FUNC_6(&VAR_6, VAR_8->cr_rgid)) {
  VAR_7->cr_flags |= VAR_0;
  VAR_7->cr_gmuid = VAR_1;
 }




 if (VAR_7->cr_gmuid != VAR_1)
  VAR_7->cr_gmuid = VAR_8->cr_ruid;

 for (;;) {
  int VAR_9;

  FUNC_2();
  VAR_5 = FUNC_8(&VAR_6);
  if (VAR_5 == VAR_3) {

   FUNC_3();
   return(VAR_3);
  }
  if (VAR_5 != ((void*)0)) {




   FUNC_9(VAR_5);
   FUNC_3();
   return(VAR_5);
  }





  VAR_4 = FUNC_7(&VAR_6);
  VAR_9 = FUNC_5(VAR_4);
  FUNC_3();


  if (VAR_9 == 0)
   break;



  FUNC_0(VAR_4);

  FUNC_1(VAR_4, sizeof(*VAR_4), VAR_2);
  VAR_4 = ((void*)0);
 }

 return(VAR_4);
}
