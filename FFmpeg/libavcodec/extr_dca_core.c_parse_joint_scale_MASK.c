
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avctx; int gb; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (int *,int *,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int FUNC_4(DCACoreDecoder *VAR_4, int VAR_5)
{
    int VAR_6;


    if (VAR_5 < 5)
        VAR_6 = FUNC_2(&VAR_4->gb, &VAR_3, VAR_5);
    else
        VAR_6 = FUNC_3(&VAR_4->gb, VAR_5 + 1);


    VAR_6 += 64;


    if ((unsigned int)VAR_6 >= FUNC_0(VAR_2)) {
        FUNC_1(VAR_4->avctx, VAR_1, "Invalid joint scale factor index\n");
        return VAR_0;
    }

    return VAR_2[VAR_6];
}
