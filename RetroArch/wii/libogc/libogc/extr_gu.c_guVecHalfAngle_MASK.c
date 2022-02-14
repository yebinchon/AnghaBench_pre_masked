
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z; int y; int x; } ;
typedef TYPE_1__ guVector ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 float FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(guVector *VAR_0,guVector *VAR_1,guVector *VAR_2)
{
 guVector VAR_3,VAR_4,VAR_5;

 VAR_3 = -VAR_0->x;
 VAR_3 = -VAR_0->y;
 VAR_3 = -VAR_0->z;

 VAR_4 = -VAR_1->x;
 VAR_4 = -VAR_1->y;
 VAR_4 = -VAR_1->z;

 FUNC_2(&VAR_3);
 FUNC_2(&VAR_4);

 FUNC_0(&VAR_3,&VAR_4,&VAR_5);
 if(FUNC_1(&VAR_5,&VAR_5)>0.0f) FUNC_2(&VAR_5);

 *VAR_2 = VAR_5;
}
