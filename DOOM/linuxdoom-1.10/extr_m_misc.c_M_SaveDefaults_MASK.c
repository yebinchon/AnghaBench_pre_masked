
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int defaultvalue; int* location; char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,char*,...) ;
 int VAR_2 ;

void FUNC_3 (void)
{
    int VAR_3;
    int VAR_4;
    FILE* VAR_5;

    VAR_5 = FUNC_1 (VAR_0, "w");
    if (!VAR_5)
 return;

    for (VAR_3=0 ; VAR_3<VAR_2 ; VAR_3++)
    {
 if (VAR_1[VAR_3].defaultvalue > -0xfff
     && VAR_1[VAR_3].defaultvalue < 0xfff)
 {
     VAR_4 = *VAR_1[VAR_3].location;
     FUNC_2 (VAR_5,"%s\t\t%i\n",VAR_1[VAR_3].name,VAR_4);
 } else {
     FUNC_2 (VAR_5,"%s\t\t\"%s\"\n",VAR_1[VAR_3].name,
       * (char **) (VAR_1[VAR_3].location));
 }
    }

    FUNC_0 (VAR_5);
}
