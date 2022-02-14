
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int string; } ;
typedef int FILE ;


 char* FUNC_0 (int ,char const*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;

qboolean FUNC_4( const char *VAR_3 )
{
 FILE *VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_0( VAR_0->string, VAR_3, "");
 VAR_5[FUNC_3(VAR_5)-1] = '\0';

 VAR_4 = FUNC_2( VAR_5, "rb" );
 if (VAR_4) {
  FUNC_1( VAR_4 );
  return VAR_2;
 }
 return VAR_1;
}
