
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psemname {scalar_t__ psem_namelen; int psem_nameptr; } ;
struct pseminfo {int dummy; } ;
struct psemhashhead {struct psemcache* lh_first; } ;
struct TYPE_2__ {struct psemcache* le_next; } ;
struct psemcache {scalar_t__ psem_nlen; TYPE_1__ psem_hash; int psem_name; struct pseminfo* pseminfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psemhashhead*,struct psemcache*,int ) ;
 scalar_t__ VAR_2 ;
 struct psemhashhead* FUNC_1 (struct psemname*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (struct pseminfo**,struct psemname*,struct psemcache**) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct pseminfo *VAR_7, struct psemname *VAR_8, struct psemcache *VAR_9)
{
 struct psemhashhead *VAR_10;
 struct pseminfo *VAR_11;
 struct psemcache *VAR_12;
 if (FUNC_4(&VAR_11, VAR_8, &VAR_12) == VAR_2) {
  return VAR_0;
 }
 if (VAR_6 >= VAR_4)
  return VAR_1;
 VAR_6++;






 VAR_9->pseminfo = VAR_7;
 VAR_9->psem_nlen = VAR_8->psem_namelen;
 FUNC_2(VAR_8->psem_nameptr, VAR_9->psem_name, (unsigned)VAR_9->psem_nlen);
 VAR_10 = FUNC_1(VAR_8);
 FUNC_0(VAR_10, VAR_9, VAR_5);
 return 0;
}
