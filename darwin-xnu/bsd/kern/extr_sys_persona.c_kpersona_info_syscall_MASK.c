
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
typedef int uid_t ;
struct persona {int pna_login; int pna_type; int pna_id; } ;
struct kpersona_info {unsigned int persona_ngroups; int persona_name; int persona_gmuid; int persona_groups; int persona_gid; int persona_type; int persona_id; int persona_info_version; } ;
typedef int persona_id ;
typedef int kinfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (struct kpersona_info*,int ) ;
 int FUNC_2 (struct kpersona_info*,int ,int) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (struct persona*) ;
 int FUNC_5 (struct persona*) ;
 int FUNC_6 (struct persona*,unsigned int*,int ,int ) ;
 struct persona* FUNC_7 (int ) ;
 int FUNC_8 (struct persona*) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(user_addr_t VAR_4, user_addr_t VAR_5)
{
 int VAR_6;
 uid_t VAR_7;
 struct persona *VAR_8;
 struct kpersona_info VAR_9;

 VAR_6 = FUNC_0(VAR_4, &VAR_7, sizeof(VAR_7));
 if (VAR_6)
  return VAR_6;






 VAR_8 = FUNC_7(VAR_7);
 if (!VAR_8)
  return VAR_0;

 FUNC_3("FOUND: persona: id:%d, gid:%d, login:\"%s\"",
      VAR_8->pna_id, FUNC_4(VAR_8),
      VAR_8->pna_login);

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.persona_info_version = VAR_3;
 VAR_9.persona_id = VAR_8->pna_id;
 VAR_9.persona_type = VAR_8->pna_type;
 VAR_9.persona_gid = FUNC_4(VAR_8);
 unsigned VAR_10 = 0;
 FUNC_6(VAR_8, &VAR_10, VAR_9.persona_groups, VAR_2);
 VAR_9.persona_ngroups = VAR_10;
 VAR_9.persona_gmuid = FUNC_5(VAR_8);





 FUNC_9(VAR_9.persona_name, VAR_8->pna_login, VAR_1);

 FUNC_8(VAR_8);

 VAR_6 = FUNC_1(&VAR_9, VAR_5);

 return VAR_6;
}
