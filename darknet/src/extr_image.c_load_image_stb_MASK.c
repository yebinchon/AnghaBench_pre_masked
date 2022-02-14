
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 TYPE_1__ FUNC_3 (int,int,int) ;
 char* FUNC_4 () ;
 unsigned char* FUNC_5 (char*,int*,int*,int*,int) ;
 int VAR_0 ;

image FUNC_6(char *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;
    unsigned char *VAR_6 = FUNC_5(VAR_1, &VAR_3, &VAR_4, &VAR_5, VAR_2);
    if (!VAR_6) {
        FUNC_1(VAR_0, "Cannot load image \"%s\"\nSTB Reason: %s\n", VAR_1, FUNC_4());
        FUNC_0(0);
    }
    if(VAR_2) VAR_5 = VAR_2;
    int VAR_7,VAR_8,VAR_9;
    image VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5);
    for(VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9){
        for(VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8){
            for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7){
                int VAR_11 = VAR_7 + VAR_3*VAR_8 + VAR_3*VAR_4*VAR_9;
                int VAR_12 = VAR_9 + VAR_5*VAR_7 + VAR_5*VAR_3*VAR_8;
                VAR_10.data[VAR_11] = (float)VAR_6[VAR_12]/255.;
            }
        }
    }
    FUNC_2(VAR_6);
    return VAR_10;
}
