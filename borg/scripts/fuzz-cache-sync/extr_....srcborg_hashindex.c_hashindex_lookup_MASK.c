
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int num_buckets; int bucket_size; } ;
typedef TYPE_1__ HashIndex ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,unsigned char const*) ;
 int FUNC_5 (TYPE_1__*,unsigned char const*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(HashIndex *VAR_0, const unsigned char *VAR_1, int *VAR_2)
{
    int VAR_3 = -1;
    int VAR_4 = FUNC_5(VAR_0, VAR_1);
    int VAR_5 = VAR_4;
    for(;;) {
        if(FUNC_2(VAR_0, VAR_5))
        {
            break;
        }
        if(FUNC_1(VAR_0, VAR_5)) {
            if(VAR_3 == -1) {
                VAR_3 = VAR_5;
            }
        }
        else if(FUNC_4(VAR_0, VAR_5, VAR_1)) {
            if (VAR_3 != -1) {


                FUNC_6(FUNC_0(VAR_0, VAR_3), FUNC_0(VAR_0, VAR_5), VAR_0->bucket_size);
                FUNC_3(VAR_0, VAR_5);
                VAR_5 = VAR_3;
            }
            return VAR_5;
        }
        VAR_5++;
        if (VAR_5 >= VAR_0->num_buckets) {
            VAR_5 -= VAR_0->num_buckets;
        }
        if(VAR_5 == VAR_4) {
            break;
        }
    }
    if (VAR_2 != ((void*)0)) {
        (*VAR_2) = (VAR_3 == -1) ? VAR_5 : VAR_3;
    }
    return -1;
}
