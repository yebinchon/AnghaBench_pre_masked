
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 char* FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_3( const char *VAR_4 )
{
 FILE *VAR_5;
 char *VAR_6;

 VAR_6 = FUNC_0( VAR_1->string, VAR_0, VAR_4 );

 VAR_5 = FUNC_2( VAR_6, "rb" );
 if (VAR_5) {
  FUNC_1( VAR_5 );
  return VAR_3;
 }
 return VAR_2;
}
