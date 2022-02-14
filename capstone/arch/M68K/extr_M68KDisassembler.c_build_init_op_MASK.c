
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_6__ {int cpu_size; int type; } ;
struct TYPE_8__ {TYPE_1__ op_size; scalar_t__ op_count; } ;
struct TYPE_7__ {TYPE_3__ extension; int inst; } ;
typedef TYPE_2__ m68k_info ;
typedef TYPE_3__ cs_m68k ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static cs_m68k* FUNC_1(m68k_info *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 cs_m68k* VAR_5;

 FUNC_0(VAR_1->inst, VAR_2);

 VAR_5 = &VAR_1->extension;

 VAR_5->op_count = (uint8_t)VAR_3;
 VAR_5->op_size.type = VAR_0;
 VAR_5->op_size.cpu_size = VAR_4;

 return VAR_5;
}
