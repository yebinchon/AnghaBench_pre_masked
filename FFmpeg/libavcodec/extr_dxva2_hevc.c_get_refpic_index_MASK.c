
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bPicEntry; } ;
struct TYPE_4__ {TYPE_3__* RefPicList; } ;
typedef TYPE_1__ DXVA_PicParams_HEVC ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(const DXVA_PicParams_HEVC *VAR_0, int VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->RefPicList); VAR_2++) {
        if ((VAR_0->RefPicList[VAR_2].bPicEntry & 0x7f) == VAR_1)
          return VAR_2;
    }
    return 0xff;
}
