
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* filelen; void* fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_5__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ dheader_t ;
typedef int FILE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3( FILE *VAR_0, dheader_t *VAR_1, int VAR_2, const void *VAR_3, int VAR_4 ) {
 lump_t *VAR_5;

 VAR_5 = &VAR_1->lumps[VAR_2];

 VAR_5->fileofs = FUNC_0( FUNC_2(VAR_0) );
 VAR_5->filelen = FUNC_0( VAR_4 );
 FUNC_1( VAR_0, VAR_3, (VAR_4+3)&~3 );
}
