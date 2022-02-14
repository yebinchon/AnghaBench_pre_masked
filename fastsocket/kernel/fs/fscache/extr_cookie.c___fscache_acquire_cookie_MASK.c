
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_cookie_def {int type; int * name; int get_key; } ;
struct fscache_cookie {int n_children; struct fscache_cookie_def const* def; int stores; scalar_t__ flags; void* netfs_data; struct fscache_cookie* parent; int usage; int n_active; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (struct fscache_cookie*) ;
 int FUNC_3 (char*,char*,int *,void*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (struct fscache_cookie*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 struct fscache_cookie* FUNC_10 (int ,int ) ;

struct fscache_cookie *FUNC_11(
 struct fscache_cookie *VAR_12,
 const struct fscache_cookie_def *VAR_13,
 void *VAR_14)
{
 struct fscache_cookie *VAR_15;

 FUNC_0(!VAR_13);

 FUNC_3("{%s},{%s},%p",
        VAR_12 ? (char *) VAR_12->def->name : "<no-parent>",
        VAR_13->name, VAR_14);

 FUNC_9(&VAR_4);


 if (!VAR_12) {
  FUNC_9(&VAR_6);
  FUNC_4(" [no parent]");
  return ((void*)0);
 }


 FUNC_0(!VAR_13->get_key);
 FUNC_0(!VAR_13->name[0]);

 FUNC_0(VAR_13->type == 128 &&
        VAR_12->def->type != 128);


 VAR_15 = FUNC_10(VAR_3, VAR_0);
 if (!VAR_15) {
  FUNC_9(&VAR_8);
  FUNC_4(" [ENOMEM]");
  return ((void*)0);
 }

 FUNC_7(&VAR_15->usage, 1);
 FUNC_7(&VAR_15->n_children, 0);




 FUNC_7(&VAR_15->n_active, 1);

 FUNC_6(&VAR_12->usage);
 FUNC_6(&VAR_12->n_children);

 VAR_15->def = VAR_13;
 VAR_15->parent = VAR_12;
 VAR_15->netfs_data = VAR_14;
 VAR_15->flags = 0;



 FUNC_1(&VAR_15->stores, VAR_1 & ~VAR_2);

 switch (VAR_15->def->type) {
 case 128:
  FUNC_9(&VAR_10);
  break;
 case 129:
  FUNC_9(&VAR_9);
  break;
 default:
  FUNC_9(&VAR_11);
  break;
 }




 if (VAR_15->def->type != 128) {
  if (FUNC_8(VAR_15) < 0) {
   FUNC_5(&VAR_12->n_children);
   FUNC_2(VAR_15);
   FUNC_9(&VAR_5);
   FUNC_4(" = NULL");
   return ((void*)0);
  }
 }

 FUNC_9(&VAR_7);
 FUNC_4(" = %p", VAR_15);
 return VAR_15;
}
