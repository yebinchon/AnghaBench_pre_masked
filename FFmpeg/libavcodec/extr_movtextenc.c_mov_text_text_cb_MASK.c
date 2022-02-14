
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int text_pos; int byte_count; int buffer; } ;
typedef TYPE_1__ MovTextContext ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (char const*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2)
{
    uint16_t VAR_3 = FUNC_1(VAR_1, VAR_2);
    MovTextContext *VAR_4 = VAR_0;
    FUNC_0(&VAR_4->buffer, VAR_1, VAR_2);

    VAR_4->text_pos += VAR_3 ? VAR_3 : VAR_2;
    VAR_4->byte_count += VAR_2;
}
