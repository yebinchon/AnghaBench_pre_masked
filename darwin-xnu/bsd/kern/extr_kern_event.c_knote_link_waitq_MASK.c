
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct waitq {int dummy; } ;
struct kqueue {int kq_wqs; } ;
struct knote {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kqueue* FUNC_0 (struct knote*) ;
 int FUNC_1 (struct knote*) ;
 scalar_t__ FUNC_2 (struct waitq*,int *,int ,int *) ;

int
FUNC_3(struct knote *VAR_3, struct waitq *VAR_4, uint64_t *VAR_5)
{
 struct kqueue *VAR_6 = FUNC_0(VAR_3);
 kern_return_t VAR_7;

 VAR_7 = FUNC_2(VAR_4, &VAR_6->kq_wqs, VAR_2, VAR_5);
 if (VAR_7 == VAR_1) {
  FUNC_1(VAR_3);
  return (0);
 } else {
  return (VAR_0);
 }
}
