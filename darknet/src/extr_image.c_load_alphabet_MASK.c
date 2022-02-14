
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int image ;


 void* FUNC_0 (int const,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,char*,int,int) ;

image **FUNC_3()
{
    int VAR_0, VAR_1;
    const int VAR_2 = 8;
    image **VAR_3 = FUNC_0(VAR_2, sizeof(image));
    for(VAR_1 = 0; VAR_1 < VAR_2; ++VAR_1){
        VAR_3[VAR_1] = FUNC_0(128, sizeof(image));
        for(VAR_0 = 32; VAR_0 < 127; ++VAR_0){
            char VAR_4[256];
            FUNC_2(VAR_4, "data/labels/%d_%d.png", VAR_0, VAR_1);
            VAR_3[VAR_1][VAR_0] = FUNC_1(VAR_4, 0, 0);
        }
    }
    return VAR_3;
}
