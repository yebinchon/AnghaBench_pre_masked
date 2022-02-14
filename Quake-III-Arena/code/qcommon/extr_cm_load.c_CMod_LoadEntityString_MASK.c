
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;
struct TYPE_5__ {int entityString; int numEntityChars; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_2( lump_t *VAR_3 ) {
 VAR_0.entityString = FUNC_1( VAR_3->filelen, VAR_2 );
 VAR_0.numEntityChars = VAR_3->filelen;
 FUNC_0 (VAR_0.entityString, VAR_1 + VAR_3->fileofs, VAR_3->filelen);
}
