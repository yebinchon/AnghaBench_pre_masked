
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; char* resetString; char* latchedString; int modificationCount; struct TYPE_7__* hashNext; struct TYPE_7__* next; void* string; int integer; int value; int modified; void* name; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,char*,char const*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*) ;
 void* FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int ) ;
 int FUNC_6 (char const*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__* VAR_7 ;
 long FUNC_10 (char const*) ;
 TYPE_1__** VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (char*,char const*) ;

cvar_t *FUNC_12( const char *VAR_10, const char *VAR_11, int VAR_12 ) {
 cvar_t *VAR_13;
 long VAR_14;

  if ( !VAR_10 || ! VAR_11 ) {
  FUNC_1( VAR_2, "Cvar_Get: NULL parameter" );
  }

 if ( !FUNC_6( VAR_10 ) ) {
  FUNC_2("invalid cvar name string: %s\n", VAR_10 );
  VAR_10 = "BADNAME";
 }
 VAR_13 = FUNC_4 (VAR_10);
 if ( VAR_13 ) {


  if ( ( VAR_13->flags & VAR_1 ) && !( VAR_12 & VAR_1 )
   && VAR_11[0] ) {
   VAR_13->flags &= ~VAR_1;
   FUNC_7( VAR_13->resetString );
   VAR_13->resetString = FUNC_3( VAR_11 );



   VAR_5 |= VAR_12;
  }

  VAR_13->flags |= VAR_12;

  if ( !VAR_13->resetString[0] ) {

   FUNC_7( VAR_13->resetString );
   VAR_13->resetString = FUNC_3( VAR_11 );
  } else if ( VAR_11[0] && FUNC_11( VAR_13->resetString, VAR_11 ) ) {
   FUNC_0( "Warning: cvar \"%s\" given initial values: \"%s\" and \"%s\"\n",
    VAR_10, VAR_13->resetString, VAR_11 );
  }

  if ( VAR_13->latchedString ) {
   char *VAR_15;

   VAR_15 = VAR_13->latchedString;
   VAR_13->latchedString = ((void*)0);
   FUNC_5( VAR_10, VAR_15, VAR_9 );
   FUNC_7( VAR_15 );
  }
  return VAR_13;
 }




 if ( VAR_6 >= VAR_3 ) {
  FUNC_1( VAR_2, "MAX_CVARS" );
 }
 VAR_13 = &VAR_4[VAR_6];
 VAR_6++;
 VAR_13->name = FUNC_3 (VAR_10);
 VAR_13->string = FUNC_3 (VAR_11);
 VAR_13->modified = VAR_9;
 VAR_13->modificationCount = 1;
 VAR_13->value = FUNC_8 (VAR_13->string);
 VAR_13->integer = FUNC_9(VAR_13->string);
 VAR_13->resetString = FUNC_3( VAR_11 );


 VAR_13->next = VAR_7;
 VAR_7 = VAR_13;

 VAR_13->flags = VAR_12;

 VAR_14 = FUNC_10(VAR_10);
 VAR_13->hashNext = VAR_8[VAR_14];
 VAR_8[VAR_14] = VAR_13;

 return VAR_13;
}
