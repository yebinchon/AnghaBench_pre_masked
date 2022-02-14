
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ top; scalar_t__ begin; } ;
struct TYPE_8__ {TYPE_3__ ds; } ;
struct TYPE_6__ {TYPE_1__* context; } ;
struct pebs_tracer {TYPE_4__ trace; TYPE_2__ ds; } ;
struct TYPE_5__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,unsigned long) ;

int FUNC_1(struct pebs_tracer *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;

 VAR_3->trace.ds.top = VAR_3->trace.ds.begin;

 FUNC_0(VAR_3->ds.context->ds, VAR_2, VAR_1,
        (unsigned long)VAR_3->trace.ds.top);

 return 0;
}
