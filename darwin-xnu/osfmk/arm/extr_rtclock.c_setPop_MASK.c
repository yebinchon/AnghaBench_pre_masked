
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ rtcPop; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;

int
FUNC_4(uint64_t VAR_0)
{
 int VAR_1;
 uint64_t VAR_2;
 cpu_data_t * VAR_3;

 VAR_3 = FUNC_1();
 VAR_2 = FUNC_2();

 VAR_1 = FUNC_0(VAR_0, VAR_2);
 VAR_3->rtcPop = VAR_1 + VAR_2;

 FUNC_3((uint32_t) VAR_1);

 return (VAR_1);
}
