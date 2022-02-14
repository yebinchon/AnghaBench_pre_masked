
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* conv_buffer; struct TYPE_4__* empty_buf; } ;
typedef TYPE_1__ gl_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(gl_t *VAR_1)
{
   if (VAR_1)
   {
      if (VAR_1->empty_buf)
         FUNC_0(VAR_1->empty_buf);
      if (VAR_1->conv_buffer)
         FUNC_0(VAR_1->conv_buffer);
      FUNC_0(VAR_1);
   }

   VAR_0 = 0;

   FUNC_1();
}
