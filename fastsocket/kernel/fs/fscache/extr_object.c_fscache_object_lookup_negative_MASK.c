
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
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(struct fscache_object *VAR_4)
{
 struct fscache_cookie *VAR_5 = VAR_4->cookie;

 FUNC_1("{OBJ%x,%s}", VAR_4->debug_id, VAR_4->state->name);

 if (!FUNC_6(VAR_2, &VAR_4->flags)) {
  FUNC_4(&VAR_3);




  FUNC_5(VAR_1, &VAR_5->flags);

  FUNC_0("wake up lookup %p", &VAR_5->flags);
  FUNC_3(VAR_0, &VAR_5->flags);
  FUNC_7(&VAR_5->flags, VAR_0);
 }
 FUNC_2("");
}
