
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int pos; int * buf_end; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (TYPE_1__*,int *,int,int ,int *,int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(AVIOContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    FUNC_0(VAR_1, VAR_2, VAR_3, 0, ((void*)0), VAR_0, ((void*)0), ((void*)0));


    VAR_1->pos = VAR_3;
    VAR_1->buf_end = VAR_2 + VAR_3;
}
