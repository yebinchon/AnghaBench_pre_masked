
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ram; } ;
struct TYPE_7__ {scalar_t__ status; } ;
struct TYPE_5__ {int boot; } ;
struct TYPE_6__ {TYPE_1__ cartridge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static bool FUNC_3(char * VAR_7)
{
   int VAR_8 = 0;


   if ((VAR_6 == VAR_2) && (VAR_4.status == VAR_0))
   {

      VAR_8 = FUNC_0(VAR_7, (char *)(VAR_3.ram));


      if (!VAR_5.cartridge.boot)
         FUNC_1((char *)(VAR_3.ram));
   }


   if (!VAR_8)
   {

      VAR_4.status = VAR_1;


      VAR_8 = FUNC_2(VAR_7);
   }

   return VAR_8 > 0;
}
