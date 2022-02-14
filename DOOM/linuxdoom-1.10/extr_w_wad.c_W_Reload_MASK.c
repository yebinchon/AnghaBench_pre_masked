
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* size; void* filepos; void* infotableofs; void* numlumps; } ;
typedef TYPE_1__ wadinfo_t ;
struct TYPE_8__ {void* size; void* position; } ;
typedef TYPE_2__ lumpinfo_t ;
typedef int header ;
typedef TYPE_1__ filelump_t ;


 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,void*,int ) ;
 scalar_t__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,TYPE_1__*,int) ;
 size_t VAR_5 ;
 int VAR_6 ;

void FUNC_8 (void)
{
    wadinfo_t VAR_7;
    int VAR_8;
    lumpinfo_t* VAR_9;
    unsigned VAR_10;
    int VAR_11;
    int VAR_12;
    filelump_t* VAR_13;

    if (!VAR_6)
 return;

    if ( (VAR_11 = FUNC_6 (VAR_6,VAR_1 | VAR_0)) == -1)
 FUNC_0 ("W_Reload: couldn't open %s",VAR_6);

    FUNC_7 (VAR_11, &VAR_7, sizeof(VAR_7));
    VAR_8 = FUNC_1(VAR_7.numlumps);
    VAR_7.infotableofs = FUNC_1(VAR_7.infotableofs);
    VAR_12 = VAR_8*sizeof(filelump_t);
    VAR_13 = FUNC_3 (VAR_12);
    FUNC_5 (VAR_11, VAR_7.infotableofs, VAR_2);
    FUNC_7 (VAR_11, VAR_13, VAR_12);


    VAR_9 = &VAR_4[VAR_5];

    for (VAR_10=VAR_5 ;
  VAR_10<VAR_5+VAR_8 ;
  VAR_10++,VAR_9++, VAR_13++)
    {
 if (VAR_3[VAR_10])
     FUNC_2 (VAR_3[VAR_10]);

 VAR_9->position = FUNC_1(VAR_13->filepos);
 VAR_9->size = FUNC_1(VAR_13->size);
    }

    FUNC_4 (VAR_11);
}
