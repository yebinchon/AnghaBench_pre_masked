
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {TYPE_1__* lumps; } ;
struct TYPE_3__ {int filelen; int fileofs; } ;


 int FUNC_0 (char*,...) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (void*,int *,int) ;

int FUNC_2 (int VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_0->lumps[VAR_1].filelen;
 VAR_6 = VAR_0->lumps[VAR_1].fileofs;

 if (VAR_5 % VAR_3)
  FUNC_0 ("Sin_LoadBSPFile: odd lump size");

   if ((VAR_5/VAR_3) > VAR_4)
      FUNC_0 ("Sin_LoadBSPFile: exceeded max size for lump %d size %d > maxsize %d\n", VAR_1, (VAR_5/VAR_3), VAR_4 );

 FUNC_1 (VAR_2, (byte *)VAR_0 + VAR_6, VAR_5);

 return VAR_5 / VAR_3;
}
