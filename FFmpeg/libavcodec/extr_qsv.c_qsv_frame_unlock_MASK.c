
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mfxStatus ;
typedef TYPE_1__* mfxMemId ;
typedef int mfxHDL ;
typedef int mfxFrameData ;
struct TYPE_4__ {int hw_frame; int locked_frame; } ;
typedef TYPE_1__ QSVMid ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static mfxStatus FUNC_1(mfxHDL VAR_1, mfxMemId VAR_2, mfxFrameData *VAR_3)
{
    QSVMid *VAR_4 = VAR_2;

    FUNC_0(&VAR_4->locked_frame);
    FUNC_0(&VAR_4->hw_frame);

    return VAR_0;
}
