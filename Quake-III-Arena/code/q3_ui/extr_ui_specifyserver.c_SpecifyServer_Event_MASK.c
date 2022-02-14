
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int id; } ;
typedef TYPE_5__ menucommon_s ;
struct TYPE_7__ {int * buffer; } ;
struct TYPE_8__ {TYPE_1__ field; } ;
struct TYPE_9__ {int * buffer; } ;
struct TYPE_10__ {TYPE_3__ field; } ;
struct TYPE_12__ {TYPE_2__ port; TYPE_4__ domain; } ;


 int FUNC_0 (char*,int,char*,int *) ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_6__ VAR_2 ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6( void* VAR_3, int VAR_4 )
{
 char VAR_5[256];

 switch (((menucommon_s*)VAR_3)->id)
 {
  case 128:
   if (VAR_4 != VAR_1)
    break;

   if (VAR_2.domain.field.buffer[0])
   {
    FUNC_2(VAR_5,VAR_2.domain.field.buffer);
    if (VAR_2.port.field.buffer[0])
     FUNC_0( VAR_5+FUNC_3(VAR_5), 128, ":%s", VAR_2.port.field.buffer );

    FUNC_4( VAR_0, FUNC_5( "connect %s\n", VAR_5 ) );
   }
   break;

  case 129:
   if (VAR_4 != VAR_1)
    break;

   FUNC_1();
   break;
 }
}
