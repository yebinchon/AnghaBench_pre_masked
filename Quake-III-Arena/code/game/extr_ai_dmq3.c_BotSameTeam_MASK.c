
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info2 ;
typedef int info1 ;
struct TYPE_3__ {scalar_t__ client; } ;
typedef TYPE_1__ bot_state_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*,int) ;

int FUNC_3(bot_state_t *VAR_6, int VAR_7) {
 char VAR_8[1024], VAR_9[1024];

 if (VAR_6->client < 0 || VAR_6->client >= VAR_2) {

  return VAR_4;
 }
 if (VAR_7 < 0 || VAR_7 >= VAR_2) {

  return VAR_4;
 }
 if ( VAR_3 >= VAR_1 ) {
  FUNC_2(VAR_0+VAR_6->client, VAR_8, sizeof(VAR_8));
  FUNC_2(VAR_0+VAR_7, VAR_9, sizeof(VAR_9));

  if (FUNC_1(FUNC_0(VAR_8, "t")) == FUNC_1(FUNC_0(VAR_9, "t"))) return VAR_5;
 }
 return VAR_4;
}
