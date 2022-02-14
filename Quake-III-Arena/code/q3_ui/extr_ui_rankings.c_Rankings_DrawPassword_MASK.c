
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int password ;
struct TYPE_4__ {char* buffer; int cursor; } ;
struct TYPE_5__ {TYPE_1__ field; } ;
typedef TYPE_2__ menufield_s ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*) ;

void FUNC_4( void* VAR_1 )
{
 menufield_s* VAR_2;
 char VAR_3[VAR_0];
 int VAR_4;
 int VAR_5;
 char* VAR_6;

 VAR_2 = (menufield_s*)VAR_1;


 for( VAR_6 = VAR_2->field.buffer; *VAR_6 != '\0'; VAR_6++ )
 {

  if( !( ( (*VAR_6) >= '0' && (*VAR_6) <= '9') || FUNC_0(*VAR_6)) )
  {
   *VAR_6 = '\0';
  }
 }

 VAR_4 = FUNC_3( VAR_2->field.buffer );
 if( VAR_2->field.cursor > VAR_4 )
 {
  VAR_2->field.cursor = VAR_4;
 }


 FUNC_1( VAR_3, VAR_2->field.buffer, sizeof(VAR_3) );


 for( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ )
 {
  VAR_2->field.buffer[VAR_5] = '*';
 }


 FUNC_2( VAR_2 );



 FUNC_1( VAR_2->field.buffer, VAR_3, sizeof(VAR_2->field.buffer) );
}
