
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ block_length; int file; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(IMG_TAPE_t *VAR_1)
{
 if (VAR_1->block_length > 0)
  return FUNC_0(VAR_1) && FUNC_1(VAR_1->file) == 0;
 return VAR_0;
}
