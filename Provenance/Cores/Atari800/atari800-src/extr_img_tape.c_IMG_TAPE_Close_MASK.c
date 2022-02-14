
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* buffer; int file; scalar_t__ was_writing; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(IMG_TAPE_t *VAR_0)
{
 if (VAR_0->was_writing)
  FUNC_0(VAR_0);
 FUNC_1(VAR_0->file);
 FUNC_2(VAR_0->buffer);
 FUNC_2(VAR_0);
}
