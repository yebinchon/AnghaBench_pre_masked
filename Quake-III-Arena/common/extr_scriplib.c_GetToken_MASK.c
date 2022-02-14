
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* qboolean ;
struct TYPE_2__ {int* script_p; int* end_p; int line; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (char*,scalar_t__) ;
 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*,char*) ;
 char* VAR_5 ;
 void* VAR_6 ;

qboolean FUNC_4 (qboolean VAR_7)
{
 char *VAR_8;

 if (VAR_6)
 {
  VAR_6 = VAR_1;
  return VAR_2;
 }

 if (VAR_3->script_p >= VAR_3->end_p)
  return FUNC_1 (VAR_7);




skipspace:
 while (*VAR_3->script_p <= 32)
 {
  if (VAR_3->script_p >= VAR_3->end_p)
   return FUNC_1 (VAR_7);
  if (*VAR_3->script_p++ == '\n')
  {
   if (!VAR_7)
    FUNC_2 ("Line %i is incomplete\n",VAR_4);
   VAR_4 = VAR_3->line++;
  }
 }

 if (VAR_3->script_p >= VAR_3->end_p)
  return FUNC_1 (VAR_7);


 if (*VAR_3->script_p == ';' || *VAR_3->script_p == '#'
  || ( VAR_3->script_p[0] == '/' && VAR_3->script_p[1] == '/') )
 {
  if (!VAR_7)
   FUNC_2 ("Line %i is incomplete\n",VAR_4);
  while (*VAR_3->script_p++ != '\n')
   if (VAR_3->script_p >= VAR_3->end_p)
    return FUNC_1 (VAR_7);
  VAR_4 = VAR_3->line++;
  goto skipspace;
 }


 if (VAR_3->script_p[0] == '/' && VAR_3->script_p[1] == '*')
 {
  if (!VAR_7)
   FUNC_2 ("Line %i is incomplete\n",VAR_4);
  VAR_3->script_p+=2;
  while (VAR_3->script_p[0] != '*' && VAR_3->script_p[1] != '/')
  {
   if ( *VAR_3->script_p == '\n' ) {
    VAR_4 = VAR_3->line++;
   }
   VAR_3->script_p++;
   if (VAR_3->script_p >= VAR_3->end_p)
    return FUNC_1 (VAR_7);
  }
  VAR_3->script_p += 2;
  goto skipspace;
 }




 VAR_8 = VAR_5;

 if (*VAR_3->script_p == '"')
 {

  VAR_3->script_p++;
  while (*VAR_3->script_p != '"')
  {
   *VAR_8++ = *VAR_3->script_p++;
   if (VAR_3->script_p == VAR_3->end_p)
    break;
   if (VAR_8 == &VAR_5[VAR_0])
    FUNC_2 ("Token too large on line %i\n",VAR_4);
  }
  VAR_3->script_p++;
 }
 else
 while ( *VAR_3->script_p > 32 && *VAR_3->script_p != ';')
 {
  *VAR_8++ = *VAR_3->script_p++;
  if (VAR_3->script_p == VAR_3->end_p)
   break;
  if (VAR_8 == &VAR_5[VAR_0])
   FUNC_2 ("Token too large on line %i\n",VAR_4);
 }

 *VAR_8 = 0;

 if (!FUNC_3 (VAR_5, "$include"))
 {
  FUNC_4 (VAR_1);
  FUNC_0 (VAR_5);
  return FUNC_4 (VAR_7);
 }

 return VAR_2;
}
