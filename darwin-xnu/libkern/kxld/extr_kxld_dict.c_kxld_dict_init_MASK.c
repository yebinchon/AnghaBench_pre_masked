
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef TYPE_1__* kxld_dict_hash ;
typedef TYPE_1__* kxld_dict_cmp ;
typedef int kern_return_t ;
struct TYPE_8__ {int resize_threshold; scalar_t__ num_entries; struct TYPE_8__* cmp; struct TYPE_8__* hash; int buckets; } ;
typedef TYPE_1__ KXLDDict ;
typedef int DictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int ,int ) ;

kern_return_t
FUNC_5(KXLDDict * VAR_4, kxld_dict_hash VAR_5, kxld_dict_cmp VAR_6,
    u_int VAR_7)
{
    kern_return_t VAR_8 = VAR_1;
    u_int VAR_9 = FUNC_0(VAR_7);
    u_int VAR_10 = VAR_0;

    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);




    while (VAR_9 > VAR_10) {
        VAR_10 *= 2;
        VAR_10++;
    }


    VAR_8 = FUNC_3(&VAR_4->buckets, sizeof(DictEntry), VAR_10);
    FUNC_4(VAR_8, VAR_3);


    VAR_4->hash = VAR_5;
    VAR_4->cmp = VAR_6;
    VAR_4->num_entries = 0;
    VAR_4->resize_threshold = FUNC_1(VAR_10);

    VAR_8 = VAR_2;

finish:
    return VAR_8;
}
