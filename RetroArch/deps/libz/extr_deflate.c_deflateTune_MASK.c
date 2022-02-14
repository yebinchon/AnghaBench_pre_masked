
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_6__ {int good_match; int max_lazy_match; int nice_match; int max_chain_length; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_5__ {struct TYPE_5__* state; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(z_streamp VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
   deflate_state *VAR_8;

   if (VAR_3 == VAR_0 || VAR_3->state == VAR_0) return VAR_2;
   VAR_8 = (deflate_state*)VAR_3->state;
   VAR_8->good_match = VAR_4;
   VAR_8->max_lazy_match = VAR_5;
   VAR_8->nice_match = VAR_6;
   VAR_8->max_chain_length = VAR_7;
   return VAR_1;
}
