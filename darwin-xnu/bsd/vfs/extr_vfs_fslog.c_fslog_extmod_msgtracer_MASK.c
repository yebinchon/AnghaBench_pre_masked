
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char* uuid_string_t ;
typedef int t_name ;
typedef TYPE_1__* proc_t ;
typedef int c_name ;
struct TYPE_6__ {int p_uuid; int p_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int ,char*,int,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int *) ;
 int FUNC_2 (char*,char*,int,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(proc_t VAR_3, proc_t VAR_4)
{
 if ((VAR_3 != VAR_2) && (VAR_4 != VAR_2)) {






  uuid_string_t VAR_5;
  char VAR_6[2*VAR_1 + 2 + sizeof(uuid_string_t)];
  char VAR_7[2*VAR_1 + 2 + sizeof(uuid_string_t)];

  FUNC_5(VAR_6, VAR_3->p_comm, sizeof(VAR_6));
  FUNC_7(VAR_3->p_uuid, VAR_5);
  FUNC_4(VAR_6, "(", sizeof(VAR_6));
  FUNC_4(VAR_6, VAR_5, sizeof(VAR_6));
  FUNC_4(VAR_6, ")", sizeof(VAR_6));
  if (0 != FUNC_0(VAR_6, FUNC_6(VAR_6) + 1, sizeof(VAR_6))) {
   return;
  }

  FUNC_5(VAR_7, VAR_4->p_comm, sizeof(VAR_7));
  FUNC_7(VAR_4->p_uuid, VAR_5);
  FUNC_4(VAR_7, "(", sizeof(VAR_7));
  FUNC_4(VAR_7, VAR_5, sizeof(VAR_7));
  FUNC_4(VAR_7, ")", sizeof(VAR_7));
  if (0 != FUNC_0(VAR_7, FUNC_6(VAR_7) + 1, sizeof(VAR_7))) {
   return;
  }
  FUNC_1(VAR_0, "messagetracer",
       5,
       "com.apple.message.domain", "com.apple.kernel.external_modification",
       "com.apple.message.signature", VAR_6,
       "com.apple.message.signature2", VAR_7,
       "com.apple.message.result", "noop",
       "com.apple.message.summarize", "YES",
       ((void*)0));
 }
}
