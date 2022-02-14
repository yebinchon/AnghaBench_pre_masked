
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {scalar_t__ device; } ;
struct TYPE_4__ {int inPos; int inData; } ;
typedef TYPE_1__ JpegDev ;
typedef TYPE_2__ JDEC ;
typedef int BYTE ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static UINT FUNC_2(JDEC *VAR_0, BYTE *VAR_1, UINT VAR_2)
{
    JpegDev *VAR_3 = (JpegDev *)VAR_0->device;
    FUNC_1("Reading %d bytes from pos %d\n", VAR_2, VAR_3->inPos);
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1, VAR_3->inData + VAR_3->inPos, VAR_2);
    }
    VAR_3->inPos += VAR_2;
    return VAR_2;
}
