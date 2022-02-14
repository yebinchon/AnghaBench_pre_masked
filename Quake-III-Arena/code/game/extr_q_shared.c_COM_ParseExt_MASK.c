
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 int VAR_0 ;
 char* FUNC_0 (char*,scalar_t__*) ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;

char *FUNC_1( char **VAR_4, qboolean VAR_5 )
{
 int VAR_6 = 0, VAR_7;
 qboolean VAR_8 = VAR_3;
 char *VAR_9;

 VAR_9 = *VAR_4;
 VAR_7 = 0;
 VAR_2[0] = 0;


 if ( !VAR_9 )
 {
  *VAR_4 = ((void*)0);
  return VAR_2;
 }

 while ( 1 )
 {

  VAR_9 = FUNC_0( VAR_9, &VAR_8 );
  if ( !VAR_9 )
  {
   *VAR_4 = ((void*)0);
   return VAR_2;
  }
  if ( VAR_8 && !VAR_5 )
  {
   *VAR_4 = VAR_9;
   return VAR_2;
  }

  VAR_6 = *VAR_9;


  if ( VAR_6 == '/' && VAR_9[1] == '/' )
  {
   VAR_9 += 2;
   while (*VAR_9 && *VAR_9 != '\n') {
    VAR_9++;
   }
  }

  else if ( VAR_6=='/' && VAR_9[1] == '*' )
  {
   VAR_9 += 2;
   while ( *VAR_9 && ( *VAR_9 != '*' || VAR_9[1] != '/' ) )
   {
    VAR_9++;
   }
   if ( *VAR_9 )
   {
    VAR_9 += 2;
   }
  }
  else
  {
   break;
  }
 }


 if (VAR_6 == '\"')
 {
  VAR_9++;
  while (1)
  {
   VAR_6 = *VAR_9++;
   if (VAR_6=='\"' || !VAR_6)
   {
    VAR_2[VAR_7] = 0;
    *VAR_4 = ( char * ) VAR_9;
    return VAR_2;
   }
   if (VAR_7 < VAR_0)
   {
    VAR_2[VAR_7] = VAR_6;
    VAR_7++;
   }
  }
 }


 do
 {
  if (VAR_7 < VAR_0)
  {
   VAR_2[VAR_7] = VAR_6;
   VAR_7++;
  }
  VAR_9++;
  VAR_6 = *VAR_9;
  if ( VAR_6 == '\n' )
   VAR_1++;
 } while (VAR_6>32);

 if (VAR_7 == VAR_0)
 {

  VAR_7 = 0;
 }
 VAR_2[VAR_7] = 0;

 *VAR_4 = ( char * ) VAR_9;
 return VAR_2;
}
