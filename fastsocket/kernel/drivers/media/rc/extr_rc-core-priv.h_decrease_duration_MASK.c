
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {unsigned int duration; } ;



__attribute__((used)) static inline void FUNC_0(struct ir_raw_event *VAR_0, unsigned VAR_1)
{
 if (VAR_1 > VAR_0->duration)
  VAR_0->duration = 0;
 else
  VAR_0->duration -= VAR_1;
}
