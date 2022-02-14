
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int handlers ;
struct TYPE_4__ {int joinRequest; int spectateGame; int joinGame; int errored; int disconnected; int ready; } ;
typedef TYPE_1__ DiscordEventHandlers ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2()
{
    DiscordEventHandlers VAR_7;
    FUNC_1(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.ready = VAR_5;
    VAR_7.disconnected = VAR_1;
    VAR_7.errored = VAR_2;
    VAR_7.joinGame = VAR_3;
    VAR_7.spectateGame = VAR_6;
    VAR_7.joinRequest = VAR_4;
    FUNC_0(VAR_0, &VAR_7, 1, ((void*)0));
}
