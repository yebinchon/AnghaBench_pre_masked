
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ use_cq; } ;
struct TYPE_4__ {TYPE_1__ out; } ;
struct qdio_q {TYPE_2__ u; int is_input_q; } ;



__attribute__((used)) static inline int FUNC_0(struct qdio_q *VAR_0)
{
 return !VAR_0->is_input_q && VAR_0->u.out.use_cq;
}
