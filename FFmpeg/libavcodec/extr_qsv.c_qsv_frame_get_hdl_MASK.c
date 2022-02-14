
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mfxStatus ;
typedef scalar_t__ mfxMemId ;
typedef int mfxHDL ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ QSVMid ;


 int VAR_0 ;

__attribute__((used)) static mfxStatus FUNC_0(mfxHDL VAR_1, mfxMemId VAR_2, mfxHDL *VAR_3)
{
    QSVMid *VAR_4 = (QSVMid*)VAR_2;
    *VAR_3 = VAR_4->handle;
    return VAR_0;
}
