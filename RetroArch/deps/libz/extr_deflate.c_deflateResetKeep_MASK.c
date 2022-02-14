
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
struct TYPE_9__ {int wrap; int last_flush; int status; int pending_buf; int pending_out; scalar_t__ pending; } ;
typedef TYPE_2__ deflate_state ;
struct TYPE_8__ {int adler; struct TYPE_8__* state; int data_type; struct TYPE_8__* msg; scalar_t__ total_out; scalar_t__ total_in; struct TYPE_8__* zfree; struct TYPE_8__* zalloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (long,TYPE_1__*,int ) ;
 int FUNC_2 (long,TYPE_1__*,int ) ;

int FUNC_3 (z_streamp VAR_7)
{
   deflate_state *VAR_8;

   if (VAR_7 == VAR_3 || VAR_7->state == VAR_3 ||
         VAR_7->zalloc == VAR_3 || VAR_7->zfree == VAR_3) {
      return VAR_5;
   }

   VAR_7->total_in = VAR_7->total_out = 0;
   VAR_7->msg = VAR_3;
   VAR_7->data_type = VAR_6;

   VAR_8 = (deflate_state *)VAR_7->state;
   VAR_8->pending = 0;
   VAR_8->pending_out = VAR_8->pending_buf;

   if (VAR_8->wrap < 0) {
      VAR_8->wrap = -VAR_8->wrap;
   }
   VAR_8->status = VAR_8->wrap ? VAR_1 : VAR_0;
   VAR_7->adler =



      FUNC_1(0L, VAR_3, 0);
   VAR_8->last_flush = VAR_2;

   FUNC_0(VAR_8);

   return VAR_4;
}
