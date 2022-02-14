
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tag; } ;
typedef TYPE_1__ memblock_t ;
typedef int byte ;
struct TYPE_4__ {int name; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int** VAR_1 ;
 void** VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_4 ;
 size_t VAR_5 ;

void FUNC_4 (void)
{
    int VAR_6;
    memblock_t* VAR_7;
    void* VAR_8;
    char VAR_9;
    FILE* VAR_10;
    int VAR_11;
    char VAR_12[9];


    for (VAR_6=0 ; VAR_6<VAR_4 ; VAR_6++)
    {
 VAR_8 = VAR_2[VAR_6];
 if (!VAR_8)
 {
     VAR_9 = ' ';
     continue;
 }
 else
 {
     VAR_7 = (memblock_t *) ( (byte *)VAR_8 - sizeof(memblock_t));
     if (VAR_7->tag < VAR_0)
  VAR_9 = 'S';
     else
  VAR_9 = 'P';
 }
 VAR_1[VAR_6][VAR_5] = VAR_9;
    }
    VAR_5++;

    VAR_10 = FUNC_1 ("waddump.txt","w");
    VAR_12[8] = 0;

    for (VAR_6=0 ; VAR_6<VAR_4 ; VAR_6++)
    {
 FUNC_3 (VAR_12,VAR_3[VAR_6].name,8);

 for (VAR_11=0 ; VAR_11<8 ; VAR_11++)
     if (!VAR_12[VAR_11])
  break;

 for ( ; VAR_11<8 ; VAR_11++)
     VAR_12[VAR_11] = ' ';

 FUNC_2 (VAR_10,"%s ",VAR_12);

 for (VAR_11=0 ; VAR_11<VAR_5 ; VAR_11++)
     FUNC_2 (VAR_10,"    %c",VAR_1[VAR_6][VAR_11]);

 FUNC_2 (VAR_10,"\n");
    }
    FUNC_0 (VAR_10);
}
