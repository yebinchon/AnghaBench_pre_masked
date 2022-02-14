
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* write ) (TYPE_1__*,void const*,int) ;} ;
typedef TYPE_1__ smd_channel_t ;


 int FUNC_0 (TYPE_1__*,void const*,int) ;

int FUNC_1(smd_channel_t *VAR_0, const void *VAR_1, int VAR_2)
{
 return VAR_0->write(VAR_0, VAR_1, VAR_2);
}
