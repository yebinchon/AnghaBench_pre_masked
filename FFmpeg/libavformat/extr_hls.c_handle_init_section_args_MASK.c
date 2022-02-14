
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_section_info {char* uri; char* byterange; } ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct init_section_info *VAR_0, const char *VAR_1,
                                           int VAR_2, char **VAR_3, int *VAR_4)
{
    if (!FUNC_0(VAR_1, "URI=", VAR_2)) {
        *VAR_3 = VAR_0->uri;
        *VAR_4 = sizeof(VAR_0->uri);
    } else if (!FUNC_0(VAR_1, "BYTERANGE=", VAR_2)) {
        *VAR_3 = VAR_0->byterange;
        *VAR_4 = sizeof(VAR_0->byterange);
    }
}
