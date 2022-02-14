
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int * image; } ;
typedef TYPE_1__ CARTRIDGE_image_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(CARTRIDGE_image_t *VAR_2)
{
 if (VAR_2->image != ((void*)0)) {
  FUNC_1(VAR_2->image);
  VAR_2->image = ((void*)0);
 }
 if (VAR_2->type != VAR_0) {
  VAR_2->type = VAR_0;
  if (VAR_2 == VAR_1)
   FUNC_0();
 }
}
