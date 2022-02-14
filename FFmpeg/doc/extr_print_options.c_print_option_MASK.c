
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; char* name; int type; char* help; scalar_t__ unit; } ;
typedef TYPE_1__ AVOption ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;







 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const AVOption *VAR_6, const AVOption *VAR_7, int VAR_8)
{
    if (!(VAR_7->flags & (VAR_1 | VAR_2)))
        return;

    FUNC_0("@item -%s%s @var{", VAR_7->name, VAR_8 ? "[:stream_specifier]" : "");
    switch (VAR_7->type) {
    case 135: FUNC_0("hexadecimal string"); break;
    case 128: FUNC_0("string"); break;
    case 131:
    case 130: FUNC_0("integer"); break;
    case 132:
    case 134: FUNC_0("float"); break;
    case 129: FUNC_0("rational number"); break;
    case 133: FUNC_0("flags"); break;
    default: FUNC_0("value"); break;
    }
    FUNC_0("} (@emph{");

    if (VAR_7->flags & VAR_1) {
        FUNC_0("input");
        if (VAR_7->flags & VAR_2)
            FUNC_0("/");
    }
    if (VAR_7->flags & VAR_2) FUNC_0("output");
    if (VAR_7->flags & VAR_0) FUNC_0(",audio");
    if (VAR_7->flags & VAR_4) FUNC_0(",video");
    if (VAR_7->flags & VAR_3) FUNC_0(",subtitles");

    FUNC_0("})\n");
    if (VAR_7->help)
        FUNC_0("%s\n", VAR_7->help);

    if (VAR_7->unit) {
        const AVOption *VAR_9;
        FUNC_0("\nPossible values:\n@table @samp\n");

        for (VAR_9 = VAR_6; VAR_9->name; VAR_9++) {
            if (VAR_9->type == VAR_5 && VAR_9->unit && !FUNC_1(VAR_9->unit, VAR_7->unit))
                FUNC_0("@item %s\n%s\n", VAR_9->name, VAR_9->help ? VAR_9->help : "");
        }
        FUNC_0("@end table\n");
    }
}
