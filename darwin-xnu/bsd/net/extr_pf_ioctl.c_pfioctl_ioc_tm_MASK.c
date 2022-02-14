
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct proc {int dummy; } ;
struct pfioc_tm {size_t timeout; int seconds; } ;
struct TYPE_2__ {int* timeout; } ;




 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(u_long VAR_5, struct pfioc_tm *VAR_6, struct proc *VAR_7)
{
#pragma unused(p)
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128: {
  int VAR_9;

  if (VAR_6->timeout < 0 || VAR_6->timeout >= VAR_2 ||
      VAR_6->seconds < 0) {
   VAR_8 = VAR_0;
   goto fail;
  }
  VAR_9 = VAR_3.timeout[VAR_6->timeout];
  if (VAR_6->timeout == VAR_1 && VAR_6->seconds == 0)
   VAR_6->seconds = 1;
  VAR_3.timeout[VAR_6->timeout] = VAR_6->seconds;
  if (VAR_6->timeout == VAR_1 && VAR_6->seconds < VAR_9)
   FUNC_1(VAR_4);
  VAR_6->seconds = VAR_9;
  break;
 }

 case 129: {
  if (VAR_6->timeout < 0 || VAR_6->timeout >= VAR_2) {
   VAR_8 = VAR_0;
   goto fail;
  }
  VAR_6->seconds = VAR_3.timeout[VAR_6->timeout];
  break;
 }

 default:
  FUNC_0(0);

 }
fail:
 return (VAR_8);
}
