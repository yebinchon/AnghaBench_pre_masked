
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_2__ {int netagent_flags; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct netagent_wrapper* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (struct netagent_wrapper*,int ,int ,int ) ;

int
FUNC_7(uuid_t VAR_9)
{
 int VAR_10 = 0;

 FUNC_4(&VAR_8);
 struct netagent_wrapper *VAR_11 = FUNC_5(VAR_9);
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_2, "Requested netagent for kernel trigger could not be found");
  VAR_10 = VAR_1;
  goto done;
 }

 if ((VAR_11->netagent.netagent_flags & VAR_5) == 0) {
  FUNC_1(VAR_2, "Requested netagent for kernel trigger is not kernel activated");

  VAR_10 = VAR_0;
  goto done;
 }

 if ((VAR_11->netagent.netagent_flags & VAR_4)) {

  FUNC_1(VAR_3, "Requested netagent for kernel trigger is already active");
  VAR_10 = 0;
  goto done;
 }

 VAR_10 = FUNC_6(VAR_11, FUNC_2(), VAR_7, VAR_6);
 FUNC_0((VAR_10 ? VAR_2 : VAR_3), "Triggered netagent from kernel (error %d)", VAR_10);
done:
 FUNC_3(&VAR_8);
 return (VAR_10);
}
