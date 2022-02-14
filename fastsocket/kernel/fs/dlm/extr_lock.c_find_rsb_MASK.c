
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_rsb {int res_hash; int res_bucket; int res_nodeid; int res_hashchain; int res_ref; } ;
struct dlm_ls {int ls_rsbtbl_size; TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct dlm_ls*,char*,int,int,int ,struct dlm_rsb**) ;
 struct dlm_rsb* FUNC_1 (struct dlm_ls*,char*,int) ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 scalar_t__ FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct dlm_ls*,char*,int,int,unsigned int,struct dlm_rsb**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dlm_ls *VAR_6, char *VAR_7, int VAR_8,
      unsigned int VAR_9, struct dlm_rsb **VAR_10)
{
 struct dlm_rsb *VAR_11 = ((void*)0), *VAR_12;
 uint32_t VAR_13, VAR_14;
 int VAR_15 = -VAR_2;

 if (VAR_8 > VAR_0)
  goto out;

 if (FUNC_4(VAR_6))
  VAR_9 |= VAR_5;

 VAR_15 = 0;
 VAR_13 = FUNC_6(VAR_7, VAR_8, 0);
 VAR_14 = VAR_13 & (VAR_6->ls_rsbtbl_size - 1);

 VAR_15 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_14, VAR_9, &VAR_11);
 if (!VAR_15)
  goto out;

 if (VAR_15 == -VAR_1 && !(VAR_9 & VAR_5))
  goto out;


 if (VAR_15 == -VAR_4)
  goto out;

 VAR_15 = -VAR_3;
 VAR_11 = FUNC_1(VAR_6, VAR_7, VAR_8);
 if (!VAR_11)
  goto out;

 VAR_11->res_hash = VAR_13;
 VAR_11->res_bucket = VAR_14;
 VAR_11->res_nodeid = -1;
 FUNC_7(&VAR_11->res_ref);


 if (FUNC_4(VAR_6)) {
  int VAR_16 = FUNC_2(VAR_11);
  if (VAR_16 == FUNC_5())
   VAR_16 = 0;
  VAR_11->res_nodeid = VAR_16;
 }

 FUNC_10(&VAR_6->ls_rsbtbl[VAR_14].lock);
 VAR_15 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_14, 0, &VAR_12);
 if (!VAR_15) {
  FUNC_11(&VAR_6->ls_rsbtbl[VAR_14].lock);
  FUNC_3(VAR_11);
  VAR_11 = VAR_12;
  goto out;
 }
 FUNC_8(&VAR_11->res_hashchain, &VAR_6->ls_rsbtbl[VAR_14].list);
 FUNC_11(&VAR_6->ls_rsbtbl[VAR_14].lock);
 VAR_15 = 0;
 out:
 *VAR_10 = VAR_11;
 return VAR_15;
}
