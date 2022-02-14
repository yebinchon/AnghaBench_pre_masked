
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_1__ lump_t ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

unsigned FUNC_2(lump_t *VAR_1) {
 return FUNC_1 (FUNC_0 (VAR_0 + VAR_1->fileofs, VAR_1->filelen));
}
