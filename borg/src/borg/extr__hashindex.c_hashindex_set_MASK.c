
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ num_entries; scalar_t__ upper_limit; int num_buckets; scalar_t__ num_empty; scalar_t__ min_empty; int key_size; int value_size; } ;
typedef TYPE_1__ HashIndex ;


 int * FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,unsigned char const*) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*,int*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_8(HashIndex *VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2)
{
    int VAR_3;
    int VAR_4 = FUNC_5(VAR_0, VAR_1, &VAR_3);
    uint8_t *VAR_5;
    if(VAR_4 < 0)
    {
        if(VAR_0->num_entries > VAR_0->upper_limit) {
            if(!FUNC_6(VAR_0, FUNC_3(VAR_0->num_buckets))) {
                return 0;
            }
            VAR_3 = FUNC_4(VAR_0, VAR_1);
        }
        VAR_4 = VAR_3;
        while(!FUNC_2(VAR_0, VAR_4) && !FUNC_1(VAR_0, VAR_4)) {
            VAR_4++;
            if (VAR_4 >= VAR_0->num_buckets){
                VAR_4 -= VAR_0->num_buckets;
            }
        }
        if(FUNC_2(VAR_0, VAR_4)){
            VAR_0->num_empty--;
            if(VAR_0->num_empty < VAR_0->min_empty) {

                if(!FUNC_6(VAR_0, VAR_0->num_buckets)) {
                    return 0;
                }
            }
        }
        VAR_5 = FUNC_0(VAR_0, VAR_4);
        FUNC_7(VAR_5, VAR_1, VAR_0->key_size);
        FUNC_7(VAR_5 + VAR_0->key_size, VAR_2, VAR_0->value_size);
        VAR_0->num_entries += 1;
    }
    else
    {
        FUNC_7(FUNC_0(VAR_0, VAR_4) + VAR_0->key_size, VAR_2, VAR_0->value_size);
    }
    return 1;
}
