
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    int VAR_2;
    if ((VAR_2 = FUNC_1(VAR_1, ((void*)0))) < 0) {
        FUNC_2(VAR_0, "Could not write output file header (error '%s')\n",
                FUNC_0(VAR_2));
        return VAR_2;
    }
    return 0;
}
