
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ param; int * p_cback; } ;
struct TYPE_10__ {int peer_features; TYPE_3__ cn_timer; int peer_addr; int app_id; scalar_t__ codec_fallback; scalar_t__ codec_updated; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_9__ {TYPE_2__* p_curr_scb; } ;
struct TYPE_12__ {TYPE_1__ sco; } ;
typedef int TIMER_CBACK ;
typedef scalar_t__ INT32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_7__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

void FUNC_6(tBTA_AG_SCB *VAR_6)
{
    VAR_4.sco.p_curr_scb = VAR_6;

    if ((VAR_6->codec_updated || VAR_6->codec_fallback ||
        FUNC_1(VAR_6)) &&
       (VAR_6->peer_features & VAR_1))
    {

        FUNC_4(VAR_2, VAR_6->app_id, VAR_6->peer_addr);


        FUNC_3(VAR_6, ((void*)0));


        VAR_6->cn_timer.p_cback = (TIMER_CBACK*)&VAR_5;
        VAR_6->cn_timer.param = (INT32)VAR_6;
        FUNC_5(&VAR_6->cn_timer, 0, VAR_0);
    }
    else
    {

        FUNC_0("use same codec type as previous SCO connection,skip codec negotiation");
        FUNC_2(VAR_6, VAR_3);
    }
}
