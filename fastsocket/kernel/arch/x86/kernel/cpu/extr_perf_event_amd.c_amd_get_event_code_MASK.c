
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int config; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct hw_perf_event *VAR_0)
{
 return ((VAR_0->config >> 24) & 0x0f00) | (VAR_0->config & 0x00ff);
}
