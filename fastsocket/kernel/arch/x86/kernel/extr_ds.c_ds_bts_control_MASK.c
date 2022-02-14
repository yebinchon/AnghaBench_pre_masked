
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ ds; } ;
struct bts_tracer {TYPE_2__ trace; } ;
struct TYPE_6__ {unsigned long* ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static unsigned long FUNC_0(struct bts_tracer *VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = VAR_2.ctl[VAR_3];
 if (!(VAR_6->trace.ds.flags & VAR_0))
  VAR_7 |= VAR_2.ctl[VAR_4];
 if (!(VAR_6->trace.ds.flags & VAR_1))
  VAR_7 |= VAR_2.ctl[VAR_5];

 return VAR_7;
}
