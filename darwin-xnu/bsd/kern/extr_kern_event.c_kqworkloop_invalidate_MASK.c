
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct TYPE_2__ {int kqr_suppressed; } ;
struct kqworkloop {scalar_t__ kqwl_owner; TYPE_1__ kqwl_request; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kqworkloop*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static thread_t
FUNC_5(struct kqworkloop *VAR_2)
{
 thread_t VAR_3 = VAR_2->kqwl_owner;

 FUNC_1(FUNC_0(&VAR_2->kqwl_request.kqr_suppressed));
 if (VAR_3) {





  if (FUNC_2(VAR_2) != VAR_1) {
   FUNC_3(VAR_3);
  }
  FUNC_4(VAR_3);
  VAR_2->kqwl_owner = VAR_0;
 }

 return VAR_3;
}
