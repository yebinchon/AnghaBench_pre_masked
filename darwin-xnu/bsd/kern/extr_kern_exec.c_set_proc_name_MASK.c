
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct image_params {TYPE_2__* ip_ndp; } ;
typedef TYPE_3__* proc_t ;
typedef int caddr_t ;
struct TYPE_7__ {char* p_name; char* p_comm; } ;
struct TYPE_5__ {int cn_namelen; scalar_t__ cn_nameptr; } ;
struct TYPE_6__ {TYPE_1__ ni_cnd; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct image_params *VAR_1, proc_t VAR_2)
{
 int VAR_3 = sizeof(VAR_2->p_name) - 1;

 if (VAR_1->ip_ndp->ni_cnd.cn_namelen > VAR_3) {
  VAR_1->ip_ndp->ni_cnd.cn_namelen = VAR_3;
 }

 FUNC_0((caddr_t)VAR_1->ip_ndp->ni_cnd.cn_nameptr, (caddr_t)VAR_2->p_name,
  (unsigned)VAR_1->ip_ndp->ni_cnd.cn_namelen);
 VAR_2->p_name[VAR_1->ip_ndp->ni_cnd.cn_namelen] = '\0';

 if (VAR_1->ip_ndp->ni_cnd.cn_namelen > VAR_0) {
  VAR_1->ip_ndp->ni_cnd.cn_namelen = VAR_0;
 }

 FUNC_0((caddr_t)VAR_1->ip_ndp->ni_cnd.cn_nameptr, (caddr_t)VAR_2->p_comm,
  (unsigned)VAR_1->ip_ndp->ni_cnd.cn_namelen);
 VAR_2->p_comm[VAR_1->ip_ndp->ni_cnd.cn_namelen] = '\0';
}
