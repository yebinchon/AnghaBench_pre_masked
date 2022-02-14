
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; int size; int position; } ;
typedef TYPE_1__ lumpinfo_t ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,void*,int) ;
 int VAR_5 ;

void
FUNC_5
( int VAR_6,
  void* VAR_7 )
{
    int VAR_8;
    lumpinfo_t* VAR_9;
    int VAR_10;

    if (VAR_6 >= VAR_4)
 FUNC_0 ("W_ReadLump: %i >= numlumps",VAR_6);

    VAR_9 = VAR_3+VAR_6;



    if (VAR_9->handle == -1)
    {

 if ( (VAR_10 = FUNC_3 (VAR_5,VAR_1 | VAR_0)) == -1)
     FUNC_0 ("W_ReadLump: couldn't open %s",VAR_5);
    }
    else
 VAR_10 = VAR_9->handle;

    FUNC_2 (VAR_10, VAR_9->position, VAR_2);
    VAR_8 = FUNC_4 (VAR_10, VAR_7, VAR_9->size);

    if (VAR_8 < VAR_9->size)
 FUNC_0 ("W_ReadLump: only read %i of %i on lump %i",
   VAR_8,VAR_9->size,VAR_6);

    if (VAR_9->handle == -1)
 FUNC_1 (VAR_10);


}
