
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bts_trace {int ds; } ;
struct TYPE_2__ {int context; } ;
struct bts_tracer {struct bts_trace const trace; TYPE_1__ ds; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

const struct bts_trace *FUNC_1(struct bts_tracer *VAR_1)
{
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_1->ds.context, &VAR_1->trace.ds, VAR_0);
 return &VAR_1->trace;
}
