
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mzn_name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(void)
{
 FUNC_0("Largest zone info");
 FUNC_1(&VAR_3, &VAR_2);


 if (FUNC_2(VAR_3.mzn_name, VAR_0)) {

  if (!FUNC_2(VAR_3.mzn_name, VAR_1) && FUNC_3()) {
   return 0;
  }
  return 1;
 }
 return 0;
}
