
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AVFormatContext {int (* control_message_cb ) (struct AVFormatContext*,int,void*,size_t) ;} ;
typedef enum AVDevToAppMessageType { ____Placeholder_AVDevToAppMessageType } AVDevToAppMessageType ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVFormatContext*,int,void*,size_t) ;

int FUNC_2(struct AVFormatContext *VAR_1, enum AVDevToAppMessageType VAR_2,
                                        void *VAR_3, size_t VAR_4)
{
    if (!VAR_1->control_message_cb)
        return FUNC_0(VAR_0);
    return VAR_1->control_message_cb(VAR_1, VAR_2, VAR_3, VAR_4);
}
