
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {char* resetString; int flags; int * string; int integer; int value; int modificationCount; void* modified; int * latchedString; } ;
typedef TYPE_1__ cvar_t ;
struct TYPE_7__ {int integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 void* FUNC_2 (char const*) ;
 TYPE_1__* FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (char const*,char const*,int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_9 (char const*,int *) ;
 char* VAR_8 ;

cvar_t *FUNC_10( const char *VAR_9, const char *VAR_10, qboolean VAR_11 ) {
 cvar_t *VAR_12;

 FUNC_0( "Cvar_Set2: %s %s\n", VAR_9, VAR_10 );

 if ( !FUNC_5( VAR_9 ) ) {
  FUNC_1("invalid cvar name string: %s\n", VAR_9 );
  VAR_9 = "BADNAME";
 }
 VAR_12 = FUNC_3 (VAR_9);
 if (!VAR_12) {
  if ( !VAR_10 ) {
   return ((void*)0);
  }

  if ( !VAR_11 ) {
   return FUNC_4( VAR_9, VAR_10, VAR_4 );
  } else {
   return FUNC_4 (VAR_9, VAR_10, 0);
  }
 }

 if (!VAR_10 ) {
  VAR_10 = VAR_12->resetString;
 }

 if (!FUNC_9(VAR_10,VAR_12->string)) {
  return VAR_12;
 }

 VAR_6 |= VAR_12->flags;

 if (!VAR_11)
 {
  if (VAR_12->flags & VAR_3)
  {
   FUNC_1 ("%s is read only.\n", VAR_9);
   return VAR_12;
  }

  if (VAR_12->flags & VAR_1)
  {
   FUNC_1 ("%s is write protected.\n", VAR_9);
   return VAR_12;
  }

  if (VAR_12->flags & VAR_2)
  {
   if (VAR_12->latchedString)
   {
    if (FUNC_9(VAR_10, VAR_12->latchedString) == 0)
     return VAR_12;
    FUNC_6 (VAR_12->latchedString);
   }
   else
   {
    if (FUNC_9(VAR_10, VAR_12->string) == 0)
     return VAR_12;
   }

   FUNC_1 ("%s will be changed upon restarting.\n", VAR_9);
   VAR_12->latchedString = FUNC_2(VAR_10);
   VAR_12->modified = VAR_7;
   VAR_12->modificationCount++;
   return VAR_12;
  }

  if ( (VAR_12->flags & VAR_0) && !VAR_5->integer )
  {
   FUNC_1 ("%s is cheat protected.\n", VAR_9);
   return VAR_12;
  }

 }
 else
 {
  if (VAR_12->latchedString)
  {
   FUNC_6 (VAR_12->latchedString);
   VAR_12->latchedString = ((void*)0);
  }
 }

 if (!FUNC_9(VAR_10, VAR_12->string))
  return VAR_12;

 VAR_12->modified = VAR_7;
 VAR_12->modificationCount++;

 FUNC_6 (VAR_12->string);

 VAR_12->string = FUNC_2(VAR_10);
 VAR_12->value = FUNC_7 (VAR_12->string);
 VAR_12->integer = FUNC_8 (VAR_12->string);

 return VAR_12;
}
