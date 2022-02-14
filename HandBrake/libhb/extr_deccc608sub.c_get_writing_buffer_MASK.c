
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_write {TYPE_1__* data608; } ;
struct eia608_screen {int dummy; } ;
struct TYPE_2__ {int mode; } ;







 struct eia608_screen* FUNC_0 (struct s_write*) ;
 struct eia608_screen* FUNC_1 (struct s_write*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct eia608_screen *FUNC_3(struct s_write *VAR_0)
{
    struct eia608_screen *VAR_1=((void*)0);
    switch (VAR_0->data608->mode)
    {
        case 132:
            VAR_1 = FUNC_0(VAR_0);
            break;
        case 131:
        case 130:
        case 129:
        case 128:
            VAR_1 = FUNC_1(VAR_0);
            break;
        default:
            FUNC_2("Caption mode has an illegal value at get_writing_buffer(), this is a bug.");
    }
    return VAR_1;
}
