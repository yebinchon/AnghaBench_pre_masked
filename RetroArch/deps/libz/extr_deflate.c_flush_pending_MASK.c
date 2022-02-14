
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_6__ {unsigned int pending; unsigned int pending_out; unsigned int pending_buf; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_5__ {unsigned int avail_out; unsigned int next_out; unsigned int total_out; scalar_t__ state; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(z_streamp VAR_0)
{
   unsigned VAR_1;
   deflate_state *VAR_2 = (deflate_state*)VAR_0->state;

   FUNC_0(VAR_2);
   VAR_1 = VAR_2->pending;
   if (VAR_1 > VAR_0->avail_out) VAR_1 = VAR_0->avail_out;
   if (VAR_1 == 0) return;

   FUNC_1(VAR_0->next_out, VAR_2->pending_out, VAR_1);
   VAR_0->next_out += VAR_1;
   VAR_2->pending_out += VAR_1;
   VAR_0->total_out += VAR_1;
   VAR_0->avail_out -= VAR_1;
   VAR_2->pending -= VAR_1;
   if (VAR_2->pending == 0) {
      VAR_2->pending_out = VAR_2->pending_buf;
   }
}
