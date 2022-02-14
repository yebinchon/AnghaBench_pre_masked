
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {void* buf; void* cookie; int read; } ;
typedef TYPE_1__ FFFILE ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, const char *VAR_2, va_list VAR_3)
{
    FFFILE VAR_4 = {
        .buf = (void *)VAR_1, .cookie = (void *)VAR_1,
        .read = VAR_0,
    };

    return FUNC_0(&VAR_4, VAR_2, VAR_3);
}
