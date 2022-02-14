
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct proc {int dummy; } ;
struct TYPE_2__ {int netagent_flags; } ;
struct netagent_wrapper {TYPE_1__ netagent; } ;
struct netagent_trigger_args {int agent_uuidlen; scalar_t__ agent_uuid; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct netagent_wrapper* FUNC_5 (int ) ;
 int VAR_10 ;
 int FUNC_6 (struct netagent_wrapper*,struct proc*,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(struct proc *VAR_11, struct netagent_trigger_args *VAR_12, int32_t *VAR_13)
{
#pragma unused(p, retval)
 uuid_t VAR_14;
 int VAR_15 = 0;

 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_4, "uap == NULL");
  return (VAR_0);
 }

 if (VAR_12->agent_uuid) {
  if (VAR_12->agent_uuidlen != sizeof(uuid_t)) {
   FUNC_0(VAR_4, "Incorrect length (got %llu, expected %lu)",
      VAR_12->agent_uuidlen, sizeof(uuid_t));
   return (VAR_3);
  }

  VAR_15 = FUNC_2(VAR_12->agent_uuid, VAR_14, sizeof(uuid_t));
  if (VAR_15) {
   FUNC_0(VAR_4, "copyin error (%d)", VAR_15);
   return (VAR_15);
  }
 }

 if (FUNC_7(VAR_14)) {
  FUNC_1(VAR_4, "Requested netagent UUID is empty");
  return (VAR_0);
 }

 FUNC_4(&VAR_10);
 struct netagent_wrapper *VAR_16 = FUNC_5(VAR_14);
 if (VAR_16 == ((void*)0)) {
  FUNC_1(VAR_4, "Requested netagent UUID is not registered");
  VAR_15 = VAR_1;
  goto done;
 }

 if ((VAR_16->netagent.netagent_flags & VAR_7) == 0) {

  FUNC_1(VAR_4, "Requested netagent UUID is not eligible for triggering");
  VAR_15 = VAR_2;
  goto done;
 }

 if ((VAR_16->netagent.netagent_flags & VAR_6)) {

  FUNC_1(VAR_5, "Requested netagent UUID is already active");
  VAR_15 = 0;
  goto done;
 }

 VAR_15 = FUNC_6(VAR_16, VAR_11, VAR_9, VAR_8);
 FUNC_0((VAR_15 ? VAR_4 : VAR_5), "Triggered netagent (error %d)", VAR_15);
done:
 FUNC_3(&VAR_10);
 return (VAR_15);
}
