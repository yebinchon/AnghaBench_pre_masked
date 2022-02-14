
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rendition_info {char* type; char* uri; char* group_id; char* language; char* assoc_language; char* name; char* defaultr; char* forced; char* characteristics; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct rendition_info *VAR_0, const char *VAR_1,
                                  int VAR_2, char **VAR_3, int *VAR_4)
{
    if (!FUNC_0(VAR_1, "TYPE=", VAR_2)) {
        *VAR_3 = VAR_0->type;
        *VAR_4 = sizeof(VAR_0->type);
    } else if (!FUNC_0(VAR_1, "URI=", VAR_2)) {
        *VAR_3 = VAR_0->uri;
        *VAR_4 = sizeof(VAR_0->uri);
    } else if (!FUNC_0(VAR_1, "GROUP-ID=", VAR_2)) {
        *VAR_3 = VAR_0->group_id;
        *VAR_4 = sizeof(VAR_0->group_id);
    } else if (!FUNC_0(VAR_1, "LANGUAGE=", VAR_2)) {
        *VAR_3 = VAR_0->language;
        *VAR_4 = sizeof(VAR_0->language);
    } else if (!FUNC_0(VAR_1, "ASSOC-LANGUAGE=", VAR_2)) {
        *VAR_3 = VAR_0->assoc_language;
        *VAR_4 = sizeof(VAR_0->assoc_language);
    } else if (!FUNC_0(VAR_1, "NAME=", VAR_2)) {
        *VAR_3 = VAR_0->name;
        *VAR_4 = sizeof(VAR_0->name);
    } else if (!FUNC_0(VAR_1, "DEFAULT=", VAR_2)) {
        *VAR_3 = VAR_0->defaultr;
        *VAR_4 = sizeof(VAR_0->defaultr);
    } else if (!FUNC_0(VAR_1, "FORCED=", VAR_2)) {
        *VAR_3 = VAR_0->forced;
        *VAR_4 = sizeof(VAR_0->forced);
    } else if (!FUNC_0(VAR_1, "CHARACTERISTICS=", VAR_2)) {
        *VAR_3 = VAR_0->characteristics;
        *VAR_4 = sizeof(VAR_0->characteristics);
    }





}
