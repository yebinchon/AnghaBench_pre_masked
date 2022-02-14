
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AVFormatContext {TYPE_1__* oformat; } ;
typedef int int64_t ;
struct TYPE_2__ {int (* get_output_timestamp ) (struct AVFormatContext*,int,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVFormatContext*,int,int *,int *) ;

int FUNC_2(struct AVFormatContext *VAR_1, int VAR_2,
                            int64_t *VAR_3, int64_t *VAR_4)
{
    if (!VAR_1->oformat || !VAR_1->oformat->get_output_timestamp)
        return FUNC_0(VAR_0);
    VAR_1->oformat->get_output_timestamp(VAR_1, VAR_2, VAR_3, VAR_4);
    return 0;
}
