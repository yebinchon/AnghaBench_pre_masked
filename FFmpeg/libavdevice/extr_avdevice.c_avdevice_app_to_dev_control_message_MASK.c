
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct AVFormatContext {TYPE_1__* oformat; } ;
typedef enum AVAppToDevMessageType { ____Placeholder_AVAppToDevMessageType } AVAppToDevMessageType ;
struct TYPE_2__ {int (* control_message ) (struct AVFormatContext*,int,void*,size_t) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVFormatContext*,int,void*,size_t) ;

int FUNC_2(struct AVFormatContext *VAR_1, enum AVAppToDevMessageType VAR_2,
                                        void *VAR_3, size_t VAR_4)
{
    if (!VAR_1->oformat || !VAR_1->oformat->control_message)
        return FUNC_0(VAR_0);
    return VAR_1->oformat->control_message(VAR_1, VAR_2, VAR_3, VAR_4);
}
