
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int start_time; int str_name; } ;
typedef TYPE_1__ entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static entry_t* FUNC_1 (char* VAR_3) {
  if (VAR_1 + 1 == VAR_0) {

    return 0 ;
  }

  FUNC_0 (VAR_2 [VAR_1].str_name, VAR_3) ;
  VAR_2 [VAR_1].start_time = -1 ;

  return &VAR_2 [VAR_1++] ;
}
