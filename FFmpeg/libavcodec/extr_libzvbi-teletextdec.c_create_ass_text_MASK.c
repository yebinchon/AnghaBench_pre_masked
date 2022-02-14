
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int readorder; } ;
typedef TYPE_1__ TeletextContext ;
struct TYPE_9__ {int str; } ;
typedef TYPE_2__ AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int ,char*,int ) ;
 char* FUNC_4 (int ,int ,int *,int *,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6(TeletextContext *VAR_1, const char *VAR_2)
{
    char *VAR_3;
    AVBPrint VAR_4;

    FUNC_1(&VAR_4, 0, VAR_0);
    FUNC_3(&VAR_4, VAR_2, FUNC_5(VAR_2), "", 0);
    if (!FUNC_2(&VAR_4)) {
        FUNC_0(&VAR_4, ((void*)0));
        return ((void*)0);
    }
    VAR_3 = FUNC_4(VAR_1->readorder++, 0, ((void*)0), ((void*)0), VAR_4.str);
    FUNC_0(&VAR_4, ((void*)0));
    return VAR_3;
}
