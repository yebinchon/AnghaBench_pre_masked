
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_context {int state; int list; int refcount; TYPE_1__* upriv; } ;
struct ezusb_priv {int req_lock; int req_pending; } ;
struct TYPE_2__ {int udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ezusb_priv*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ezusb_priv *VAR_1,
      struct request_context *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_1->req_lock, VAR_3);

 if (!VAR_2->upriv->udev) {
  FUNC_4(&VAR_1->req_lock, VAR_3);
  goto done;
 }
 FUNC_0(&VAR_2->refcount);
 FUNC_2(&VAR_2->list, &VAR_1->req_pending);
 FUNC_4(&VAR_1->req_lock, VAR_3);

 VAR_2->state = VAR_0;
 FUNC_1(VAR_1);

 done:
 return;
}
