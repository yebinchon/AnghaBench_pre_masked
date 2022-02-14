
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int dh; } ;
typedef TYPE_2__ RTMPEContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,int,int,int) ;

int FUNC_5(URLContext *VAR_1, uint8_t *VAR_2)
{
    RTMPEContext *VAR_3 = VAR_1->priv_data;
    int VAR_4, VAR_5;

    if (!(VAR_3->dh = FUNC_2(1024)))
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_4(VAR_2, 768, 632, 8);
    if (VAR_4 < 0)
        return VAR_4;


    if ((VAR_5 = FUNC_1(VAR_3->dh)) < 0)
        return VAR_5;


    if ((VAR_5 = FUNC_3(VAR_3->dh, VAR_2 + VAR_4, 128)) < 0)
        return VAR_5;

    return 0;
}
