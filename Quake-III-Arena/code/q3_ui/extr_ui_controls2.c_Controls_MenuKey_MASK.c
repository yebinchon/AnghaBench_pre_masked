
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sfxHandle_t ;
typedef void* qboolean ;
struct TYPE_6__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_7__ {int bind2; int bind1; int id; int label; } ;
typedef TYPE_2__ bind_t ;
struct TYPE_9__ {size_t cursor; scalar_t__* items; } ;
struct TYPE_8__ {TYPE_5__ menu; void* waitingforkey; void* changesmade; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

 int VAR_0 ;




 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static sfxHandle_t FUNC_4( int VAR_6 )
{
 int VAR_7;
 int VAR_8;
 qboolean VAR_9;
 bind_t* VAR_10;
 VAR_9 = VAR_3;

 if (!VAR_5.waitingforkey)
 {
  switch (VAR_6)
  {
   case 132:
   case 131:
   case 129:
    VAR_6 = -1;
    break;

   case 128:
   case 130:
    if (VAR_5.changesmade)
     FUNC_0();
    goto ignorekey;

   default:
    goto ignorekey;
  }
 }
 else
 {
  if (VAR_6 & VAR_0)
   goto ignorekey;

  switch (VAR_6)
  {
   case 130:
    VAR_5.waitingforkey = VAR_3;
    FUNC_1();
    return (VAR_2);

   case '`':
    goto ignorekey;
  }
 }

 VAR_5.changesmade = VAR_4;

 if (VAR_6 != -1)
 {

  VAR_10 = VAR_1;
  for (VAR_8=0; ;VAR_8++,VAR_10++)
  {
   if (!VAR_10->label)
    break;

   if (VAR_10->bind2 == VAR_6)
    VAR_10->bind2 = -1;

   if (VAR_10->bind1 == VAR_6)
   {
    VAR_10->bind1 = VAR_10->bind2;
    VAR_10->bind2 = -1;
   }
  }
 }


 VAR_7 = ((menucommon_s*)(VAR_5.menu.items[VAR_5.menu.cursor]))->id;
 VAR_10 = VAR_1;
 for (VAR_8=0; ;VAR_8++,VAR_10++)
 {
  if (!VAR_10->label)
   break;

  if (VAR_10->id == VAR_7)
  {
   VAR_9 = VAR_4;
   if (VAR_6 == -1)
   {
    if( VAR_10->bind1 != -1 ) {
     FUNC_3( VAR_10->bind1, "" );
     VAR_10->bind1 = -1;
    }
    if( VAR_10->bind2 != -1 ) {
     FUNC_3( VAR_10->bind2, "" );
     VAR_10->bind2 = -1;
    }
   }
   else if (VAR_10->bind1 == -1) {
    VAR_10->bind1 = VAR_6;
   }
   else if (VAR_10->bind1 != VAR_6 && VAR_10->bind2 == -1) {
    VAR_10->bind2 = VAR_6;
   }
   else
   {
    FUNC_3( VAR_10->bind1, "" );
    FUNC_3( VAR_10->bind2, "" );
    VAR_10->bind1 = VAR_6;
    VAR_10->bind2 = -1;
   }
   break;
  }
 }

 VAR_5.waitingforkey = VAR_3;

 if (VAR_9)
 {
  FUNC_1();
  return (VAR_2);
 }

ignorekey:
 return FUNC_2( &VAR_5.menu, VAR_6 );
}
