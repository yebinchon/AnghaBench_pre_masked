
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {int slice_end; } ;


 scalar_t__ FUNC_0 (struct cfq_queue*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct cfq_queue *VAR_1)
{
 if (FUNC_0(VAR_1))
  return 0;
 if (FUNC_1(VAR_0, VAR_1->slice_end))
  return 0;

 return 1;
}
