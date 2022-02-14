
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uid_t ;
struct kpersona_info {scalar_t__* persona_name; void* persona_info_version; } ;
typedef scalar_t__ pid_t ;


 size_t FUNC_0 (char*) ;
 void* VAR_0 ;
 int FUNC_1 (char*,struct kpersona_info*) ;
 int FUNC_2 (char*,int,char) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*,char,char*,size_t*) ;
 int FUNC_6 (char,struct kpersona_info*) ;
 int FUNC_7 (scalar_t__,struct kpersona_info*) ;

__attribute__((used)) static int FUNC_8(struct kpersona_info *VAR_2, pid_t VAR_3, uid_t VAR_4)
{
 int VAR_5;

 FUNC_4("Looking up persona (login:%s, pid:%d, uid:%d)", VAR_2->persona_name, VAR_3, VAR_4);
 if (VAR_3 > 0) {
  VAR_2->persona_info_version = VAR_0;
  VAR_5 = FUNC_7(VAR_3, VAR_2);
  if (VAR_5 < 0)
   FUNC_3("pidinfo failed!");
  else
   FUNC_1("Persona-for-pid:", VAR_2);
 } else {
  int VAR_6 = 0;
  uid_t VAR_7[128];
  size_t VAR_8 = FUNC_0(VAR_7);
  const char *VAR_9 = ((void*)0);
  if (VAR_2->persona_name[0] != 0)
   VAR_9 = VAR_2->persona_name;

  VAR_6 = FUNC_5(VAR_9, VAR_4, VAR_7, &VAR_8);
  if (VAR_6 < 0)
   FUNC_2("kpersona_find returned %d (errno:%d)", VAR_6, VAR_1);
  FUNC_4("Found %zu persona%c", VAR_8, VAR_8 != 1 ? 's' : ' ');
  VAR_6 = VAR_8;
  while (VAR_6--) {
   FUNC_4("\tpersona[%d]=%d...", VAR_6, VAR_7[VAR_6]);
   VAR_2->persona_info_version = VAR_0;
   VAR_5 = FUNC_6(VAR_7[VAR_6], VAR_2);
   if (VAR_5 < 0)
    FUNC_2("kpersona_info failed (errno:%d) for persona[%d]", VAR_1, VAR_7[VAR_6]);
   FUNC_1(((void*)0), VAR_2);
  }
 }

 return VAR_5;
}
