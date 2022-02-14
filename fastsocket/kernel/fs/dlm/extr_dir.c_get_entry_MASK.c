
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_ls {TYPE_1__* ls_dirtbl; } ;
struct dlm_direntry {int master_nodeid; int length; int list; int name; } ;
struct TYPE_2__ {int lock; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (struct dlm_ls*,char*,int) ;
 int FUNC_1 (struct dlm_direntry*) ;
 struct dlm_direntry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,int) ;
 struct dlm_direntry* FUNC_5 (struct dlm_ls*,char*,int,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct dlm_ls *VAR_5, int VAR_6, char *VAR_7,
       int VAR_8, int *VAR_9)
{
 struct dlm_direntry *VAR_10, *VAR_11;
 uint32_t VAR_12;

 VAR_12 = FUNC_0(VAR_5, VAR_7, VAR_8);

 FUNC_6(&VAR_5->ls_dirtbl[VAR_12].lock);
 VAR_10 = FUNC_5(VAR_5, VAR_7, VAR_8, VAR_12);
 if (VAR_10) {
  *VAR_9 = VAR_10->master_nodeid;
  FUNC_7(&VAR_5->ls_dirtbl[VAR_12].lock);
  if (*VAR_9 == VAR_6)
   return -VAR_1;
  return 0;
 }

 FUNC_7(&VAR_5->ls_dirtbl[VAR_12].lock);

 if (VAR_8 > VAR_0)
  return -VAR_2;

 VAR_10 = FUNC_2(sizeof(struct dlm_direntry) + VAR_8, VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->master_nodeid = VAR_6;
 VAR_10->length = VAR_8;
 FUNC_4(VAR_10->name, VAR_7, VAR_8);

 FUNC_6(&VAR_5->ls_dirtbl[VAR_12].lock);
 VAR_11 = FUNC_5(VAR_5, VAR_7, VAR_8, VAR_12);
 if (VAR_11) {
  FUNC_1(VAR_10);
  VAR_10 = VAR_11;
 } else {
  FUNC_3(&VAR_10->list, &VAR_5->ls_dirtbl[VAR_12].list);
 }
 *VAR_9 = VAR_10->master_nodeid;
 FUNC_7(&VAR_5->ls_dirtbl[VAR_12].lock);
 return 0;
}
