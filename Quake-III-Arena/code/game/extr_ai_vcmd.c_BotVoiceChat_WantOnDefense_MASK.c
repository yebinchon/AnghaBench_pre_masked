
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int netname ;
struct TYPE_7__ {int client; int cs; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(bot_state_t *VAR_6, int VAR_7, int VAR_8) {
 char VAR_9[VAR_2];
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, VAR_7);
 VAR_10 &= ~VAR_3;
 VAR_10 |= VAR_4;
 FUNC_2(VAR_6, VAR_7, VAR_10);

 FUNC_4(VAR_7, VAR_9, sizeof(VAR_9));
 FUNC_0(VAR_6, "keepinmind", VAR_9, ((void*)0));
 FUNC_5(VAR_6->cs, VAR_7, VAR_1);
 FUNC_3(VAR_6, VAR_7, VAR_5);
 FUNC_6(VAR_6->client, VAR_0);
}
