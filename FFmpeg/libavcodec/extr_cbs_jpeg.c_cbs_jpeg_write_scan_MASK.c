
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* content; } ;
struct TYPE_4__ {int data_size; int * data; int header; } ;
typedef int PutBitContext ;
typedef TYPE_1__ JPEGRawScan ;
typedef TYPE_2__ CodedBitstreamUnit ;
typedef int CodedBitstreamContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(CodedBitstreamContext *VAR_1,
                               CodedBitstreamUnit *VAR_2,
                               PutBitContext *VAR_3)
{
    JPEGRawScan *VAR_4 = VAR_2->content;
    int VAR_5, VAR_6;

    VAR_6 = FUNC_1(VAR_1, VAR_3, &VAR_4->header);
    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_4->data) {
        if (VAR_4->data_size * 8 > FUNC_3(VAR_3))
            return FUNC_0(VAR_0);

        for (VAR_5 = 0; VAR_5 < VAR_4->data_size; VAR_5++)
            FUNC_2(VAR_3, 8, VAR_4->data[VAR_5]);
    }

    return 0;
}
