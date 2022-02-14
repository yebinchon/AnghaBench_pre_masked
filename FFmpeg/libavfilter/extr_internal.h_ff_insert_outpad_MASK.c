
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outputs; int output_pads; int nb_outputs; } ;
typedef int AVFilterPad ;
typedef TYPE_1__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *,int ,int *,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_2(AVFilterContext *VAR_2, unsigned VAR_3,
                                    AVFilterPad *VAR_4)
{
    return FUNC_0(VAR_3, &VAR_2->nb_outputs, FUNC_1(VAR_0, VAR_1),
                  &VAR_2->output_pads, &VAR_2->outputs, VAR_4);
}
