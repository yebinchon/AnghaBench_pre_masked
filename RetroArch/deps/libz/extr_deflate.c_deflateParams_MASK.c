
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_8__ {size_t level; int strategy; scalar_t__ pending; int max_chain_length; int nice_match; int good_match; int max_lazy_match; } ;
typedef TYPE_2__ deflate_state ;
typedef int compress_func ;
struct TYPE_9__ {int max_chain; int nice_length; int good_length; int max_lazy; int func; } ;
struct TYPE_7__ {scalar_t__ total_in; struct TYPE_7__* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(z_streamp VAR_8, int VAR_9, int VAR_10)
{
   deflate_state *VAR_11;
   compress_func VAR_12;
   int VAR_13 = VAR_5;

   if (VAR_8 == VAR_4 || VAR_8->state == VAR_4) return VAR_6;
   VAR_11 = (deflate_state*)VAR_8->state;




   if (VAR_9 == VAR_2) VAR_9 = 6;

   if (VAR_9 < 0 || VAR_9 > 9 || VAR_10 < 0 || VAR_10 > VAR_3) {
      return VAR_6;
   }
   VAR_12 = VAR_7[VAR_11->level].func;

   if ((VAR_10 != VAR_11->strategy || VAR_12 != VAR_7[VAR_9].func) &&
         VAR_8->total_in != 0) {

      VAR_13 = FUNC_0(VAR_8, VAR_0);
      if (VAR_13 == VAR_1 && VAR_11->pending == 0)
         VAR_13 = VAR_5;
   }
   if (VAR_11->level != VAR_9) {
      VAR_11->level = VAR_9;
      VAR_11->max_lazy_match = VAR_7[VAR_9].max_lazy;
      VAR_11->good_match = VAR_7[VAR_9].good_length;
      VAR_11->nice_match = VAR_7[VAR_9].nice_length;
      VAR_11->max_chain_length = VAR_7[VAR_9].max_chain;
   }
   VAR_11->strategy = VAR_10;
   return VAR_13;
}
