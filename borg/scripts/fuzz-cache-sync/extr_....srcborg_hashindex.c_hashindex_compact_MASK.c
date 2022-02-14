
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int num_buckets; int num_entries; int bucket_size; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_5(HashIndex *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2;
    int VAR_3;
    int VAR_4, VAR_5, VAR_6;
    int VAR_7 = 0;
    uint64_t VAR_8 = (VAR_0->num_buckets - VAR_0->num_entries) * (uint64_t)VAR_0->bucket_size;

    if(VAR_0->num_buckets - VAR_0->num_entries == 0) {

        return 0;
    }

    while(VAR_1 < VAR_0->num_buckets) {

        VAR_2 = VAR_1;
        while((FUNC_2(VAR_0, VAR_1) || FUNC_1(VAR_0, VAR_1)) && VAR_1 < VAR_0->num_buckets) {
            VAR_1++;
        }


        VAR_5 = VAR_4 = VAR_1 - VAR_2;
        VAR_3 = VAR_1;

        if(!VAR_4) {

            FUNC_4(FUNC_0(VAR_0, VAR_7), FUNC_0(VAR_0, VAR_1), VAR_0->bucket_size);
            VAR_1++;
            VAR_7++;
            continue;
        }



        while(!(FUNC_2(VAR_0, VAR_1) || FUNC_1(VAR_0, VAR_1)) && VAR_4 && VAR_1 < VAR_0->num_buckets) {
            VAR_1++;
            VAR_4--;
        }

        VAR_6 = VAR_5 - VAR_4;

        if(!VAR_6) {

            break;
        }

        FUNC_3(FUNC_0(VAR_0, VAR_7), FUNC_0(VAR_0, VAR_3), VAR_6 * VAR_0->bucket_size);
        VAR_7 += VAR_6;
    }

    VAR_0->num_buckets = VAR_0->num_entries;
    return VAR_8;
}
