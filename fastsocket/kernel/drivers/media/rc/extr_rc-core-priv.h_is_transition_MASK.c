
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {scalar_t__ pulse; } ;



__attribute__((used)) static inline bool FUNC_0(struct ir_raw_event *VAR_0, struct ir_raw_event *VAR_1)
{
 return VAR_0->pulse != VAR_1->pulse;
}
