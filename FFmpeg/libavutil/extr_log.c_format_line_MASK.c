
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int va_list ;
typedef int uint8_t ;
struct TYPE_9__ {char* str; int len; int size; } ;
struct TYPE_8__ {int parent_log_context_offset; int (* item_name ) (void*) ;} ;
typedef TYPE_1__ AVClass ;
typedef TYPE_2__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,char*,int ,...) ;
 int FUNC_2 (TYPE_2__*,char const*,int ) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void FUNC_7(void *VAR_5, int VAR_6, const char *VAR_7, va_list VAR_8,
                        AVBPrint VAR_9[4], int *VAR_10, int VAR_11[2])
{
    AVClass* VAR_12 = VAR_5 ? *(AVClass **) VAR_5 : ((void*)0);
    FUNC_0(VAR_9+0, 0, VAR_0);
    FUNC_0(VAR_9+1, 0, VAR_0);
    FUNC_0(VAR_9+2, 0, VAR_0);
    FUNC_0(VAR_9+3, 0, 65536);

    if(VAR_11) VAR_11[0] = VAR_11[1] = VAR_1 + 16;
    if (*VAR_10 && VAR_12) {
        if (VAR_12->parent_log_context_offset) {
            AVClass** VAR_13 = *(AVClass ***) (((uint8_t *) VAR_5) +
                                   VAR_12->parent_log_context_offset);
            if (VAR_13 && *VAR_13) {
                FUNC_1(VAR_9+0, "[%s @ %p] ",
                         (*VAR_13)->item_name(VAR_13), VAR_13);
                if(VAR_11) VAR_11[0] = FUNC_3(VAR_13);
            }
        }
        FUNC_1(VAR_9+1, "[%s @ %p] ",
                 VAR_12->item_name(VAR_5), VAR_5);
        if(VAR_11) VAR_11[1] = FUNC_3(VAR_5);
    }

    if (*VAR_10 && (VAR_6 > VAR_3) && (VAR_4 & VAR_2))
        FUNC_1(VAR_9+2, "[%s] ", FUNC_4(VAR_6));

    FUNC_2(VAR_9+3, VAR_7, VAR_8);

    if(*VAR_9[0].str || *VAR_9[1].str || *VAR_9[2].str || *VAR_9[3].str) {
        char VAR_14 = VAR_9[3].len && VAR_9[3].len <= VAR_9[3].size ? VAR_9[3].str[VAR_9[3].len - 1] : 0;
        *VAR_10 = VAR_14 == '\n' || VAR_14 == '\r';
    }
}
