
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t limit_entry; scalar_t__ sample_reg; scalar_t__ ackwidth; int syncreg; int period; int offset; } ;
typedef TYPE_2__ nsp32_target ;
struct TYPE_8__ {TYPE_1__* synct; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_6__ {unsigned char period_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(nsp32_hw_data *VAR_2, nsp32_target *VAR_3)
{
 unsigned char VAR_4 = VAR_2->synct[VAR_3->limit_entry].period_num;

 VAR_3->offset = VAR_0;
 VAR_3->period = 0;
 VAR_3->syncreg = FUNC_0(VAR_4, VAR_0);
 VAR_3->ackwidth = 0;
 VAR_3->sample_reg = 0;

 FUNC_1(VAR_1, "set async");
}
