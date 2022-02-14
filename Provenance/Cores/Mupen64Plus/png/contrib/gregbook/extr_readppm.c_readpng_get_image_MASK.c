
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulg ;
typedef int uch ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,long,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

uch *FUNC_4(double VAR_6, int *VAR_7, ulg *VAR_8)
{
    ulg VAR_9;
    *VAR_8 = VAR_9 = VAR_0*VAR_5;
    *VAR_7 = VAR_0;

    if ((VAR_2 = (uch *)FUNC_3(VAR_9*VAR_1)) == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_0((VAR_4, "readpng_get_image:  rowbytes = %ld, height = %ld\n", VAR_9, VAR_1));




    if (FUNC_1(VAR_2, 1L, VAR_9*VAR_1, VAR_3) <
       VAR_9*VAR_1) {
        FUNC_2 (VAR_2);
        VAR_2 = ((void*)0);
        return ((void*)0);
    }

    return VAR_2;
}
