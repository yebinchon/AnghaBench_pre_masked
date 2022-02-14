
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFilterGraph ;
typedef int AVClass ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(AVFilterGraph *VAR_2, AVClass *VAR_3)
{
    int VAR_4;


    while ((VAR_4 = FUNC_3(VAR_2, VAR_3)) == FUNC_0(VAR_1))
        FUNC_1(VAR_2, VAR_0, "query_formats not finished\n");
    if (VAR_4 < 0)
        return VAR_4;




    if ((VAR_4 = FUNC_4(VAR_2)) < 0)
        return VAR_4;



    FUNC_6(VAR_2);
    FUNC_7(VAR_2);
    FUNC_5(VAR_2);

    if ((VAR_4 = FUNC_2(VAR_2)) < 0)
        return VAR_4;

    return 0;
}
