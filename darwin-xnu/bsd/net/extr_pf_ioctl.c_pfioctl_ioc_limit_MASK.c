
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct proc {int dummy; } ;
struct pfioc_limit {size_t index; int limit; } ;
struct TYPE_2__ {int limit; int * pp; } ;




 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int,int *,int ) ;

__attribute__((used)) static int
FUNC_2(u_long VAR_3, struct pfioc_limit *VAR_4, struct proc *VAR_5)
{
#pragma unused(p)
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129: {

  if (VAR_4->index < 0 || VAR_4->index >= VAR_1) {
   VAR_6 = VAR_0;
   goto fail;
  }
  VAR_4->limit = VAR_2[VAR_4->index].limit;
  break;
 }

 case 128: {
  int VAR_7;

  if (VAR_4->index < 0 || VAR_4->index >= VAR_1 ||
      VAR_2[VAR_4->index].pp == ((void*)0)) {
   VAR_6 = VAR_0;
   goto fail;
  }
  FUNC_1(VAR_2[VAR_4->index].pp,
      VAR_4->limit, ((void*)0), 0);
  VAR_7 = VAR_2[VAR_4->index].limit;
  VAR_2[VAR_4->index].limit = VAR_4->limit;
  VAR_4->limit = VAR_7;
  break;
 }

 default:
  FUNC_0(0);

 }
fail:
 return (VAR_6);
}
