
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cycles_timeslice; } ;
typedef TYPE_1__ SH2 ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_2(SH2 *VAR_0, int VAR_1, int VAR_2)
{
  int VAR_3;

  VAR_0->cycles_timeslice = VAR_1;





    VAR_3 = FUNC_1(VAR_0, VAR_1);

  return VAR_0->cycles_timeslice - VAR_3;
}
