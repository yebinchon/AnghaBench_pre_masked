
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eia608_screen {int empty; scalar_t__* row_used; scalar_t__** fonts; scalar_t__** colors; scalar_t__** characters; } ;


 size_t VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (scalar_t__*,char,size_t) ;

__attribute__((used)) static void FUNC_1 (struct eia608_screen *VAR_3)
{
    int VAR_4;

    for (VAR_4=0;VAR_4<15;VAR_4++)
    {
        FUNC_0(VAR_3->characters[VAR_4],' ',VAR_0);
        VAR_3->characters[VAR_4][VAR_0]=0;
        FUNC_0 (VAR_3->colors[VAR_4],VAR_2,VAR_0+1);
        FUNC_0 (VAR_3->fonts[VAR_4],VAR_1,VAR_0+1);
        VAR_3->row_used[VAR_4]=0;
    }
    VAR_3->empty=1;
}
