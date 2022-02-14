
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* height; void* width; int format; } ;
typedef TYPE_1__ PixHeader ;
typedef int GetByteContext ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_4(PixHeader *VAR_1, GetByteContext *VAR_2)
{
    unsigned int VAR_3 = FUNC_1(VAR_2);

    VAR_1->format = FUNC_2(VAR_2);
    FUNC_3(VAR_2, 2);
    VAR_1->width = FUNC_0(VAR_2);
    VAR_1->height = FUNC_0(VAR_2);


    if (VAR_3 < 11)
        return VAR_0;


    FUNC_3(VAR_2, VAR_3 - 7);

    return 0;
}
