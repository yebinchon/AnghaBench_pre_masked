
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ port; } ;
struct TYPE_7__ {int time; int start; TYPE_1__ adr; } ;
typedef TYPE_2__ ping_t ;
struct TYPE_8__ {int realtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_3__ VAR_3 ;

ping_t* FUNC_0( void )
{
 ping_t* VAR_4;
 ping_t* VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_4 = VAR_2;
 for (VAR_7=0; VAR_7<VAR_1; VAR_7++, VAR_4++ )
 {

  if (VAR_4->adr.port)
  {
   if (!VAR_4->time)
   {
    if (VAR_3.realtime - VAR_4->start < 500)
    {

     continue;
    }
   }
   else if (VAR_4->time < 500)
   {

    continue;
   }
  }


  VAR_4->adr.port = 0;
  return (VAR_4);
 }


 VAR_4 = VAR_2;
 VAR_5 = VAR_2;
 VAR_6 = VAR_0;
 for (VAR_7=0; VAR_7<VAR_1; VAR_7++, VAR_4++ )
 {

  VAR_8 = VAR_3.realtime - VAR_4->start;
  if (VAR_8 > VAR_6)
  {
   VAR_6 = VAR_8;
   VAR_5 = VAR_4;
  }
 }

 return (VAR_5);
}
