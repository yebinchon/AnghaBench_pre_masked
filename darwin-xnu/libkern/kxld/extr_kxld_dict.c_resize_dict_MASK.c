
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int kern_return_t ;
struct TYPE_13__ {scalar_t__ state; int value; int key; } ;
struct TYPE_12__ {int nitems; } ;
struct TYPE_11__ {TYPE_2__ resize_buckets; TYPE_2__ buckets; int resize_threshold; scalar_t__ num_entries; } ;
typedef TYPE_1__ KXLDDict ;
typedef TYPE_2__ KXLDArray ;
typedef TYPE_3__ DictEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static kern_return_t
FUNC_7(KXLDDict *VAR_4)
{
    kern_return_t VAR_5 = VAR_0;
    KXLDArray VAR_6;
    DictEntry *VAR_7 = ((void*)0);
    u_int VAR_8 = (VAR_4->buckets.nitems * 2 + 1);
    u_int VAR_9 = 0;

    FUNC_1(VAR_4);


    VAR_5 = FUNC_4(&VAR_4->resize_buckets, sizeof(DictEntry), VAR_8);
    FUNC_6(VAR_5, VAR_3);


    VAR_6 = VAR_4->buckets;
    VAR_4->buckets = VAR_4->resize_buckets;
    VAR_4->resize_buckets = VAR_6;


    VAR_4->num_entries = 0;
    VAR_4->resize_threshold = FUNC_0(VAR_4->buckets.nitems);


    for (VAR_9 = 0; VAR_9 < VAR_4->resize_buckets.nitems; ++VAR_9) {
        VAR_7 = FUNC_3(&VAR_4->resize_buckets, VAR_9);
        if (VAR_7->state == VAR_2) {
            VAR_5 = FUNC_5(VAR_4, VAR_7->key, VAR_7->value);
            FUNC_6(VAR_5, VAR_3);
        }
    }


    FUNC_2(&VAR_4->resize_buckets);

    VAR_5 = VAR_1;

finish:
    return VAR_5;
}
