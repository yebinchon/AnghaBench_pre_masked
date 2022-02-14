
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int refcount; } ;
struct vhost_ubuf_ref {TYPE_1__ kref; int wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhost_ubuf_ref*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct vhost_ubuf_ref *VAR_1)
{
 FUNC_2(&VAR_1->kref, VAR_0);
 FUNC_3(VAR_1->wait, !FUNC_0(&VAR_1->kref.refcount));
 FUNC_1(VAR_1);
}
