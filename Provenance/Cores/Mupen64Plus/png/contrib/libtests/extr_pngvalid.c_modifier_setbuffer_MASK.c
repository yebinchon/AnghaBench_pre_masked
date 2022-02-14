
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ buffer_position; int buffer; scalar_t__ buffer_count; } ;
typedef TYPE_1__ png_modifier ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(png_modifier *VAR_0)
{
   FUNC_0(VAR_0->buffer);
   VAR_0->buffer_count = FUNC_1(VAR_0->buffer)+12;
   VAR_0->buffer_position = 0;
}
