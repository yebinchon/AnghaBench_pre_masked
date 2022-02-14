
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t id; } ;
struct TYPE_9__ {TYPE_4__ current; } ;
struct TYPE_7__ {TYPE_3__ resolutions; } ;
struct TYPE_8__ {TYPE_1__ screen; } ;
struct TYPE_11__ {TYPE_2__ console; } ;
typedef TYPE_5__ global_t ;


 size_t VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 unsigned int** VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2,
      unsigned *VAR_3, unsigned *VAR_4)
{
   global_t *VAR_5 = FUNC_0();

   (void)VAR_2;


   if (VAR_5->console.screen.resolutions.current.id > VAR_0)
      VAR_5->console.screen.resolutions.current.id = 0;

   *VAR_3 = VAR_1[
      VAR_5->console.screen.resolutions.current.id][0];
   *VAR_4 = VAR_1[
      VAR_5->console.screen.resolutions.current.id][1];
}
