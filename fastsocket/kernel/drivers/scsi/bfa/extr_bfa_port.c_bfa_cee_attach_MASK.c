
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bfa_ioc_s {int notify_q; } ;
struct TYPE_3__ {int qe; } ;
struct bfa_cee_s {struct bfa_ioc_s* ioc; TYPE_1__ ioc_notify; void* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bfa_ioc_s*,int ,int ,struct bfa_cee_s*) ;
 int FUNC_2 (TYPE_1__*,int ,struct bfa_cee_s*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct bfa_cee_s *VAR_3, struct bfa_ioc_s *VAR_4,
  void *VAR_5)
{
 FUNC_0(VAR_3 == ((void*)0));
 VAR_3->dev = VAR_5;
 VAR_3->ioc = VAR_4;

 FUNC_1(VAR_3->ioc, VAR_0, VAR_1, VAR_3);
 FUNC_3(&VAR_3->ioc_notify);
 FUNC_2(&VAR_3->ioc_notify, VAR_2, VAR_3);
 FUNC_4(&VAR_3->ioc_notify.qe, &VAR_3->ioc->notify_q);
}
