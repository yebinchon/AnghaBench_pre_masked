
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int* block_bitmap; } ;
typedef TYPE_1__ shadow_map_t ;
typedef int boolean_t ;
struct TYPE_6__ {size_t byte; int bit; } ;
typedef TYPE_2__ bitmap_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_2__ FUNC_1 (int ) ;

boolean_t
FUNC_2(shadow_map_t * VAR_2, uint32_t VAR_3)
{
    bitmap_offset_t VAR_4;

    VAR_4 = FUNC_1(VAR_3);
    return ((VAR_2->block_bitmap[VAR_4.byte] & FUNC_0(VAR_4.bit)) ? VAR_1 : VAR_0);
}
