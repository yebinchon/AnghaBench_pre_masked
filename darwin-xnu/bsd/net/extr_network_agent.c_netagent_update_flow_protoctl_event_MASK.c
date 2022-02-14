
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
typedef int uint32_t ;
struct netagent_session {TYPE_2__* wrapper; } ;
typedef scalar_t__ netagent_session_t ;
typedef int errno_t ;
struct TYPE_3__ {int netagent_uuid; } ;
struct TYPE_4__ {TYPE_1__ netagent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

errno_t
FUNC_2(netagent_session_t VAR_3,
    uuid_t VAR_4, uint32_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct netagent_session *VAR_8 = (struct netagent_session *)VAR_3;
 int VAR_9 = 0;

 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_2, "Cannot assign nexus from NULL session");
  return (VAR_0);
 }

 if (VAR_8->wrapper == ((void*)0)) {
  FUNC_0(VAR_2, "Session has no agent");
  return (VAR_1);
 }

 VAR_9 = FUNC_1(VAR_8->wrapper->netagent.netagent_uuid,
     VAR_4, VAR_5, VAR_6, VAR_7);

 return (VAR_9);
}
