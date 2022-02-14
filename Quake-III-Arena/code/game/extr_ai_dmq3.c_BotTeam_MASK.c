
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_3__ {scalar_t__ client; } ;
typedef TYPE_1__ bot_state_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__,char*,int) ;

int FUNC_3(bot_state_t *VAR_6) {
 char VAR_7[1024];

 if (VAR_6->client < 0 || VAR_6->client >= VAR_1) {

  return VAR_5;
 }
 FUNC_2(VAR_0+VAR_6->client, VAR_7, sizeof(VAR_7));

 if (FUNC_1(FUNC_0(VAR_7, "t")) == VAR_4) return VAR_4;
 else if (FUNC_1(FUNC_0(VAR_7, "t")) == VAR_2) return VAR_2;
 return VAR_3;
}
