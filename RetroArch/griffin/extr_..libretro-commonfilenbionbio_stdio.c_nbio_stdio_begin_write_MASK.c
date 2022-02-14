
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nbio_stdio_t {scalar_t__ op; scalar_t__ progress; int f; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
   struct nbio_stdio_t *VAR_3 = (struct nbio_stdio_t*)VAR_2;
   if (!VAR_3)
      return;

   if (VAR_3->op >= 0)
      FUNC_0();

   FUNC_1(VAR_3->f, 0, VAR_1);
   VAR_3->op = VAR_0;
   VAR_3->progress = 0;
}
