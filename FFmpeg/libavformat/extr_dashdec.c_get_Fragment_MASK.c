
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fragment {int size; void* url_offset; } ;


 struct fragment* FUNC_0 (int) ;
 char* FUNC_1 (char*,char*,char**) ;
 void* FUNC_2 (char*,int *,int) ;

__attribute__((used)) static struct fragment * FUNC_3(char *VAR_0)
{
    struct fragment * VAR_1 = FUNC_0(sizeof(struct fragment));

    if (!VAR_1)
        return ((void*)0);

    VAR_1->size = -1;
    if (VAR_0) {
        char *VAR_2;
        char *VAR_3 = FUNC_1(VAR_0, "-", &VAR_2);
        VAR_1->url_offset = FUNC_2(VAR_3, ((void*)0), 10);
        VAR_1->size = FUNC_2(VAR_2, ((void*)0), 10) - VAR_1->url_offset;
    }

    return VAR_1;
}
