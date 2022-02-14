
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VLC_TYPE ;
struct TYPE_3__ {int table_size; int table_allocated; int bits; scalar_t__ table; } ;
typedef TYPE_1__ VLC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(VLC *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1->table_size;

    VAR_1->table_size += VAR_2;
    if (VAR_1->table_size > VAR_1->table_allocated) {
        if (VAR_3)
            FUNC_1();
        VAR_1->table_allocated += (1 << VAR_1->bits);
        VAR_1->table = FUNC_2(VAR_1->table, VAR_1->table_allocated, sizeof(VLC_TYPE) * 2);
        if (!VAR_1->table) {
            VAR_1->table_allocated = 0;
            VAR_1->table_size = 0;
            return FUNC_0(VAR_0);
        }
        FUNC_3(VAR_1->table + VAR_1->table_allocated - (1 << VAR_1->bits), 0, sizeof(VLC_TYPE) * 2 << VAR_1->bits);
    }
    return VAR_4;
}
