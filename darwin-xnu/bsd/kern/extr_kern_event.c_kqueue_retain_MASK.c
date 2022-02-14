
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct kqworkloop {int kqwl_retains; } ;
struct kqueue {int kq_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,struct kqueue*) ;

__attribute__((used)) static inline void
FUNC_2(struct kqueue *VAR_2)
{
 struct kqworkloop *VAR_3 = (struct kqworkloop *)VAR_2;
 uint32_t VAR_4;

 if ((VAR_2->kq_state & VAR_0) == 0)
  return;

 VAR_4 = FUNC_0(&VAR_3->kqwl_retains);
 if (VAR_4 == VAR_1)
  FUNC_1("kq(%p) retain overflow", VAR_2);

 if (VAR_4 == 0)
  FUNC_1("kq(%p) resurrection", VAR_2);
}
