
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int type; int flags; char* help; scalar_t__ unit; } ;
typedef TYPE_1__ AVOption ;
typedef int AVClass ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;







 TYPE_1__* FUNC_0 (int const**,TYPE_1__ const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(const AVClass *VAR_2, const AVOption *VAR_3)
{
    FUNC_1("@item -%s @var{", VAR_3->name);
    switch (VAR_3->type) {
    case 135: FUNC_1("hexadecimal string"); break;
    case 128: FUNC_1("string"); break;
    case 131:
    case 130: FUNC_1("integer"); break;
    case 132:
    case 134: FUNC_1("float"); break;
    case 129: FUNC_1("rational number"); break;
    case 133: FUNC_1("flags"); break;
    default: FUNC_1("value"); break;
    }
    FUNC_1("} (@emph{");

    if (VAR_3->flags & VAR_0) {
        FUNC_1("input");
        if (VAR_3->flags & VAR_0)
            FUNC_1("/");
    }
    if (VAR_3->flags & VAR_0)
        FUNC_1("output");

    FUNC_1("})\n");
    if (VAR_3->help)
        FUNC_1("%s\n", VAR_3->help);

    if (VAR_3->unit) {
        const AVOption *VAR_4 = ((void*)0);
        FUNC_1("\nPossible values:\n@table @samp\n");

        while ((VAR_4 = FUNC_0(&VAR_2, VAR_4)))
            if (VAR_4->type == VAR_1 && VAR_4->unit && !FUNC_2(VAR_4->unit, VAR_3->unit))
                FUNC_1("@item %s\n%s\n", VAR_4->name, VAR_4->help ? VAR_4->help : "");
        FUNC_1("@end table\n");
    }
}
