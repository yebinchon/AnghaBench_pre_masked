
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int SwrContext ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int **,int const,int const**,int const) ;

__attribute__((used)) static int FUNC_3(const uint8_t **VAR_1,
                           uint8_t **VAR_2, const int VAR_3,
                           SwrContext *VAR_4)
{
    int VAR_5;


    if ((VAR_5 = FUNC_2(VAR_4,
                             VAR_2, VAR_3,
                             VAR_1 , VAR_3)) < 0) {
        FUNC_1(VAR_0, "Could not convert input samples (error '%s')\n",
                FUNC_0(VAR_5));
        return VAR_5;
    }

    return 0;
}
