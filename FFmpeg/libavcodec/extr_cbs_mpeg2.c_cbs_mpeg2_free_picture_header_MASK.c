
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int extra_information_ref; } ;
struct TYPE_4__ {TYPE_1__ extra_information_picture; } ;
typedef TYPE_2__ MPEG2RawPictureHeader ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, uint8_t *VAR_1)
{
    MPEG2RawPictureHeader *VAR_2 = (MPEG2RawPictureHeader*)VAR_1;
    FUNC_0(&VAR_2->extra_information_picture.extra_information_ref);
    FUNC_1(&VAR_1);
}
