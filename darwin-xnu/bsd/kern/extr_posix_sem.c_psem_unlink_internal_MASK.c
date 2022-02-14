
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseminfo {int psem_flags; int psem_usecount; int psem_mode; int psem_gid; int psem_uid; } ;
struct psemcache {int psem_flags; int psem_usecount; int psem_mode; int psem_gid; int psem_uid; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct pseminfo*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (struct pseminfo*) ;
 int FUNC_4 (struct pseminfo*) ;

__attribute__((used)) static int
FUNC_5(struct pseminfo *VAR_7, struct psemcache *VAR_8)
{
 FUNC_2();

 if (!VAR_7 || !VAR_8)
  return VAR_0;

 if ((VAR_7->psem_flags & (VAR_3 | VAR_2)) == 0)
  return VAR_0;

 if (VAR_7->psem_flags & VAR_4)
  return 0;

 FUNC_0(VAR_6, VAR_7->psem_uid, VAR_7->psem_gid,
    VAR_7->psem_mode);

 VAR_7->psem_flags |= VAR_4;
 VAR_7->psem_usecount--;

 if (!VAR_7->psem_usecount) {
  FUNC_4(VAR_7);
  FUNC_1(VAR_7,VAR_1);
 } else {
  VAR_7->psem_flags |= VAR_5;
 }

 FUNC_3(VAR_8);
 FUNC_1(VAR_8, VAR_1);
 return 0;
}
