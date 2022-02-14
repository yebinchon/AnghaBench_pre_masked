
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_str ;
struct segment {int size; void* url_offset; int url; } ;
struct playlist {int n_init_sections; int init_sections; } ;
struct init_section_info {char* byterange; int * uri; } ;


 int VAR_0 ;
 int FUNC_0 (struct segment*) ;
 struct segment* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,struct segment*) ;
 int FUNC_4 (char*,int,char const*,int *) ;
 char* FUNC_5 (char*,char) ;
 void* FUNC_6 (char*,int *,int) ;

__attribute__((used)) static struct segment *FUNC_7(struct playlist *VAR_1,
                                        struct init_section_info *VAR_2,
                                        const char *VAR_3)
{
    struct segment *VAR_4;
    char *VAR_5;
    char VAR_6[VAR_0];

    if (!VAR_2->uri[0])
        return ((void*)0);

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);

    FUNC_4(VAR_6, sizeof(VAR_6), VAR_3, VAR_2->uri);
    VAR_4->url = FUNC_2(VAR_6);
    if (!VAR_4->url) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    if (VAR_2->byterange[0]) {
        VAR_4->size = FUNC_6(VAR_2->byterange, ((void*)0), 10);
        VAR_5 = FUNC_5(VAR_2->byterange, '@');
        if (VAR_5)
            VAR_4->url_offset = FUNC_6(VAR_5+1, ((void*)0), 10);
    } else {

        VAR_4->size = -1;
    }

    FUNC_3(&VAR_1->init_sections, &VAR_1->n_init_sections, VAR_4);

    return VAR_4;
}
