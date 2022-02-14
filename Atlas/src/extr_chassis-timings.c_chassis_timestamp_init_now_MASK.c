
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gint ;
struct TYPE_3__ {char const* name; char const* filename; int ticks; int cycles; int usec; int line; } ;
typedef TYPE_1__ chassis_timestamp_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(chassis_timestamp_t *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  gint VAR_3) {

 VAR_0->name = VAR_1;
 VAR_0->filename = VAR_2;
 VAR_0->line = VAR_3;
 VAR_0->usec = FUNC_1();
 VAR_0->cycles = FUNC_0();
 VAR_0->ticks = FUNC_2();
}
