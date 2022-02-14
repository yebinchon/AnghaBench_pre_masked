
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* c; } ;
typedef TYPE_3__ bot_character_t ;
struct TYPE_9__ {int (* Print ) (int ,char*,int) ;} ;
struct TYPE_6__ {int integer; scalar_t__ _float; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ value; } ;


 TYPE_3__* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(int VAR_4, int VAR_5)
{
 bot_character_t *VAR_6;

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6) return 0;

 if (!FUNC_1(VAR_4, VAR_5)) return 0;

 if (VAR_6->c[VAR_5].type == VAR_1)
 {
  return VAR_6->c[VAR_5].value.integer;
 }

 else if (VAR_6->c[VAR_5].type == VAR_0)
 {
  return (int) VAR_6->c[VAR_5].value._float;
 }
 else
 {
  VAR_3.Print(VAR_2, "characteristic %d is not a integer\n", VAR_5);
  return 0;
 }

}
