
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_2__ {int netagent_flags; int netagent_uuid; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;
struct netagent_session {struct netagent_wrapper* wrapper; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netagent_wrapper*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct netagent_wrapper*) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct netagent_session *VAR_9)
{
 bool VAR_10 = VAR_0;
 uuid_t VAR_11;
 struct netagent_wrapper *VAR_12 = ((void*)0);
 FUNC_4(&VAR_7);
 if (VAR_9 != ((void*)0)) {
  VAR_12 = VAR_9->wrapper;
  if (VAR_12 != ((void*)0)) {
   if (VAR_8 > 0) {
    VAR_8--;
   }
   if ((VAR_9->wrapper->netagent.netagent_flags & VAR_3) &&
    VAR_6 > 0) {
    VAR_6--;
   }

   FUNC_0(VAR_12, VAR_5);

   VAR_10 = VAR_4;
   FUNC_7(VAR_11, VAR_9->wrapper->netagent.netagent_uuid);

   FUNC_5(VAR_9->wrapper);
   VAR_9->wrapper = ((void*)0);
   FUNC_1(VAR_2, "Unregistered agent");
  }
 }
 FUNC_3(&VAR_7);

 if (VAR_10) {
  FUNC_2(VAR_11);
  FUNC_6(VAR_11, VAR_1, VAR_4);
 }
}
