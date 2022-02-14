
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ inputbw; scalar_t__ oheadbw; } ;
typedef TYPE_2__ SRTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,char*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_3, int VAR_4)
{
    SRTContext *VAR_5 = VAR_3->priv_data;

    if ((VAR_5->inputbw >= 0 && FUNC_1(VAR_3, VAR_4, VAR_1, "SRTO_INPUTBW", &VAR_5->inputbw, sizeof(VAR_5->inputbw)) < 0) ||
        (VAR_5->oheadbw >= 0 && FUNC_1(VAR_3, VAR_4, VAR_2, "SRTO_OHEADBW", &VAR_5->oheadbw, sizeof(VAR_5->oheadbw)) < 0)) {
        return FUNC_0(VAR_0);
    }
    return 0;
}
