
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct global {int dummy; } ;
struct TYPE_6__ {int remapfile; } ;
struct TYPE_7__ {TYPE_1__ name; } ;
typedef TYPE_2__ global_t ;
struct TYPE_8__ {int has_set_input_descriptors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void)
{
   global_t *VAR_16 = ((void*)0);

   FUNC_1();

   FUNC_6();
   FUNC_0(VAR_1, ((void*)0));
   FUNC_0(VAR_0, ((void*)0));

   VAR_7 = 0;
   VAR_8 = 0;
   VAR_9 = 0;
   VAR_11 = 0;
   FUNC_7(VAR_2, ((void*)0));
   FUNC_7(VAR_3, ((void*)0));
   FUNC_7(VAR_4, ((void*)0));
   VAR_10 = 0;
   VAR_12 = 0;
   VAR_14 = 0;
   VAR_15 = 0;
   VAR_13 = 0;

   VAR_5.has_set_input_descriptors = 0;

   VAR_16 = &VAR_6;
   FUNC_5();
   FUNC_2();

   if (VAR_16)
   {
      if (!FUNC_9(VAR_16->name.remapfile))
         FUNC_3(VAR_16->name.remapfile);
      FUNC_4(VAR_16, 0, sizeof(struct global));
   }
   FUNC_8();
}
