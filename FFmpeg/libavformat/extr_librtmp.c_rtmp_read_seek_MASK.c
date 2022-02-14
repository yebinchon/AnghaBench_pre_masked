
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int rtmp; } ;
typedef int RTMP ;
typedef TYPE_2__ LibRTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static int64_t FUNC_3(URLContext *VAR_7, int VAR_8,
                              int64_t VAR_9, int VAR_10)
{
    LibRTMPContext *VAR_11 = VAR_7->priv_data;
    RTMP *VAR_12 = &VAR_11->rtmp;

    if (VAR_10 & VAR_2)
        return FUNC_0(VAR_6);


    if (VAR_8 < 0)
        VAR_9 = FUNC_2(VAR_9, 1000, VAR_5,
            VAR_10 & VAR_1 ? VAR_3 : VAR_4);

    if (!FUNC_1(VAR_12, VAR_9))
        return VAR_0;
    return VAR_9;
}
