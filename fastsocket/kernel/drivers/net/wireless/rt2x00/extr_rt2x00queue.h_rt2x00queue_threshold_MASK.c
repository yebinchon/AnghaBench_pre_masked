
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_queue {scalar_t__ threshold; } ;


 scalar_t__ FUNC_0 (struct data_queue*) ;

__attribute__((used)) static inline int FUNC_1(struct data_queue *VAR_0)
{
 return FUNC_0(VAR_0) < VAR_0->threshold;
}
