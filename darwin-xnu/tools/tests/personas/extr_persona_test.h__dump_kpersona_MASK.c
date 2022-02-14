
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kpersona_info {int persona_ngroups; int persona_name; scalar_t__ persona_gmuid; int * persona_groups; int persona_gid; int persona_type; int persona_id; int persona_info_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static inline void FUNC_4(const char *VAR_5, uint32_t VAR_6, const struct kpersona_info *VAR_7)
{
 if (VAR_5)
  FUNC_0("%s", VAR_5);
 FUNC_0("\t kpersona_info (v%d) {", VAR_7->persona_info_version);
 FUNC_0("\t\t     %cid:  %d", VAR_6 & VAR_2 ? '+' : '-', VAR_7->persona_id);
 FUNC_0("\t\t     %ctype:  %d", VAR_6 & VAR_4 ? '+' : '-', VAR_7->persona_type);
 FUNC_0("\t\t    %cgid:  %d", VAR_6 & VAR_0 ? '+' : '-', VAR_7->persona_gid);

 FUNC_3("\t\t  ngroups:  %d", VAR_7->persona_ngroups);
 for (int VAR_8 = 0; VAR_8 < VAR_7->persona_ngroups; VAR_8++) {
  if (VAR_8 == 0) FUNC_1(" {");
  FUNC_1(" %d", VAR_7->persona_groups[VAR_8]);
 }
 if (VAR_7->persona_ngroups > 0)
  FUNC_1(" }");
 FUNC_2();

 FUNC_0("\t\t  %cgmuid: %d (0x%x)", VAR_6 & VAR_1 ? '+' : '-',
      (int)VAR_7->persona_gmuid, VAR_7->persona_gmuid);
 FUNC_0("\t\t  %clogin: \"%s\"", VAR_6 & VAR_3 ? '+' : '-', VAR_7->persona_name);
 FUNC_0("\t }");
}
