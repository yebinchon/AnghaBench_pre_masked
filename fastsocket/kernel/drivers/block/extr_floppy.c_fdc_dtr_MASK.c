
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timeout_fn ;
struct TYPE_4__ {int dtr; } ;
struct TYPE_3__ {int rate; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_2(void)
{

 if ((VAR_5->rate & 3) == VAR_0->dtr)
  return 0;


 FUNC_0(VAR_5->rate & 3, VAR_1);






 VAR_0->dtr = VAR_5->rate & 3;
 return (FUNC_1(VAR_4 + 2UL * VAR_2 / 100,
           (timeout_fn) VAR_3));
}
