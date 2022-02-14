
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waitq {int dummy; } ;
struct kqueue {int kq_wqs; } ;
struct knote {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct knote*) ;
 struct kqueue* FUNC_1 (struct knote*) ;
 scalar_t__ FUNC_2 (struct waitq*,int *) ;

int
FUNC_3(struct knote *VAR_2, struct waitq *VAR_3)
{
 struct kqueue *VAR_4 = FUNC_1(VAR_2);
 kern_return_t VAR_5;

 VAR_5 = FUNC_2(VAR_3, &VAR_4->kq_wqs);
 FUNC_0(VAR_2);
 return ((VAR_5 != VAR_1) ? VAR_0 : 0);
}
