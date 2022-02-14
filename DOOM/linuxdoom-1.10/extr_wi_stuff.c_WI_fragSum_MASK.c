
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* frags; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(int VAR_3)
{
    int VAR_4;
    int VAR_5 = 0;

    for (VAR_4=0 ; VAR_4<VAR_0 ; VAR_4++)
    {
 if (VAR_1[VAR_4]
     && VAR_4!=VAR_3)
 {
     VAR_5 += VAR_2[VAR_3].frags[VAR_4];
 }
    }



    VAR_5 -= VAR_2[VAR_3].frags[VAR_3];



    return VAR_5;
}
