
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sin_texinfo_t ;
typedef int sin_dheader_t ;
struct TYPE_8__ {scalar_t__ ident; scalar_t__ version; TYPE_1__* lumps; } ;
struct TYPE_7__ {int filelen; int fileofs; } ;
typedef int FILE ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_2__*,int,int,int *) ;
 int FUNC_8 (int *,int,int ) ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;

void FUNC_9 (char *VAR_9)
{
 int VAR_10;
 FILE *VAR_11;
 int VAR_12, VAR_13;

 VAR_6 = FUNC_2(sizeof(sin_dheader_t));

 VAR_11 = FUNC_6 (VAR_9, "rb");
 FUNC_7 (VAR_6, sizeof(sin_dheader_t), 1, VAR_11);


 for (VAR_10=0 ; VAR_10< sizeof(sin_dheader_t)/4 ; VAR_10++)
  ((int *)VAR_6)[VAR_10] = FUNC_3 ( ((int *)VAR_6)[VAR_10]);

 if (VAR_6->ident != VAR_3 && VAR_6->ident != VAR_1)
  FUNC_0 ("%s is not a IBSP file", VAR_9);
 if (VAR_6->version != VAR_4 && VAR_6->version != VAR_2)
  FUNC_0 ("%s is version %i, not %i", VAR_9, VAR_6->version, VAR_4);


 VAR_12 = VAR_6->lumps[VAR_5].filelen;
 VAR_13 = VAR_6->lumps[VAR_5].fileofs;

 FUNC_8 (VAR_11, VAR_13, VAR_0);
 FUNC_7 (VAR_8, VAR_12, 1, VAR_11);
 FUNC_5 (VAR_11);

 VAR_7 = VAR_12 / sizeof(sin_texinfo_t);

 FUNC_1(VAR_6);

 FUNC_4 (0);
}
