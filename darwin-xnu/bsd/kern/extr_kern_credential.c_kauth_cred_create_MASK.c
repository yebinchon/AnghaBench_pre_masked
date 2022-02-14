
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* posix_cred_t ;
typedef TYPE_2__* kauth_cred_t ;
struct TYPE_17__ {int cr_audit; } ;
struct TYPE_16__ {int cr_flags; int cr_ngroups; int * cr_groups; void* cr_gmuid; int cr_svgid; int cr_rgid; int cr_svuid; int cr_ruid; void* cr_uid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 () ;
 TYPE_2__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_1__* FUNC_12 (TYPE_2__*) ;

kauth_cred_t
FUNC_13(kauth_cred_t VAR_3)
{
 kauth_cred_t VAR_4, VAR_5 = ((void*)0);
 posix_cred_t VAR_6 = FUNC_12(VAR_3);
 int VAR_7 = 0;

 FUNC_3();

 if (VAR_6->cr_flags & VAR_0) {
  VAR_6->cr_gmuid = VAR_1;
 } else {
  if (!FUNC_9(VAR_3, 0, &VAR_7)) {





   VAR_6->cr_gmuid = VAR_6->cr_uid;
  } else {
   VAR_6->cr_gmuid = VAR_1;
   VAR_6->cr_flags |= VAR_0;
  }
 }


 if (VAR_6->cr_ngroups < 1)
  return(((void*)0));

 for (;;) {
  FUNC_2();
  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4 != ((void*)0)) {




   FUNC_10(VAR_4);
   FUNC_4();
   return(VAR_4);
  }
  FUNC_4();





  VAR_5 = FUNC_7();
  if (VAR_5 != ((void*)0)) {
   int VAR_8;
   posix_cred_t VAR_9 = FUNC_12(VAR_5);
   VAR_9->cr_uid = VAR_6->cr_uid;
   VAR_9->cr_ruid = VAR_6->cr_ruid;
   VAR_9->cr_svuid = VAR_6->cr_svuid;
   VAR_9->cr_rgid = VAR_6->cr_rgid;
   VAR_9->cr_svgid = VAR_6->cr_svgid;
   VAR_9->cr_gmuid = VAR_6->cr_gmuid;
   VAR_9->cr_ngroups = VAR_6->cr_ngroups;
   FUNC_5(&VAR_6->cr_groups[0], &VAR_9->cr_groups[0], sizeof(VAR_9->cr_groups));




   VAR_9->cr_flags = VAR_6->cr_flags;

   FUNC_2();
   VAR_8 = FUNC_6(VAR_5);
   FUNC_4();


   if (VAR_8 == 0)
    break;



   FUNC_0(VAR_5);

   FUNC_1(VAR_5, sizeof(*VAR_5), VAR_2);
   VAR_5 = ((void*)0);
  }
 }

 return(VAR_5);
}
