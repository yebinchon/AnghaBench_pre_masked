
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpersona_info {int dummy; } ;
struct persona_args {int flags; int override_uid; struct kpersona_info kinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,struct kpersona_info const*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline void FUNC_2(const char *VAR_1, const struct persona_args *VAR_2)
{
 const struct kpersona_info *VAR_3 = &VAR_2->kinfo;

 if (VAR_1)
  FUNC_1("%s", VAR_1);
 FUNC_1("\t flags: 0x%x", VAR_2->flags);
 FUNC_1("\t %cuid: %d", VAR_2->flags & VAR_0 ? '+' : '-', VAR_2->override_uid);
 FUNC_0(((void*)0), VAR_2->flags, VAR_3);
}
