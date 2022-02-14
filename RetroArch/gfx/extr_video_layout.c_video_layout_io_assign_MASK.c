
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int io_t ;
struct TYPE_4__ {int io_count; TYPE_1__* io; } ;
struct TYPE_3__ {int base_value; int value; int name; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (void**,int,int) ;
 TYPE_2__* VAR_0 ;

int FUNC_2(const char *VAR_1, int VAR_2)
{
   int VAR_3;

   VAR_3 = VAR_0->io_count;

   FUNC_1((void**)&VAR_0->io, sizeof(io_t), ++VAR_0->io_count);

   VAR_0->io[VAR_3].name = FUNC_0(VAR_1);
   VAR_0->io[VAR_3].base_value = VAR_2;
   VAR_0->io[VAR_3].value = VAR_2;

   return VAR_3;
}
