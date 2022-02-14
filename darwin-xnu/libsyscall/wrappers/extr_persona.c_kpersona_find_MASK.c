
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kpersona_info {scalar_t__* persona_name; scalar_t__* persona_groups; scalar_t__ persona_ngroups; scalar_t__ persona_gid; scalar_t__ persona_type; int persona_id; int persona_info_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct kpersona_info*,int *,size_t*) ;
 int FUNC_1 (scalar_t__*,char const*,int) ;

int FUNC_2(const char *VAR_2, uid_t VAR_3, uid_t *VAR_4, size_t *VAR_5)
{
 int VAR_6;
 struct kpersona_info VAR_7;
 VAR_7.persona_info_version = VAR_0;
 VAR_7.persona_id = VAR_3;
 VAR_7.persona_type = 0;
 VAR_7.persona_gid = 0;
 VAR_7.persona_ngroups = 0;
 VAR_7.persona_groups[0] = 0;
 VAR_7.persona_name[0] = 0;
 if (VAR_2)
  FUNC_1(VAR_7.persona_name, VAR_2, sizeof(VAR_7.persona_name));
 VAR_6 = FUNC_0(VAR_1, 0, &VAR_7, VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 return (int)(*VAR_5);
}
