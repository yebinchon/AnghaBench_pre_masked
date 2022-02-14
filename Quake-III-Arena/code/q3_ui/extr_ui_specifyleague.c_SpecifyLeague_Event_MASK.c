
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


struct TYPE_9__ {int id; } ;
typedef TYPE_3__ menucommon_s ;
struct TYPE_12__ {size_t curvalue; } ;
struct TYPE_11__ {int leaguename; } ;
struct TYPE_7__ {int buffer; } ;
struct TYPE_8__ {TYPE_1__ field; } ;
struct TYPE_10__ {TYPE_6__ list; TYPE_2__ rankname; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_5__* VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6( void* VAR_8, int VAR_9 )
{
 int VAR_10;
 VAR_10 = ((menucommon_s*)VAR_8)->id;




 switch (VAR_10)
 {
  case 130:
   if( VAR_9 == VAR_3 ) {

   }
  break;

  case 128:
   if( VAR_9 == VAR_2 )
    FUNC_1( &VAR_7.list, VAR_1 );
  break;

  case 131:
   if( VAR_9 == VAR_2 )
    FUNC_1( &VAR_7.list, VAR_0 );
  break;

  case 129:
   if( (VAR_9 == VAR_4) &&
    (FUNC_0(VAR_6,
     VAR_7.rankname.field.buffer,
     FUNC_4(VAR_7.rankname.field.buffer)) != 0))
   {
    FUNC_2();
   }
  break;

  case 132:
   if( VAR_9 == VAR_2 )
   {
    FUNC_5( "sv_leagueName", VAR_5[VAR_7.list.curvalue].leaguename);
    FUNC_3();
   }
  break;
 }
}
