
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int origin; } ;
typedef TYPE_1__ bot_movestate_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,float,int) ;
 int FUNC_3 (TYPE_1__*,int ,float,int) ;
 int VAR_0 ;

int FUNC_4(int VAR_1, vec3_t VAR_2, float VAR_3, int VAR_4)
{
 bot_movestate_t *VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (!VAR_5) return VAR_0;

 if (FUNC_0(VAR_5->origin))
 {
  return FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);
 }
 else
 {
  return FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4);
 }
}
