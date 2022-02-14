
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* image; int height; int width; } ;
typedef TYPE_2__ WebPContext ;
struct TYPE_5__ {int size_reduction; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,size_t,int,int) ;

__attribute__((used)) static int FUNC_2(WebPContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    FUNC_0(VAR_1->width, VAR_1->height);

    VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_3,
                                     VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_1->image[VAR_0].size_reduction = VAR_2;

    return 0;
}
