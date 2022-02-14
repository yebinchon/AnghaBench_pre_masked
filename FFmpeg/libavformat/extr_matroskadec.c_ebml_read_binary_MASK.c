
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int * data; } ;
struct TYPE_5__ {int size; int * data; TYPE_3__* buf; int pos; } ;
typedef TYPE_1__ EbmlBin ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__**,scalar_t__) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_2, int VAR_3,
                            int64_t VAR_4, EbmlBin *VAR_5)
{
    int VAR_6;

    VAR_6 = FUNC_0(&VAR_5->buf, VAR_3 + VAR_0);
    if (VAR_6 < 0)
        return VAR_6;
    FUNC_3(VAR_5->buf->data + VAR_3, 0, VAR_0);

    VAR_5->data = VAR_5->buf->data;
    VAR_5->size = VAR_3;
    VAR_5->pos = VAR_4;
    if ((VAR_6 = FUNC_2(VAR_2, VAR_5->data, VAR_3)) != VAR_3) {
        FUNC_1(&VAR_5->buf);
        VAR_5->data = ((void*)0);
        VAR_5->size = 0;
        return VAR_6 < 0 ? VAR_6 : VAR_1;
    }

    return 0;
}
