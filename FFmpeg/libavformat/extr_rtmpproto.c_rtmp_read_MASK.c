
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int flv_size; int flv_off; int flv_data; } ;
typedef TYPE_2__ RTMPContext ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    RTMPContext *VAR_3 = VAR_0->priv_data;
    int VAR_4 = VAR_2;
    int VAR_5;

    while (VAR_2 > 0) {
        int VAR_6 = VAR_3->flv_size - VAR_3->flv_off;

        if (VAR_6 >= VAR_2) {
            FUNC_1(VAR_1, VAR_3->flv_data + VAR_3->flv_off, VAR_2);
            VAR_3->flv_off += VAR_2;
            return VAR_4;
        }
        if (VAR_6 > 0) {
            FUNC_1(VAR_1, VAR_3->flv_data + VAR_3->flv_off, VAR_6);
            VAR_1 += VAR_6;
            VAR_2 -= VAR_6;
            VAR_3->flv_off = VAR_3->flv_size;
            return VAR_6;
        }
        if ((VAR_5 = FUNC_0(VAR_0, 0)) < 0)
           return VAR_5;
    }
    return VAR_4;
}
