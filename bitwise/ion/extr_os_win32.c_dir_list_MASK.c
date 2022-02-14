
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct _finddata_t {int dummy; } ;
struct TYPE_7__ {char* base; void* handle; } ;
typedef TYPE_1__ DirListIter ;


 int VAR_0 ;
 intptr_t FUNC_0 (char*,struct _finddata_t*) ;
 int FUNC_1 (TYPE_1__*,int,struct _finddata_t*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,char*) ;

void FUNC_7(DirListIter *VAR_1, const char *VAR_2) {
    FUNC_4(VAR_1, 0, sizeof(*VAR_1));
    FUNC_5(VAR_1->base, VAR_2);
    char VAR_3[VAR_0];
    FUNC_5(VAR_3, VAR_2);
    FUNC_6(VAR_3, "*");
    struct _finddata_t VAR_4;
    intptr_t VAR_5 = FUNC_0(VAR_3, &VAR_4);
    VAR_1->handle = (void *)VAR_5;
    FUNC_1(VAR_1, VAR_5 == -1, &VAR_4);
    if (FUNC_2(VAR_1)) {
        FUNC_3(VAR_1);
    }
}
