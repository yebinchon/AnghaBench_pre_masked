
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct zsMicVar {scalar_t__ nBytes; int right; int left; } ;


 int FUNC_0 (int,struct zsMicVar*) ;
 int FUNC_1 (struct zsMicVar*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(u8_t* VAR_0, struct zsMicVar* VAR_1)
{

    FUNC_0(0x5a, VAR_1);
    FUNC_0(0, VAR_1);
    FUNC_0(0, VAR_1);
    FUNC_0(0, VAR_1);
    FUNC_0(0, VAR_1);


    while( VAR_1->nBytes != 0 )
    {
        FUNC_0(0, VAR_1);
    }


    FUNC_2(VAR_0, VAR_1->left);
    FUNC_2(VAR_0+4, VAR_1->right);


    FUNC_1(VAR_1);

}
