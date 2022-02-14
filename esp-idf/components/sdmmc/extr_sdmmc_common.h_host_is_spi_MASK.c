
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ host; } ;
typedef TYPE_2__ sdmmc_card_t ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const sdmmc_card_t* VAR_1)
{
    return (VAR_1->host.flags & VAR_0) != 0;
}
