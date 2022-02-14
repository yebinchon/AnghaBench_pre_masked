
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_wqs; } ;
struct knote {int dummy; } ;


 struct kqueue* FUNC_0 (struct knote*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct knote *VAR_0)
{
 struct kqueue *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->kq_wqs);
}
