
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_2__ hash_map_entry_t ;
struct TYPE_5__ {int address; } ;
struct TYPE_7__ {TYPE_1__ address; } ;
typedef TYPE_3__ background_connection_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(hash_map_entry_t *VAR_1, void *VAR_2)
{
    bool *VAR_3 = VAR_2;
    background_connection_t *VAR_4 = VAR_1->data;
    const bool VAR_5 = FUNC_0(VAR_4->address.address, VAR_0);
    if (!VAR_5) {
        *VAR_3 = 1;
        return 0;
    }
    return 1;
}
