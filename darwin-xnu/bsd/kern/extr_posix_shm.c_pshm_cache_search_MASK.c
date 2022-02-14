
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct pshmname {scalar_t__ pshm_namelen; int pshm_nameptr; } ;
struct pshminfo {int pshm_usecount; } ;
struct pshmhashhead {struct pshmcache* lh_first; } ;
struct TYPE_3__ {struct pshmcache* le_next; } ;
struct pshmcache {scalar_t__ pshm_nlen; struct pshminfo* pshminfo; int pshm_name; TYPE_1__ pshm_hash; } ;
struct TYPE_4__ {int neghits; int goodhits; int miss; int longnames; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pshmhashhead* FUNC_0 (struct pshmname*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct pshminfo **VAR_5, struct pshmname *VAR_6,
 struct pshmcache **VAR_7, int VAR_8)
{
 struct pshmcache *VAR_9, *VAR_10;
 struct pshmhashhead *VAR_11;

 if (VAR_6->pshm_namelen > VAR_3) {
  VAR_4.longnames++;
  return VAR_2;
 }

 VAR_11 = FUNC_0(VAR_6);
 for (VAR_9 = VAR_11->lh_first; VAR_9 != 0; VAR_9 = VAR_10) {
  VAR_10 = VAR_9->pshm_hash.le_next;
  if (VAR_9->pshm_nlen == VAR_6->pshm_namelen &&
      !FUNC_1(VAR_9->pshm_name, VAR_6->pshm_nameptr, (u_int)VAR_9-> pshm_nlen))
   break;
 }

 if (VAR_9 == 0) {
  VAR_4.miss++;
  return VAR_2;
 }


        if (VAR_9->pshminfo) {
  VAR_4.goodhits++;

  *VAR_5 = VAR_9->pshminfo;
  *VAR_7 = VAR_9;
  if (VAR_8)
   VAR_9->pshminfo->pshm_usecount++;
  return VAR_0;
 }




 VAR_4.neghits++;
 return VAR_1;
}
