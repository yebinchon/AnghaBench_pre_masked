
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; int line; scalar_t__ buffer; scalar_t__ end_p; scalar_t__ script_p; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,void**) ;
 size_t VAR_0 ;
 int FUNC_3 (char*,char*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (char*,int ) ;

void FUNC_5( const char *VAR_3 ) {
 int VAR_4;

 VAR_1++;
 if (VAR_1 == &VAR_2[VAR_0])
  FUNC_0 ("script file exceeded MAX_INCLUDES");
 FUNC_4 (VAR_1->filename, FUNC_1 (VAR_3) );

 VAR_4 = FUNC_2 (VAR_1->filename, (void **)&VAR_1->buffer);

 FUNC_3 ("entering %s\n", VAR_1->filename);

 VAR_1->line = 1;

 VAR_1->script_p = VAR_1->buffer;
 VAR_1->end_p = VAR_1->buffer + VAR_4;
}
