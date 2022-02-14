
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_5__ {scalar_t__ h; scalar_t__ y; int x; } ;
typedef TYPE_1__ rectDef_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {int name; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_7__ {int currentVoiceClient; TYPE_2__* clientinfo; } ;


 size_t FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__,float,int ,int ,int ,int ,int) ;
 TYPE_3__ VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2( rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qboolean VAR_5, int VAR_6) {
 clientInfo_t *VAR_7;
  VAR_7 = VAR_0.clientinfo + ((VAR_5) ? VAR_0.currentVoiceClient : VAR_1[FUNC_0()]);
  if (VAR_7) {
    FUNC_1(VAR_2->x, VAR_2->y + VAR_2->h, VAR_3, VAR_4, VAR_7->name, 0, 0, VAR_6);
  }
}
