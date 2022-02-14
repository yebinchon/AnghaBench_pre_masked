
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ep; } ;
struct TYPE_7__ {scalar_t__ sp; } ;
struct TYPE_10__ {TYPE_2__ e; TYPE_1__ s; } ;
struct TYPE_9__ {TYPE_4__* m; } ;
typedef TYPE_3__ Resublist ;
typedef TYPE_4__ Resub ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(Resub *VAR_1, int VAR_2, Resublist *VAR_3)
{
 int VAR_4;

 if(VAR_1==0 || VAR_2<=0)
  return;
 if(VAR_1[0].s.sp==0 || VAR_3->m[0].s.sp<VAR_1[0].s.sp ||
    (VAR_3->m[0].s.sp==VAR_1[0].s.sp && VAR_3->m[0].e.ep>VAR_1[0].e.ep)){
  for(VAR_4=0; VAR_4<VAR_2 && VAR_4<VAR_0; VAR_4++)
   VAR_1[VAR_4] = VAR_3->m[VAR_4];
  for(; VAR_4<VAR_2; VAR_4++)
   VAR_1[VAR_4].s.sp = VAR_1[VAR_4].e.ep = 0;
 }
}
