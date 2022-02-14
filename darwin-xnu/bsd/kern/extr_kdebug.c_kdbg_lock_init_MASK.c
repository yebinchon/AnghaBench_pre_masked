
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lck_grp_t ;
typedef int lck_grp_attr_t ;
typedef int lck_attr_t ;
struct TYPE_2__ {int kdebug_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int * FUNC_1 () ;
 int * FUNC_2 (char*,int *) ;
 int * FUNC_3 () ;
 void* FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(void)
{
 static lck_grp_attr_t *VAR_4 = ((void*)0);
 static lck_grp_t *VAR_5 = ((void*)0);
 static lck_attr_t *VAR_6 = ((void*)0);

 if (VAR_1.kdebug_flags & VAR_0) {
  return;
 }

 FUNC_0(VAR_4 == ((void*)0));
 VAR_4 = FUNC_3();
 VAR_5 = FUNC_2("kdebug", VAR_4);
 VAR_6 = FUNC_1();

 VAR_2 = FUNC_4(VAR_5, VAR_6);
 VAR_3 = FUNC_4(VAR_5, VAR_6);

 VAR_1.kdebug_flags |= VAR_0;
}
