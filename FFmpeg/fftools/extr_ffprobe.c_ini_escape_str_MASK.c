
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* str; } ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (TYPE_1__*,char,int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;

__attribute__((used)) static char *FUNC_2(AVBPrint *VAR_0, const char *VAR_1)
{
    int VAR_2 = 0;
    char VAR_3 = 0;

    while ((VAR_3 = VAR_1[VAR_2++])) {
        switch (VAR_3) {
        case '\b': FUNC_1(VAR_0, "%s", "\\b"); break;
        case '\f': FUNC_1(VAR_0, "%s", "\\f"); break;
        case '\n': FUNC_1(VAR_0, "%s", "\\n"); break;
        case '\r': FUNC_1(VAR_0, "%s", "\\r"); break;
        case '\t': FUNC_1(VAR_0, "%s", "\\t"); break;
        case '\\':
        case '#' :
        case '=' :
        case ':' : FUNC_0(VAR_0, '\\', 1);
        default:
            if ((unsigned char)VAR_3 < 32)
                FUNC_1(VAR_0, "\\x00%02x", VAR_3 & 0xff);
            else
                FUNC_0(VAR_0, VAR_3, 1);
            break;
        }
    }
    return VAR_0->str;
}
