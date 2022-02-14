
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dst_trans {int cmd; struct bio* bio; TYPE_1__* n; } ;
struct dst_state {int socket; } ;
struct dst_cmd {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct dst_state* state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (struct dst_state*,int *,struct bio*) ;
 int FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dst_state*) ;
 int FUNC_6 (struct dst_state*) ;
 int FUNC_7 (struct dst_state*) ;

int FUNC_8(struct dst_trans *VAR_1)
{
 int VAR_2;
 struct dst_state *VAR_3 = VAR_1->n->state;
 struct bio *VAR_4 = VAR_1->bio;

 FUNC_1(&VAR_1->cmd);

 FUNC_5(VAR_3);
 if (!VAR_3->socket) {
  VAR_2 = FUNC_4(VAR_3);
  if (VAR_2)
   goto err_out_unlock;
 }

 if (FUNC_0(VAR_4) == VAR_0) {
  VAR_2 = FUNC_3(VAR_3, &VAR_1->cmd, VAR_1->bio);
 } else {
  VAR_2 = FUNC_2(VAR_3->socket, &VAR_1->cmd,
    sizeof(struct dst_cmd), 0);
 }
 if (VAR_2)
  goto err_out_reset;

 FUNC_7(VAR_3);
 return 0;

err_out_reset:
 FUNC_6(VAR_3);
err_out_unlock:
 FUNC_7(VAR_3);

 return VAR_2;
}
