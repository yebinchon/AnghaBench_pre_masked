
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* p; char last; } ;
typedef TYPE_1__ File ;


 char VAR_0 ;

__attribute__((used)) static int FUNC_0(File *VAR_1) {
    int VAR_2;
    if (*VAR_1->p == '\0') {
        VAR_2 = (VAR_1->last == '\n' || VAR_1->last == VAR_0) ? VAR_0 : '\n';
    } else if (*VAR_1->p == '\r') {
        VAR_1->p++;
        if (*VAR_1->p == '\n')
            VAR_1->p++;
        VAR_2 = '\n';
    } else {
        VAR_2 = *VAR_1->p++;
    }
    VAR_1->last = VAR_2;
    return VAR_2;
}
