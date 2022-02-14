
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; void* max_pic_average_light_level; void* max_content_light_level; } ;
typedef TYPE_1__ HEVCSEIContentLight ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(HEVCSEIContentLight *VAR_0, GetBitContext *VAR_1)
{

    VAR_0->max_content_light_level = FUNC_0(VAR_1, 16);
    VAR_0->max_pic_average_light_level = FUNC_0(VAR_1, 16);



    VAR_0->present = 2;
    return 0;
}
