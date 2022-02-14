
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int idx_str ;
struct TYPE_2__ {void** streamid_map; int nb_streamid_map; } ;
typedef TYPE_1__ OptionsContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,char const*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int) ;
 void** FUNC_3 (void**,int,int *,int) ;
 void* FUNC_4 (char const*,char*,int ,int ,scalar_t__) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int FUNC_6(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    OptionsContext *VAR_7 = VAR_4;
    int VAR_8;
    char *VAR_9;
    char VAR_10[16];

    FUNC_1(VAR_10, VAR_6, sizeof(VAR_10));
    VAR_9 = FUNC_5(VAR_10, ':');
    if (!VAR_9) {
        FUNC_0(((void*)0), VAR_0,
               "Invalid value '%s' for option '%s', required syntax is 'index:value'\n",
               VAR_6, VAR_5);
        FUNC_2(1);
    }
    *VAR_9++ = '\0';
    VAR_8 = FUNC_4(VAR_5, VAR_10, VAR_3, 0, VAR_2-1);
    VAR_7->streamid_map = FUNC_3(VAR_7->streamid_map, sizeof(*VAR_7->streamid_map), &VAR_7->nb_streamid_map, VAR_8+1);
    VAR_7->streamid_map[VAR_8] = FUNC_4(VAR_5, VAR_9, VAR_3, 0, VAR_1);
    return 0;
}
