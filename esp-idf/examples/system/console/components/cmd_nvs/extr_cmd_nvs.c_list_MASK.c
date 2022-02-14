
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvs_type_t ;
typedef int * nvs_iterator_t ;
struct TYPE_3__ {char* namespace_name; char* key; int type; } ;
typedef TYPE_1__ nvs_entry_info_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
    nvs_type_t VAR_4 = FUNC_5(VAR_3);

    nvs_iterator_t VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_4);
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, "No such enty was found");
        return 1;
    }

    do {
        nvs_entry_info_t VAR_6;
        FUNC_2(VAR_5, &VAR_6);
        VAR_5 = FUNC_3(VAR_5);

        FUNC_4("namespace '%s', key '%s', type '%s' \n",
               VAR_6.namespace_name, VAR_6.key, FUNC_6(VAR_6.type));
    } while (VAR_5 != ((void*)0));

    return 0;
}
