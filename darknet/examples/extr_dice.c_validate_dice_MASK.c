
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_10__ {int size; } ;
typedef TYPE_2__ list ;
typedef int data ;


 char** VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char**,int,int ,char**,int,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 float* FUNC_6 (TYPE_1__,int ,int) ;
 TYPE_1__ FUNC_7 (char*) ;
 int FUNC_8 (char*,float,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(char *VAR_1, char *VAR_2)
{
    network VAR_3 = FUNC_7(VAR_1);
    if(VAR_2){
        FUNC_5(&VAR_3, VAR_2);
    }
    FUNC_9(FUNC_10(0));

    char **VAR_4 = VAR_0;
    list *VAR_5 = FUNC_2("data/dice/dice.val.list");

    char **VAR_6 = (char **)FUNC_3(VAR_5);
    int VAR_7 = VAR_5->size;
    FUNC_1(VAR_5);

    data VAR_8 = FUNC_4(VAR_6, VAR_7, 0, VAR_4, 6, VAR_3.w, VAR_3.h);
    float *VAR_9 = FUNC_6(VAR_3, VAR_8, 2);
    FUNC_8("Validation Accuracy: %f, %d images\n", VAR_9[0], VAR_7);
    FUNC_0(VAR_8);
}
