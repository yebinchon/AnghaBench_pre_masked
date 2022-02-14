
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
struct persona {int pna_login; int pna_type; int pna_id; } ;
struct kpersona_info {unsigned int persona_ngroups; int persona_name; int persona_gmuid; int persona_groups; int persona_gid; int persona_type; int persona_id; int persona_info_version; } ;
typedef scalar_t__ pid_t ;
typedef int pid ;
typedef int kinfo ;
struct TYPE_2__ {scalar_t__ p_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__*,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kpersona_info*,int ) ;
 int FUNC_5 (struct kpersona_info*,int ,int) ;
 int FUNC_6 (struct persona*) ;
 int FUNC_7 (struct persona*) ;
 int FUNC_8 (struct persona*,unsigned int*,int ,int ) ;
 struct persona* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct persona*) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(user_addr_t VAR_5, user_addr_t VAR_6)
{
 int VAR_7;
 pid_t VAR_8;
 struct persona *VAR_9;
 struct kpersona_info VAR_10;

 VAR_7 = FUNC_0(VAR_5, &VAR_8, sizeof(VAR_8));
 if (VAR_7)
  return VAR_7;

 if (!FUNC_3(FUNC_2())
     && (VAR_8 != FUNC_1()->p_pid))
  return VAR_0;

 VAR_9 = FUNC_9(VAR_8);
 if (!VAR_9)
  return VAR_1;

 FUNC_5(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.persona_info_version = VAR_4;
 VAR_10.persona_id = VAR_9->pna_id;
 VAR_10.persona_type = VAR_9->pna_type;
 VAR_10.persona_gid = FUNC_6(VAR_9);
 unsigned VAR_11 = 0;
 FUNC_8(VAR_9, &VAR_11, VAR_10.persona_groups, VAR_3);
 VAR_10.persona_ngroups = VAR_11;
 VAR_10.persona_gmuid = FUNC_7(VAR_9);

 FUNC_11(VAR_10.persona_name, VAR_9->pna_login, VAR_2);

 FUNC_10(VAR_9);

 VAR_7 = FUNC_4(&VAR_10, VAR_6);

 return VAR_7;
}
