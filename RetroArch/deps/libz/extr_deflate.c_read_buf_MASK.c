
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct internal_state_deflate {int wrap; } ;
struct TYPE_3__ {unsigned int avail_in; unsigned int next_in; unsigned int total_in; int adler; scalar_t__ state; } ;
typedef int Bytef ;


 int FUNC_0 (int ,int *,unsigned int) ;
 int FUNC_1 (int ,int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(z_streamp VAR_0, Bytef *VAR_1, unsigned VAR_2)
{
   struct internal_state_deflate *VAR_3 = (struct internal_state_deflate*)VAR_0->state;
   unsigned VAR_4 = VAR_0->avail_in;

   if (VAR_4 > VAR_2) VAR_4 = VAR_2;
   if (VAR_4 == 0) return 0;

   VAR_0->avail_in -= VAR_4;

   FUNC_2(VAR_1, VAR_0->next_in, VAR_4);
   if (VAR_3->wrap == 1) {
      VAR_0->adler = FUNC_0(VAR_0->adler, VAR_1, VAR_4);
   }





   VAR_0->next_in += VAR_4;
   VAR_0->total_in += VAR_4;

   return (int)VAR_4;
}
