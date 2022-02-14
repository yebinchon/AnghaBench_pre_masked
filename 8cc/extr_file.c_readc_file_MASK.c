
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char last; int file; } ;
typedef TYPE_1__ File ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(File *VAR_1) {
    int VAR_2 = FUNC_0(VAR_1->file);
    if (VAR_2 == VAR_0) {
        VAR_2 = (VAR_1->last == '\n' || VAR_1->last == VAR_0) ? VAR_0 : '\n';
    } else if (VAR_2 == '\r') {
        int VAR_3 = FUNC_0(VAR_1->file);
        if (VAR_3 != '\n')
            FUNC_1(VAR_3, VAR_1->file);
        VAR_2 = '\n';
    }
    VAR_1->last = VAR_2;
    return VAR_2;
}
