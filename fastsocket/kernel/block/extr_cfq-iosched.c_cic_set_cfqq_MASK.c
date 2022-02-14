
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int dummy; } ;
struct cfq_io_context {struct cfq_queue** cfqq; } ;



__attribute__((used)) static inline void FUNC_0(struct cfq_io_context *VAR_0,
    struct cfq_queue *VAR_1, bool VAR_2)
{
 VAR_0->cfqq[VAR_2] = VAR_1;
}
