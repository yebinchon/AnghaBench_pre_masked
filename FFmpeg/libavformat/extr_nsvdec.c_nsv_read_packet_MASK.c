
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int * data; } ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {TYPE_8__* ahead; } ;
typedef TYPE_1__ NSVContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (TYPE_2__*,TYPE_8__*,int) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVPacket *VAR_1)
{
    NSVContext *VAR_2 = VAR_0->priv_data;
    int VAR_3, VAR_4 = 0;


    if (!VAR_2->ahead[0].data && !VAR_2->ahead[1].data)
        VAR_4 = FUNC_1(VAR_0, 0);
    if (VAR_4 < 0)
        return VAR_4;


    for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
        if (VAR_2->ahead[VAR_3].data) {

            FUNC_0(VAR_1, &VAR_2->ahead[VAR_3], sizeof(AVPacket));
            VAR_2->ahead[VAR_3].data = ((void*)0);
            return VAR_1->size;
        }
    }


    return -1;
}
