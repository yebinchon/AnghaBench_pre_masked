
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ param_offset; int mb_param_type; scalar_t__ param_size; } ;
typedef TYPE_1__ mb_parameter_descriptor_t ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (size_t) ;

__attribute__((used)) static void* FUNC_2(const mb_parameter_descriptor_t* VAR_4)
{
    FUNC_0(VAR_4 != ((void*)0));
    void* VAR_5 = ((void*)0);
    if (VAR_4->param_offset != 0) {
       switch(VAR_4->mb_param_type)
       {
           case 129:
               VAR_5 = (void*)((uint32_t)&VAR_2 + VAR_4->param_offset - 1);
               break;
           case 128:
               VAR_5 = (void*)((uint32_t)&VAR_3 + VAR_4->param_offset - 1);
               break;
           case 131:
               VAR_5 = (void*)((uint32_t)&VAR_0 + VAR_4->param_offset - 1);
               break;
           case 130:
               VAR_5 = (void*)((uint32_t)&VAR_1 + VAR_4->param_offset - 1);
               break;
           default:
               VAR_5 = ((void*)0);
               break;
       }
    } else {
        VAR_5 = FUNC_1((size_t)(VAR_4->param_size));;
    }
    return VAR_5;
}
