
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* value; int name; void* defaultvalue; } ;
typedef TYPE_1__ configcvar_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3( void )
{
 int VAR_1;
 configcvar_t* VAR_2;

 VAR_2 = VAR_0;
 for (VAR_1=0; ;VAR_1++,VAR_2++)
 {
  if (!VAR_2->name)
   break;


  VAR_2->value = FUNC_2( VAR_2->name );


  FUNC_0( VAR_2->name );
  VAR_2->defaultvalue = FUNC_2( VAR_2->name );


  FUNC_1( VAR_2->name, VAR_2->value );
 }
}
