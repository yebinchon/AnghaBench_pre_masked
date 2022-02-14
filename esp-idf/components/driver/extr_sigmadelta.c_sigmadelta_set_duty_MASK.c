
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t sigmadelta_channel_t ;
typedef int int8_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* channel; } ;
struct TYPE_3__ {int duty; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ,int ) ;

esp_err_t FUNC_1(sigmadelta_channel_t VAR_5, int8_t VAR_6)
{
    FUNC_0(VAR_5 < VAR_4, VAR_3, VAR_0);
    VAR_2.channel[VAR_5].duty = VAR_6;
    return VAR_1;
}
