
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {size_t last; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_2__** VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_2(void)
{
    int VAR_6 = VAR_2;


    FUNC_1((VAR_1 - FUNC_0(VAR_4[VAR_5->last]->width))/2,
  VAR_6, VAR_0, VAR_4[VAR_5->last]);


    VAR_6 += (5*FUNC_0(VAR_4[VAR_5->last]->height))/4;

    FUNC_1((VAR_1 - FUNC_0(VAR_3->width))/2,
  VAR_6, VAR_0, VAR_3);
}
