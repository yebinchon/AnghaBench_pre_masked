
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ipz_queue {scalar_t__ qe_size; scalar_t__ queue_length; } ;



__attribute__((used)) static inline u64 FUNC_0(struct ipz_queue *VAR_0, u64 VAR_1)
{
 VAR_1 += VAR_0->qe_size;
 if (VAR_1 >= VAR_0->queue_length) VAR_1 = 0;
 return VAR_1;
}
