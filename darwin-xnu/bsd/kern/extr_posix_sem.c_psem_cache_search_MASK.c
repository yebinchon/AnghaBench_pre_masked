
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct psemname {scalar_t__ psem_namelen; int psem_nameptr; } ;
struct pseminfo {int dummy; } ;
struct psemhashhead {struct psemcache* lh_first; } ;
struct TYPE_3__ {struct psemcache* le_next; } ;
struct psemcache {scalar_t__ psem_nlen; struct pseminfo* pseminfo; int psem_name; TYPE_1__ psem_hash; } ;
struct TYPE_4__ {int neghits; int goodhits; int miss; int longnames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct psemhashhead* FUNC_0 (struct psemname*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct pseminfo **VAR_5, struct psemname *VAR_6,
    struct psemcache **VAR_7)
{
 struct psemcache *VAR_8, *VAR_9;
 struct psemhashhead *VAR_10;

 if (VAR_6->psem_namelen > VAR_3) {
  VAR_4.longnames++;
  return VAR_2;
 }

 VAR_10 = FUNC_0(VAR_6);
 for (VAR_8 = VAR_10->lh_first; VAR_8 != 0; VAR_8 = VAR_9) {
  VAR_9 = VAR_8->psem_hash.le_next;
  if (VAR_8->psem_nlen == VAR_6->psem_namelen &&
      !FUNC_1(VAR_8->psem_name, VAR_6->psem_nameptr, (u_int)VAR_8-> psem_nlen))
   break;
 }

 if (VAR_8 == 0) {
  VAR_4.miss++;
  return VAR_2;
 }


        if (VAR_8->pseminfo) {
  VAR_4.goodhits++;

  *VAR_5 = VAR_8->pseminfo;
  *VAR_7 = VAR_8;
  return VAR_0;
 }





 VAR_4.neghits++;
 return VAR_1;
}
