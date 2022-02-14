
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ readcount; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_5__ {int integer; } ;


 int FUNC_0 (char*,scalar_t__,char*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1( msg_t *VAR_1, char *VAR_2) {
 if ( VAR_0->integer >= 2) {
  FUNC_0 ("%3i:%s\n", VAR_1->readcount-1, VAR_2);
 }
}
