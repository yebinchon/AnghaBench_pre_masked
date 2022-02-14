
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {struct fragment* init_section; } ;
struct fragment {char* url; scalar_t__ url_offset; scalar_t__ size; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct representation **VAR_0, int VAR_1)
{
    struct fragment *VAR_2 = VAR_0[0]->init_section;
    char *VAR_3 =((void*)0);
    int64_t VAR_4 = -1;
    int64_t VAR_5 = -1;
    int VAR_6 = 0;

    if (VAR_2 == ((void*)0) || VAR_1 == 0)
        return 0;

    VAR_3 = VAR_2->url;
    VAR_4 = VAR_2->url_offset;
    VAR_5 = VAR_0[0]->init_section->size;
    for (VAR_6=0;VAR_6<VAR_1;VAR_6++) {
        if (FUNC_0(VAR_0[VAR_6]->init_section->url,VAR_3) || VAR_0[VAR_6]->init_section->url_offset != VAR_4 || VAR_0[VAR_6]->init_section->size != VAR_5) {
            return 0;
        }
    }
    return 1;
}
