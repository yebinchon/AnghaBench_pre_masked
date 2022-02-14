
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* tag_commands; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_2 + 1, ((void*)0), 0) & 0xff;
 FUNC_1("Setting Global Tags= %d\n", VAR_3);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_1[VAR_4].tag_commands[VAR_5] = VAR_3;
  }
 }
}
