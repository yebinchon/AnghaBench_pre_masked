
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {scalar_t__ maxsize; } ;
struct TYPE_10__ {int size; int pos; int flags; scalar_t__ data; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_2, AVPacket *VAR_3, int VAR_4)
{
    int64_t VAR_5 = VAR_3->pos;
    int VAR_6 = VAR_3->size;
    int VAR_7;

    do {
        int VAR_8 = VAR_3->size;
        int VAR_9;



        VAR_9 = VAR_4;
        if (VAR_9 > VAR_1/10) {
            VAR_9 = FUNC_6(VAR_2, VAR_9);

            if (VAR_2->maxsize < 0)
                VAR_9 = FUNC_1(VAR_9, VAR_1);
        }

        VAR_7 = FUNC_2(VAR_3, VAR_9);
        if (VAR_7 < 0)
            break;

        VAR_7 = FUNC_5(VAR_2, VAR_3->data + VAR_8, VAR_9);
        if (VAR_7 != VAR_9) {
            FUNC_4(VAR_3, VAR_8 + FUNC_0(VAR_7, 0));
            break;
        }

        VAR_4 -= VAR_9;
    } while (VAR_4 > 0);
    if (VAR_4 > 0)
        VAR_3->flags |= VAR_0;

    VAR_3->pos = VAR_5;
    if (!VAR_3->size)
        FUNC_3(VAR_3);
    return VAR_3->size > VAR_6 ? VAR_3->size - VAR_6 : VAR_7;
}
