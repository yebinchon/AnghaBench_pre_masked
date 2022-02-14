
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int rtmp; } ;
typedef int RTMP ;
typedef TYPE_2__ LibRTMPContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    LibRTMPContext *VAR_4 = VAR_1->priv_data;
    RTMP *VAR_5 = &VAR_4->rtmp;

    int VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
    if (!VAR_6)
        return VAR_0;
    return VAR_6;
}
