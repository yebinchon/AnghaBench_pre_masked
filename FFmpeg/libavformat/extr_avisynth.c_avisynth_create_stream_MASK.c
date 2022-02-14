
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* priv_data; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_11__ {int vi; } ;
typedef TYPE_1__ AviSynthContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1)
{
    AviSynthContext *VAR_2 = VAR_1->priv_data;
    AVStream *VAR_3;
    int VAR_4;
    int VAR_5 = 0;

    if (FUNC_4(VAR_2->vi)) {
        VAR_3 = FUNC_0(VAR_1, ((void*)0));
        if (!VAR_3)
            return VAR_0;
        VAR_3->id = VAR_5++;
        if ((VAR_4 = FUNC_2(VAR_1, VAR_3)))
            return VAR_4;
    }
    if (FUNC_3(VAR_2->vi)) {
        VAR_3 = FUNC_0(VAR_1, ((void*)0));
        if (!VAR_3)
            return VAR_0;
        VAR_3->id = VAR_5++;
        if ((VAR_4 = FUNC_1(VAR_1, VAR_3)))
            return VAR_4;
    }
    return 0;
}
