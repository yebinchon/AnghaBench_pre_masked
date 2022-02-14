
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef TYPE_1__* kauth_cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {scalar_t__ cr_ref; int cr_audit; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__**) ;
 scalar_t__ FUNC_12 (TYPE_1__**) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static kauth_cred_t
FUNC_14(kauth_cred_t VAR_3, kauth_cred_t VAR_4,
 boolean_t VAR_5)
{
 kauth_cred_t VAR_6, VAR_7 = ((void*)0);





 if (VAR_5) {
  FUNC_6(&VAR_3->cr_audit, &VAR_4->cr_audit,
      sizeof(VAR_4->cr_audit));
 }

 for (;;) {
  int VAR_8;

  FUNC_3();
  VAR_6 = FUNC_9(VAR_4);
  if (VAR_6 == VAR_3) {

   FUNC_4();
   return(VAR_3);
  }
  if (VAR_6 != ((void*)0)) {
   boolean_t VAR_9;

   FUNC_1("kauth_cred_update(cache hit): %p -> %p\n", VAR_3, VAR_6);




   FUNC_10(VAR_6);
   VAR_9 = FUNC_12(&VAR_3);
   FUNC_4();
   if (VAR_9 == VAR_2) {
    FUNC_5(VAR_3 != VAR_1);



    FUNC_0(VAR_3);

    VAR_3->cr_ref = 0;
    FUNC_2(VAR_3, sizeof(*VAR_3), VAR_0);
    VAR_3 = VAR_1;

   }
   return(VAR_6);
  }





  VAR_7 = FUNC_8(VAR_4);
  VAR_8 = FUNC_7(VAR_7);
  FUNC_4();


  if (VAR_8 == 0)
   break;



  FUNC_0(VAR_7);

  FUNC_2(VAR_7, sizeof(*VAR_7), VAR_0);
  VAR_7 = ((void*)0);
 }

 FUNC_1("kauth_cred_update(cache miss): %p -> %p\n", VAR_3, VAR_7);
 FUNC_11(&VAR_3);
 return(VAR_7);
}
