
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int remains; scalar_t__ print_content; } ;
typedef TYPE_1__ chunk_data_t ;


 long VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static
long FUNC_1(void *VAR_1)
{
  chunk_data_t *VAR_2 = VAR_1;
  if(VAR_2->print_content) {
    VAR_2->print_content = 0;
    FUNC_0("-------------------------------------------------------------\n");
  }
  if(VAR_2->remains == 1)
    FUNC_0("=============================================================\n");
  return VAR_0;
}
