
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vauth_ctx ;
struct TYPE_5__ {int flags_valid; int flags; TYPE_1__* ctx; int dvap; } ;
struct TYPE_4__ {int vc_ucred; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(vauth_ctx VAR_1)
{
 int VAR_2;

 if (VAR_1->flags_valid & VAR_0) {
  VAR_2 = (VAR_1->flags & VAR_0) ? 1 : 0;
 } else {
  VAR_2 = FUNC_0(VAR_1->dvap, VAR_1->ctx->vc_ucred);


  VAR_1->flags_valid |= VAR_0;
  if (VAR_2) {
   VAR_1->flags |= VAR_0;
  } else {
   VAR_1->flags &= ~VAR_0;
  }
 }
 return(VAR_2);
}
