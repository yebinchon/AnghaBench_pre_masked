
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fscache_object {int flags; TYPE_1__* state; int debug_id; struct fscache_cookie* cookie; } ;
struct fscache_cookie {int flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(struct fscache_object *VAR_6)
{
 struct fscache_cookie *VAR_7 = VAR_6->cookie;

 FUNC_0("{OBJ%x,%s}", VAR_6->debug_id, VAR_6->state->name);



 if (!FUNC_5(VAR_3, &VAR_6->flags)) {
  FUNC_3(&VAR_5);


  FUNC_2(VAR_1, &VAR_7->flags);




  FUNC_2(VAR_0, &VAR_7->flags);
  FUNC_6(&VAR_7->flags, VAR_0);
 } else {
  FUNC_3(&VAR_4);
 }

 FUNC_4(VAR_2, &VAR_6->flags);
 FUNC_1("");
}
