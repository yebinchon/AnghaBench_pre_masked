
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int size; TYPE_1__* buffer; int * data; } ;
struct TYPE_8__ {int flags; int size; int * data; } ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 (int *,int,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__**,TYPE_2__**) ;
 int FUNC_7 (int *,int *,int ) ;

int FUNC_8(AVBufferRef **VAR_3, int VAR_4)
{
    AVBufferRef *VAR_5 = *VAR_3;
    uint8_t *VAR_6;

    if (!VAR_5) {


        uint8_t *VAR_7 = FUNC_5(((void*)0), VAR_4);
        if (!VAR_7)
            return FUNC_0(VAR_1);

        VAR_5 = FUNC_2(VAR_7, VAR_4, VAR_2, ((void*)0), 0);
        if (!VAR_5) {
            FUNC_4(&VAR_7);
            return FUNC_0(VAR_1);
        }

        VAR_5->buffer->flags |= VAR_0;
        *VAR_3 = VAR_5;

        return 0;
    } else if (VAR_5->size == VAR_4)
        return 0;

    if (!(VAR_5->buffer->flags & VAR_0) ||
        !FUNC_3(VAR_5) || VAR_5->data != VAR_5->buffer->data) {

        AVBufferRef *VAR_8 = ((void*)0);

        FUNC_8(&VAR_8, VAR_4);
        if (!VAR_8)
            return FUNC_0(VAR_1);

        FUNC_7(VAR_8->data, VAR_5->data, FUNC_1(VAR_4, VAR_5->size));

        FUNC_6(VAR_3, &VAR_8);
        return 0;
    }

    VAR_6 = FUNC_5(VAR_5->buffer->data, VAR_4);
    if (!VAR_6)
        return FUNC_0(VAR_1);

    VAR_5->buffer->data = VAR_5->data = VAR_6;
    VAR_5->buffer->size = VAR_5->size = VAR_4;
    return 0;
}
