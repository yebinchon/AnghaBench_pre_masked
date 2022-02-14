
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int range; int low; int pb; } ;
typedef TYPE_1__ CABACContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(CABACContext *VAR_0, int VAR_1){
    VAR_0->range -= 2;

    if(!VAR_1){
        FUNC_5(VAR_0);
    }else{
        VAR_0->low += VAR_0->range;
        VAR_0->range= 2;

        FUNC_5(VAR_0);

        FUNC_0(VAR_0->low <= 0x1FF);
        FUNC_4(VAR_0, VAR_0->low>>9);
        FUNC_2(&VAR_0->pb, 2, ((VAR_0->low>>7)&3)|1);

        FUNC_1(&VAR_0->pb);
    }

    return (FUNC_3(&VAR_0->pb)+7)>>3;
}
