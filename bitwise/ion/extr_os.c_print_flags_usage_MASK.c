
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int note ;
typedef int format ;
struct TYPE_5__ {char** s; int* i; } ;
struct TYPE_6__ {int kind; char* name; char* arg_name; int num_options; char** options; char* help; TYPE_1__ ptr; } ;
typedef TYPE_2__ FlagDef ;





 size_t FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,char*,...) ;

void FUNC_3(void) {
    FUNC_1("Flags:\n");
    for (size_t VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
        FlagDef VAR_2 = VAR_0[VAR_1];
        char VAR_3[256] = {0};
        char VAR_4[256];
        switch (VAR_2.kind) {
        case 128:
            FUNC_2(VAR_4, sizeof(VAR_4), "%s <%s>", VAR_2.name, VAR_2.arg_name ? VAR_2.arg_name : "value");
            if (*VAR_2.ptr.s) {
                FUNC_2(VAR_3, sizeof(VAR_3), "(default: %s)", *VAR_2.ptr.s);
            }
            break;
        case 129: {
            char *VAR_5 = VAR_4 + sizeof(VAR_4);
            char *VAR_6 = VAR_4;
            VAR_6 += FUNC_2(VAR_6, VAR_5 - VAR_6, "%s <", VAR_2.name);
            for (int VAR_7 = 0; VAR_7 < VAR_2.num_options; VAR_7++) {
                VAR_6 += FUNC_2(VAR_6, VAR_5 - VAR_6, "%s%s", VAR_7 == 0 ? "" : "|", VAR_2.options[VAR_7]);
                if (VAR_7 == *VAR_2.ptr.i) {
                    FUNC_2(VAR_3, sizeof(VAR_3), " (default: %s)", VAR_2.options[VAR_7]);
                }
            }
            FUNC_2(VAR_6, VAR_5 - VAR_6, ">");
            break;
        }
        case 130:
        default:
            FUNC_2(VAR_4, sizeof(VAR_4), "%s", VAR_2.name);
            break;
        }
        FUNC_1(" -%-32s %s%s\n", VAR_4, VAR_2.help ? VAR_2.help : "", VAR_3);
    }
}
