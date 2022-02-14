
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int intno; int cpu; } ;
typedef TYPE_1__ vector_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static vector_desc_t *FUNC_4(int VAR_2, int VAR_3)
{
    vector_desc_t *VAR_4=FUNC_0(VAR_2, VAR_3);
    if (VAR_4==((void*)0)) {
        vector_desc_t *VAR_5=FUNC_1(sizeof(vector_desc_t), VAR_1|VAR_0);
        if (VAR_5==((void*)0)) return ((void*)0);
        FUNC_3(VAR_5, 0, sizeof(vector_desc_t));
        VAR_5->intno=VAR_2;
        VAR_5->cpu=VAR_3;
        FUNC_2(VAR_5);
        return VAR_5;
    } else {
        return VAR_4;
    }
}
