
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int npixels; int * frm0; int buf_size; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static int FUNC_2(SANMVideoContext *VAR_1)
{




    uint8_t *VAR_2 = (uint8_t*)VAR_1->frm0;

    if (FUNC_1(VAR_1, VAR_2, VAR_1->buf_size))
        return VAR_0;
    return 0;
}
