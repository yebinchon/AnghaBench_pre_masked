
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ buf_ptr_max; scalar_t__ buf_ptr; scalar_t__ write_flag; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(AVIOContext *VAR_1)
{
    int VAR_2 = VAR_1->write_flag ? FUNC_0(0, VAR_1->buf_ptr - VAR_1->buf_ptr_max) : 0;
    FUNC_2(VAR_1);
    if (VAR_2)
        FUNC_1(VAR_1, VAR_2, VAR_0);
}
