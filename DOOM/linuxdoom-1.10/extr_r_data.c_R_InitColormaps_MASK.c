
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int * FUNC_3 (int,int ,int ) ;
 int * VAR_1 ;

void FUNC_4 (void)
{
    int VAR_2, VAR_3;



    VAR_2 = FUNC_0("COLORMAP");
    VAR_3 = FUNC_1 (VAR_2) + 255;
    VAR_1 = FUNC_3 (VAR_3, VAR_0, 0);
    VAR_1 = (byte *)( ((int)VAR_1 + 255)&~0xff);
    FUNC_2 (VAR_2,VAR_1);
}
