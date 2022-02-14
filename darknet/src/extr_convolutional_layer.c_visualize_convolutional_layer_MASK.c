
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int image ;
struct TYPE_5__ {int n; } ;
typedef TYPE_1__ convolutional_layer ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__) ;
 int * FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (char*,char*,char*) ;

image *FUNC_6(convolutional_layer VAR_0, char *VAR_1, image *VAR_2)
{
    image *VAR_3 = FUNC_3(VAR_0);
    FUNC_4(VAR_3, VAR_0.n, VAR_1);

    image VAR_4 = FUNC_2(VAR_0);
    image VAR_5 = FUNC_0(VAR_4, 1);
    char VAR_6[256];
    FUNC_5(VAR_6, "%s: Output", VAR_1);


    FUNC_1(VAR_5);
    return VAR_3;
}
