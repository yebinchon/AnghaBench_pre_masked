
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * name; } ;
typedef TYPE_1__ lumpinfo_t ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;

int FUNC_2 (char* VAR_2)
{
    union {
 char s[9];
 int x[2];

    } VAR_3;

    int VAR_4;
    int VAR_5;
    lumpinfo_t* VAR_6;


    FUNC_0 (VAR_3,VAR_2,8);


    VAR_3[8] = 0;


    FUNC_1 (VAR_3);

    VAR_4 = VAR_3[0];
    VAR_5 = VAR_3[1];



    VAR_6 = VAR_0 + VAR_1;

    while (VAR_6-- != VAR_0)
    {
 if ( *(int *)VAR_6->name == VAR_4
      && *(int *)&VAR_6->name[4] == VAR_5)
 {
     return VAR_6 - VAR_0;
 }
    }


    return -1;
}
