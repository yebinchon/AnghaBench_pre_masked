
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int msg ;
struct TYPE_7__ {scalar_t__ id; } ;
struct TYPE_8__ {TYPE_1__ current; } ;
struct TYPE_9__ {TYPE_2__ resolutions; } ;
struct TYPE_10__ {TYPE_3__ screen; } ;
struct TYPE_11__ {TYPE_4__ console; } ;
typedef TYPE_5__ global_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (unsigned int*,unsigned int*) ;
 int FUNC_4 (unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_3, const char *VAR_4)
{
   unsigned VAR_5 = 0, VAR_6 = 0;
   global_t *VAR_7 = FUNC_0();


   VAR_7->console.screen.resolutions.current.id = 0;

   if (FUNC_3(&VAR_5, &VAR_6))
   {
      char VAR_8[VAR_2];

      VAR_8[0] = '\0';

      FUNC_4(VAR_5, VAR_6, 1);

      FUNC_2(VAR_8, "Resetting to: DEFAULT", sizeof(VAR_8));
      FUNC_1(VAR_8, 1, 100, 1, ((void*)0), VAR_1, VAR_0);
   }

   return 0;
}
