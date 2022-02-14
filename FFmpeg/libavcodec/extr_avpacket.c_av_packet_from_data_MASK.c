
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int size; int * data; int buf; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int ,int *,int ) ;
 int VAR_4 ;

int FUNC_2(AVPacket *VAR_5, uint8_t *VAR_6, int VAR_7)
{
    if (VAR_7 >= VAR_3 - VAR_0)
        return FUNC_0(VAR_1);

    VAR_5->buf = FUNC_1(VAR_6, VAR_7 + VAR_0,
                                VAR_4, ((void*)0), 0);
    if (!VAR_5->buf)
        return FUNC_0(VAR_2);

    VAR_5->data = VAR_6;
    VAR_5->size = VAR_7;

    return 0;
}
