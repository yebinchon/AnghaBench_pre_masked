
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cookie; void* rend; void* rpos; } ;
typedef TYPE_1__ FFFILE ;


 char* FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (unsigned char*,char*,size_t) ;

__attribute__((used)) static size_t FUNC_2(FFFILE *VAR_0, unsigned char *VAR_1, size_t VAR_2)
{
    char *VAR_3 = VAR_0->cookie;
    size_t VAR_4 = VAR_2+256;
    char *VAR_5 = FUNC_0(VAR_3, 0, VAR_4);

    if (VAR_5) VAR_4 = VAR_5-VAR_3;
    if (VAR_4 < VAR_2) VAR_2 = VAR_4;
    FUNC_1(VAR_1, VAR_3, VAR_2);
    VAR_0->rpos = (void *)(VAR_3+VAR_2);
    VAR_0->rend = (void *)(VAR_3+VAR_4);
    VAR_0->cookie = VAR_3+VAR_4;

    return VAR_2;
}
