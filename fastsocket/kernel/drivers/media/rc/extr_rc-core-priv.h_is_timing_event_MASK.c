
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {int reset; int carrier_report; } ;



__attribute__((used)) static inline bool FUNC_0(struct ir_raw_event VAR_0)
{
 return !VAR_0.carrier_report && !VAR_0.reset;
}
