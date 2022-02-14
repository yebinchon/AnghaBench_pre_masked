
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; TYPE_1__* host; } ;
typedef TYPE_2__ spi_device_t ;
struct TYPE_4__ {int intr; int acquire_cs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(spi_device_t *VAR_1)
{
    int VAR_2 = FUNC_0(&VAR_1->host->acquire_cs);
    if (VAR_2 == VAR_1->id || VAR_2 == VAR_0) {
        FUNC_1(VAR_1->host->intr);
    }

}
