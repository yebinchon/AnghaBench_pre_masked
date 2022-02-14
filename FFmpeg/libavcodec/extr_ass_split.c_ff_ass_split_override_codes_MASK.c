
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* end ) (void*) ;int (* text ) (void*,char const*,int) ;int (* origin ) (void*,int,int) ;int (* move ) (void*,int,int,int,int,int,int) ;int (* cancel_overrides ) (void*,char*) ;int (* alignment ) (void*,int) ;int (* font_size ) (void*,int) ;int (* font_name ) (void*,char*) ;int (* alpha ) (void*,int,char) ;int (* color ) (void*,unsigned int,char) ;int (* style ) (void*,char,int) ;int (* new_line ) (void*,int) ;} ;
typedef TYPE_1__ ASSCodesCallbacks ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,...) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (void*,char const*,int) ;
 int FUNC_4 (void*,int,int,int,int,int,int) ;
 int FUNC_5 (void*,int,int,int,int,int,int) ;
 int FUNC_6 (void*,int,int) ;
 int FUNC_7 (void*,char const*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,char,int) ;
 int FUNC_11 (void*,unsigned int,char) ;
 int FUNC_12 (void*,int,char) ;
 int FUNC_13 (void*,char*) ;
 int FUNC_14 (void*,int) ;
 int FUNC_15 (void*,int) ;
 int FUNC_16 (void*,char*) ;

int FUNC_17(const ASSCodesCallbacks *VAR_1, void *VAR_2,
                                const char *VAR_3)
{
    const char *VAR_4 = ((void*)0);
    char VAR_5[2];
    int VAR_6 = 0;

    while (VAR_3 && *VAR_3) {
        if (VAR_4 && VAR_1->text &&
            (FUNC_0(VAR_3, "\\%1[nN]", VAR_5) == 1 ||
             !FUNC_2(VAR_3, "{\\", 2))) {
            VAR_1->text(VAR_2, VAR_4, VAR_6);
            VAR_4 = ((void*)0);
        }
        if (FUNC_0(VAR_3, "\\%1[nN]", VAR_5) == 1) {
            if (VAR_1->new_line)
                VAR_1->new_line(VAR_2, VAR_5[0] == 'N');
            VAR_3 += 2;
        } else if (!FUNC_2(VAR_3, "{\\", 2)) {
            VAR_3++;
            while (*VAR_3 == '\\') {
                char VAR_7[2], VAR_8[2], VAR_9[2], VAR_10[2] = "0", VAR_11[128] = {0};
                unsigned int VAR_12 = 0xFFFFFFFF;
                int VAR_13, VAR_14 = -1, VAR_15 = -1, VAR_16 = -1;
                int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 = -1, VAR_22 = -1;
                if (FUNC_0(VAR_3, "\\%1[bisu]%1[01\\}]%n", VAR_7, VAR_8, &VAR_13) > 1) {
                    int VAR_23 = VAR_8[0] == '0' ? 1 : VAR_8[0] == '1' ? 0 : -1;
                    VAR_13 += VAR_23 != -1;
                    if (VAR_1->style)
                        VAR_1->style(VAR_2, VAR_7[0], VAR_23);
                } else if (FUNC_0(VAR_3, "\\c%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\c&H%X&%1[\\}]%n", &VAR_12, VAR_9, &VAR_13) > 1 ||
                           FUNC_0(VAR_3, "\\%1[1234]c%1[\\}]%n", VAR_10, VAR_9, &VAR_13) > 1 ||
                           FUNC_0(VAR_3, "\\%1[1234]c&H%X&%1[\\}]%n", VAR_10, &VAR_12, VAR_9, &VAR_13) > 2) {
                    if (VAR_1->color)
                        VAR_1->color(VAR_2, VAR_12, VAR_10[0] - '0');
                } else if (FUNC_0(VAR_3, "\\alpha%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\alpha&H%2X&%1[\\}]%n", &VAR_16, VAR_9, &VAR_13) > 1 ||
                           FUNC_0(VAR_3, "\\%1[1234]a%1[\\}]%n", VAR_10, VAR_9, &VAR_13) > 1 ||
                           FUNC_0(VAR_3, "\\%1[1234]a&H%2X&%1[\\}]%n", VAR_10, &VAR_16, VAR_9, &VAR_13) > 2) {
                    if (VAR_1->alpha)
                        VAR_1->alpha(VAR_2, VAR_16, VAR_10[0] - '0');
                } else if (FUNC_0(VAR_3, "\\fn%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\fn%127[^\\}]%1[\\}]%n", VAR_11, VAR_9, &VAR_13) > 1) {
                    if (VAR_1->font_name)
                        VAR_1->font_name(VAR_2, VAR_11[0] ? VAR_11 : ((void*)0));
                } else if (FUNC_0(VAR_3, "\\fs%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\fs%u%1[\\}]%n", &VAR_14, VAR_9, &VAR_13) > 1) {
                    if (VAR_1->font_size)
                        VAR_1->font_size(VAR_2, VAR_14);
                } else if (FUNC_0(VAR_3, "\\a%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\a%2u%1[\\}]%n", &VAR_15, VAR_9, &VAR_13) > 1 ||
                           FUNC_0(VAR_3, "\\an%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\an%1u%1[\\}]%n", &VAR_15, VAR_9, &VAR_13) > 1) {
                    if (VAR_15 != -1 && VAR_3[2] != 'n')
                        VAR_15 = (VAR_15&3) + (VAR_15&4 ? 6 : VAR_15&8 ? 3 : 0);
                    if (VAR_1->alignment)
                        VAR_1->alignment(VAR_2, VAR_15);
                } else if (FUNC_0(VAR_3, "\\r%1[\\}]%n", VAR_9, &VAR_13) > 0 ||
                           FUNC_0(VAR_3, "\\r%127[^\\}]%1[\\}]%n", VAR_11, VAR_9, &VAR_13) > 1) {
                    if (VAR_1->cancel_overrides)
                        VAR_1->cancel_overrides(VAR_2, VAR_11);
                } else if (FUNC_0(VAR_3, "\\move(%d,%d,%d,%d)%1[\\}]%n", &VAR_17, &VAR_18, &VAR_19, &VAR_20, VAR_9, &VAR_13) > 4 ||
                           FUNC_0(VAR_3, "\\move(%d,%d,%d,%d,%d,%d)%1[\\}]%n", &VAR_17, &VAR_18, &VAR_19, &VAR_20, &VAR_21, &VAR_22, VAR_9, &VAR_13) > 6) {
                    if (VAR_1->move)
                        VAR_1->move(VAR_2, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
                } else if (FUNC_0(VAR_3, "\\pos(%d,%d)%1[\\}]%n", &VAR_17, &VAR_18, VAR_9, &VAR_13) > 2) {
                    if (VAR_1->move)
                        VAR_1->move(VAR_2, VAR_17, VAR_18, VAR_17, VAR_18, -1, -1);
                } else if (FUNC_0(VAR_3, "\\org(%d,%d)%1[\\}]%n", &VAR_17, &VAR_18, VAR_9, &VAR_13) > 2) {
                    if (VAR_1->origin)
                        VAR_1->origin(VAR_2, VAR_17, VAR_18);
                } else {
                    VAR_13 = FUNC_1(VAR_3+1, "\\}") + 2;
                }
                VAR_3 += VAR_13 - 1;
            }
            if (*VAR_3++ != '}')
                return VAR_0;
        } else {
            if (!VAR_4) {
                VAR_4 = VAR_3;
                VAR_6 = 1;
            } else
                VAR_6++;
            VAR_3++;
        }
    }
    if (VAR_4 && VAR_1->text)
        VAR_1->text(VAR_2, VAR_4, VAR_6);
    if (VAR_1->end)
        VAR_1->end(VAR_2);
    return 0;
}
