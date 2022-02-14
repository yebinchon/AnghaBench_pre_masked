
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t textureoffset; size_t rowoffset; int * sector; void* midtexture; void* bottomtexture; void* toptexture; } ;
typedef TYPE_1__ side_t ;
struct TYPE_7__ {int sector; int midtexture; int bottomtexture; int toptexture; int rowoffset; int textureoffset; } ;
typedef TYPE_2__ mapsidedef_t ;
typedef int byte ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_7 (int VAR_6)
{
    byte* VAR_7;
    int VAR_8;
    mapsidedef_t* VAR_9;
    side_t* VAR_10;

    VAR_3 = FUNC_3 (VAR_6) / sizeof(mapsidedef_t);
    VAR_5 = FUNC_5 (VAR_3*sizeof(side_t),VAR_1,0);
    FUNC_6 (VAR_5, 0, VAR_3*sizeof(side_t));
    VAR_7 = FUNC_2 (VAR_6,VAR_2);

    VAR_9 = (mapsidedef_t *)VAR_7;
    VAR_10 = VAR_5;
    for (VAR_8=0 ; VAR_8<VAR_3 ; VAR_8++, VAR_9++, VAR_10++)
    {
 VAR_10->textureoffset = FUNC_1(VAR_9->textureoffset)<<VAR_0;
 VAR_10->rowoffset = FUNC_1(VAR_9->rowoffset)<<VAR_0;
 VAR_10->toptexture = FUNC_0(VAR_9->toptexture);
 VAR_10->bottomtexture = FUNC_0(VAR_9->bottomtexture);
 VAR_10->midtexture = FUNC_0(VAR_9->midtexture);
 VAR_10->sector = &VAR_4[FUNC_1(VAR_9->sector)];
    }

    FUNC_4 (VAR_7);
}
