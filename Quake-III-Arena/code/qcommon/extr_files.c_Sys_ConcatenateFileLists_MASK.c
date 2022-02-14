
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (int) ;

__attribute__((used)) static char** FUNC_3( char **VAR_0, char **VAR_1, char **VAR_2 )
{
  int VAR_3 = 0;
  char** VAR_4 = ((void*)0), **VAR_5, **VAR_6;

  VAR_3 += FUNC_0(VAR_0);
  VAR_3 += FUNC_0(VAR_1);
  VAR_3 += FUNC_0(VAR_2);


  VAR_5 = VAR_4 = FUNC_2( ( VAR_3 + 1 ) * sizeof( char* ) );


  if (VAR_0)
  {
    for (VAR_6 = VAR_0; *VAR_6; VAR_6++, VAR_5++)
      *VAR_5 = *VAR_6;
  }
  if (VAR_1)
  {
    for (VAR_6 = VAR_1; *VAR_6; VAR_6++, VAR_5++)
      *VAR_5 = *VAR_6;
  }
  if (VAR_2)
  {
    for (VAR_6 = VAR_2; *VAR_6; VAR_6++, VAR_5++)
      *VAR_5 = *VAR_6;
  }


  *VAR_5 = ((void*)0);



  if (VAR_0) FUNC_1( VAR_0 );
  if (VAR_1) FUNC_1( VAR_1 );
  if (VAR_2) FUNC_1( VAR_2 );

  return VAR_4;
}
