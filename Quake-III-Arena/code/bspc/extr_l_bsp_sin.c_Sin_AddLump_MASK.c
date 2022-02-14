
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* filelen; void* fileofs; } ;
typedef TYPE_1__ sin_lump_t ;
struct TYPE_4__ {TYPE_1__* lumps; } ;


 int FUNC_0 (char*,int,int,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

void FUNC_4 (int VAR_2, void *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 sin_lump_t *VAR_7;
 int VAR_8;

 VAR_8 = VAR_4*VAR_5;

 if (VAR_4 > VAR_6)
  FUNC_0 ("Sin_WriteBSPFile: exceeded max size for lump %d size %d > maxsize %d\n", VAR_2, VAR_4, VAR_6 );

 VAR_7 = &VAR_0->lumps[VAR_2];

 VAR_7->fileofs = FUNC_1( FUNC_3(VAR_1) );
 VAR_7->filelen = FUNC_1(VAR_8);
 FUNC_2 (VAR_1, VAR_3, (VAR_8+3)&~3);
}
