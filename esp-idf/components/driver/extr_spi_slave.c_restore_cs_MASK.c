
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int spics_io_num; } ;
struct TYPE_7__ {size_t id; TYPE_1__ cfg; } ;
typedef TYPE_2__ spi_slave_t ;
struct TYPE_8__ {int spics_in; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static inline void FUNC_3(spi_slave_t *VAR_1)
{
    if (FUNC_0(VAR_1)) {
        FUNC_1(VAR_1->cfg.spics_io_num, VAR_0[VAR_1->id].spics_in);
    } else {
        FUNC_2(VAR_1->cfg.spics_io_num, VAR_0[VAR_1->id].spics_in, 0);
    }
}
