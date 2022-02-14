
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {int dummy; } ;
struct TYPE_2__ {int visible_buffer; struct eia608_screen buffer2; struct eia608_screen buffer1; } ;



__attribute__((used)) static struct eia608_screen *FUNC_0(struct s_write *VAR_0)
{
    struct eia608_screen *VAR_1;
    if (VAR_0->data608->visible_buffer == 1)
        VAR_1 = &VAR_0->data608->buffer1;
    else
        VAR_1 = &VAR_0->data608->buffer2;
    return VAR_1;
}
