
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_3__ {size_t buffer_size; int buffer; } ;
typedef TYPE_1__ IMG_TAPE_t ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(IMG_TAPE_t *VAR_0, size_t VAR_1)
{
 if (VAR_0->buffer_size < VAR_1) {

  VAR_0->buffer_size *= 2;
  if (VAR_0->buffer_size < VAR_1)
   VAR_0->buffer_size = VAR_1;
  VAR_0->buffer = FUNC_0(VAR_0->buffer, VAR_0->buffer_size * sizeof(UBYTE));
 }
}
