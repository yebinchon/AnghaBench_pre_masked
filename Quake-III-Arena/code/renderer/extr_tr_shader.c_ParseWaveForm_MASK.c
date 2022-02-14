
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* frequency; void* phase; void* amplitude; void* base; int func; } ;
typedef TYPE_1__ waveForm_t ;
struct TYPE_7__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_6__ {int name; } ;


 char* FUNC_0 (char**,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 void* FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_8( char **VAR_4, waveForm_t *VAR_5 )
{
 char *VAR_6;

 VAR_6 = FUNC_0( VAR_4, VAR_1 );
 if ( VAR_6[0] == 0 )
 {
  VAR_2.Printf( VAR_0, "WARNING: missing waveform parm in shader '%s'\n", VAR_3.name );
  return;
 }
 VAR_5->func = FUNC_1( VAR_6 );


 VAR_6 = FUNC_0( VAR_4, VAR_1 );
 if ( VAR_6[0] == 0 )
 {
  VAR_2.Printf( VAR_0, "WARNING: missing waveform parm in shader '%s'\n", VAR_3.name );
  return;
 }
 VAR_5->base = FUNC_2( VAR_6 );

 VAR_6 = FUNC_0( VAR_4, VAR_1 );
 if ( VAR_6[0] == 0 )
 {
  VAR_2.Printf( VAR_0, "WARNING: missing waveform parm in shader '%s'\n", VAR_3.name );
  return;
 }
 VAR_5->amplitude = FUNC_2( VAR_6 );

 VAR_6 = FUNC_0( VAR_4, VAR_1 );
 if ( VAR_6[0] == 0 )
 {
  VAR_2.Printf( VAR_0, "WARNING: missing waveform parm in shader '%s'\n", VAR_3.name );
  return;
 }
 VAR_5->phase = FUNC_2( VAR_6 );

 VAR_6 = FUNC_0( VAR_4, VAR_1 );
 if ( VAR_6[0] == 0 )
 {
  VAR_2.Printf( VAR_0, "WARNING: missing waveform parm in shader '%s'\n", VAR_3.name );
  return;
 }
 VAR_5->frequency = FUNC_2( VAR_6 );
}
