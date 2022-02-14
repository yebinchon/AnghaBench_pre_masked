
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * out; int temp_buffer; TYPE_2__* avf; } ;
typedef TYPE_1__ VariantStream ;
struct TYPE_6__ {int * pb; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(VariantStream *VAR_1, int *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_1->avf;

    if (!VAR_3->pb) {
        return FUNC_0(VAR_0);
    }


    FUNC_1(VAR_3, ((void*)0));
    FUNC_3(VAR_3->pb);


    *VAR_2 = FUNC_2(VAR_3->pb, &VAR_1->temp_buffer);
    VAR_3->pb = ((void*)0);
    FUNC_5(VAR_1->out, VAR_1->temp_buffer, *VAR_2);
    FUNC_3(VAR_1->out);


    return FUNC_4(&VAR_3->pb);
}
