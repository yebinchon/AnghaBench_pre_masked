
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int8_t ;
typedef int int16_t ;
struct TYPE_3__ {int bytes; int name; int type; } ;
typedef TYPE_1__ TAOS_FIELD ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(TAOS_FIELD* VAR_1, int8_t VAR_2, char* VAR_3, int16_t VAR_4) {
  VAR_1->type = VAR_2;
  FUNC_0(VAR_1->name, VAR_3, VAR_0);
  VAR_1->bytes = VAR_4;
}
