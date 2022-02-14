
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int rx_buf; } ;
typedef int RingbufHandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_6 ;
 TYPE_1__** VAR_7 ;

esp_err_t FUNC_1(rmt_channel_t VAR_8, RingbufHandle_t* VAR_9)
{
    FUNC_0(VAR_8 < VAR_5, VAR_4, VAR_0);
    FUNC_0(VAR_7[VAR_8] != ((void*)0), VAR_6, VAR_1);
    FUNC_0(VAR_9 != ((void*)0), VAR_3, VAR_0);
    *VAR_9 = VAR_7[VAR_8]->rx_buf;
    return VAR_2;
}
