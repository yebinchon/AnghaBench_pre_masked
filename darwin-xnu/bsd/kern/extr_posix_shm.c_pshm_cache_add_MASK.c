
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pshmname {scalar_t__ pshm_namelen; int pshm_nameptr; } ;
struct pshminfo {int dummy; } ;
struct pshmhashhead {struct pshmcache* lh_first; } ;
struct TYPE_2__ {struct pshmcache* le_next; } ;
struct pshmcache {scalar_t__ pshm_nlen; TYPE_1__ pshm_hash; int pshm_name; struct pshminfo* pshminfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct pshmhashhead*,struct pshmcache*,int ) ;
 scalar_t__ VAR_1 ;
 struct pshmhashhead* FUNC_1 (struct pshmname*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct pshminfo**,struct pshmname*,struct pshmcache**,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct pshminfo *VAR_5, struct pshmname *VAR_6, struct pshmcache *VAR_7)
{
 struct pshmhashhead *VAR_8;
 struct pshminfo *VAR_9;
 struct pshmcache *VAR_10;
 if (FUNC_4(&VAR_9, VAR_6, &VAR_10, 0) == VAR_1) {
  return VAR_0;
 }
 VAR_4++;




 VAR_7->pshminfo = VAR_5;
 VAR_7->pshm_nlen = VAR_6->pshm_namelen;
 FUNC_2(VAR_6->pshm_nameptr, VAR_7->pshm_name, (unsigned)VAR_7->pshm_nlen);
 VAR_8 = FUNC_1(VAR_6);
 FUNC_0(VAR_8, VAR_7, VAR_3);
 return 0;
}
