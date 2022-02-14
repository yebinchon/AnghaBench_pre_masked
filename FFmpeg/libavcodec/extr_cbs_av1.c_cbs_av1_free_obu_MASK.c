
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int tile_data; } ;
struct TYPE_9__ {int tile_data; } ;
struct TYPE_10__ {TYPE_1__ tile_group; } ;
struct TYPE_13__ {int tile_data; } ;
struct TYPE_14__ {int padding; int metadata; TYPE_3__ tile_list; TYPE_2__ frame; TYPE_5__ tile_group; } ;
struct TYPE_12__ {int obu_type; } ;
struct TYPE_15__ {TYPE_6__ obu; TYPE_4__ header; } ;
typedef TYPE_7__ AV1RawOBU ;







 int FUNC_0 (TYPE_7__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, uint8_t *VAR_1)
{
    AV1RawOBU *VAR_2 = (AV1RawOBU*)VAR_1;

    switch (VAR_2->header.obu_type) {
    case 129:
        FUNC_3(&VAR_2->obu.tile_group.tile_data);
        break;
    case 132:
        FUNC_3(&VAR_2->obu.frame.tile_group.tile_data);
        break;
    case 128:
        FUNC_3(&VAR_2->obu.tile_list.tile_data);
        break;
    case 131:
        FUNC_1(&VAR_2->obu.metadata);
        break;
    case 130:
        FUNC_2(&VAR_2->obu.padding);
        break;
    }

    FUNC_0(&VAR_2);
}
