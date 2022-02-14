
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t reg_0; size_t reg_1; } ;
struct TYPE_5__ {TYPE_1__ reg_pair; } ;
typedef TYPE_2__ cs_m68k_op ;
typedef int SStream ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(SStream* VAR_2, const cs_m68k_op* VAR_3)
{
 FUNC_0(VAR_2, "%s:%s", VAR_1[VAR_0 + VAR_3->reg_pair.reg_0],
   VAR_1[VAR_0 + VAR_3->reg_pair.reg_1]);
}
