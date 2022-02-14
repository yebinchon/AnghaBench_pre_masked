
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct zsMicVar {int m; int nBytes; int left; int right; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(u8_t VAR_0, struct zsMicVar* VAR_1)
{

    VAR_1->m |= VAR_0 << (8* VAR_1->nBytes);
    VAR_1->nBytes++;


    if ( VAR_1->nBytes >= 4 )
    {
        VAR_1->left ^= VAR_1->m;
        VAR_1->right ^= FUNC_0(VAR_1->left, 17 );
        VAR_1->left += VAR_1->right;
        VAR_1->right ^= ((VAR_1->left & 0xff00ff00) >> 8) |
                       ((VAR_1->left & 0x00ff00ff) << 8);
        VAR_1->left += VAR_1->right;
        VAR_1->right ^= FUNC_0( VAR_1->left, 3 );
        VAR_1->left += VAR_1->right;
        VAR_1->right ^= FUNC_1( VAR_1->left, 2 );
        VAR_1->left += VAR_1->right;

        VAR_1->m = 0;
        VAR_1->nBytes = 0;
    }
}
