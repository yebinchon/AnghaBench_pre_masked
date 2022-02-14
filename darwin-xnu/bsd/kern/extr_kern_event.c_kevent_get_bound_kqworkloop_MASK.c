
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct uthread {struct kqrequest* uu_kqr_bound; } ;
struct kqueue {int dummy; } ;
struct kqrequest {int dummy; } ;


 struct uthread* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kqrequest*) ;

__attribute__((used)) static struct kqueue *
FUNC_2(thread_t VAR_0)
{
 struct uthread *VAR_1 = FUNC_0(VAR_0);
 struct kqrequest *VAR_2 = VAR_1->uu_kqr_bound;

 return VAR_2 ? (struct kqueue *)FUNC_1(VAR_2) : ((void*)0);
}
