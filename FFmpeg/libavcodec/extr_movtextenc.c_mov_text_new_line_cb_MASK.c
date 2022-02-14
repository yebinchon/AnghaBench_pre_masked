
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text_pos; int byte_count; int buffer; } ;
typedef TYPE_1__ MovTextContext ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
    MovTextContext *VAR_2 = VAR_0;
    FUNC_0(&VAR_2->buffer, "\n", 1);
    VAR_2->text_pos += 1;
    VAR_2->byte_count += 1;
}
