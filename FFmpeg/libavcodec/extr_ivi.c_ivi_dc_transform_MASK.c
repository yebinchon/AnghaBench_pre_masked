
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pitch; scalar_t__ buf; int (* dc_transform ) (int*,scalar_t__,int ,int) ;} ;
typedef TYPE_1__ IVIBandDesc ;


 int FUNC_0 (int*,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_1(const IVIBandDesc *VAR_0, int *VAR_1, int VAR_2,
                            int VAR_3)
{
    VAR_0->dc_transform(VAR_1, VAR_0->buf + VAR_2,
                       VAR_0->pitch, VAR_3);

    return 0;
}
