
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {scalar_t__ device; } ;
struct TYPE_7__ {int top; int left; int bottom; int right; } ;
struct TYPE_6__ {unsigned char* outData; int outW; } ;
typedef TYPE_1__ JpegDev ;
typedef TYPE_2__ JRECT ;
typedef TYPE_3__ JDEC ;


 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (char*,int,int,int,int) ;

__attribute__((used)) static UINT FUNC_2(JDEC *VAR_0, void *VAR_1, JRECT *VAR_2)
{
    unsigned char *VAR_3 = (unsigned char *)VAR_1;
    unsigned char *VAR_4;
    int VAR_5;
    FUNC_1("Rect %d,%d - %d,%d\n", VAR_2->top, VAR_2->left, VAR_2->bottom, VAR_2->right);
    JpegDev *VAR_6 = (JpegDev *)VAR_0->device;
    for (VAR_5 = VAR_2->top; VAR_5 <= VAR_2->bottom; VAR_5++) {
        VAR_4 = VAR_6->outData + ((VAR_6->outW * VAR_5) + VAR_2->left) * 3;
        FUNC_0(VAR_4, VAR_3, ((VAR_2->right - VAR_2->left) + 1) * 3);
        VAR_3 += ((VAR_2->right - VAR_2->left) + 1) * 3;
    }
    return 1;
}
