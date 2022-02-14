
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int nr_buf_used; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct qdio_q *VAR_0)
{
 return FUNC_0(&VAR_0->nr_buf_used) == 0;
}
