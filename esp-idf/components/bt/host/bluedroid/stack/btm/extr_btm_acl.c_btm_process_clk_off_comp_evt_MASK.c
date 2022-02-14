
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {TYPE_1__* acl_db; } ;
struct TYPE_3__ {int clock_offset; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 size_t FUNC_1 (int ) ;

void FUNC_2 (UINT16 VAR_2, UINT16 VAR_3)
{
    UINT8 VAR_4;
    FUNC_0 ("btm_process_clk_off_comp_evt\n");

    if ((VAR_4 = FUNC_1(VAR_2)) < VAR_0) {
        VAR_1.acl_db[VAR_4].clock_offset = VAR_3;
    }
}
