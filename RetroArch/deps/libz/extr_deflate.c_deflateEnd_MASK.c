
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct internal_state_deflate* z_streamp ;
struct internal_state_deflate {int status; int window; int prev; int head; int pending_buf; struct internal_state_deflate* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct internal_state_deflate*,int ) ;
 int FUNC_1 (struct internal_state_deflate*,struct internal_state_deflate*) ;
 int VAR_7 ;
 struct internal_state_deflate* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_2 (z_streamp VAR_11)
{
   struct internal_state_deflate *VAR_12;
   int VAR_13;

   if (VAR_11 == VAR_8 || VAR_11->state == VAR_8) return VAR_10;
   VAR_12 = (struct internal_state_deflate*)VAR_11->state;

   VAR_13 = VAR_12->status;
   if (VAR_13 != VAR_5 &&
         VAR_13 != VAR_2 &&
         VAR_13 != VAR_6 &&
         VAR_13 != VAR_1 &&
         VAR_13 != VAR_4 &&
         VAR_13 != VAR_0 &&
         VAR_13 != VAR_3) {
      return VAR_10;
   }


   FUNC_0(VAR_11, VAR_12->pending_buf);
   FUNC_0(VAR_11, VAR_12->head);
   FUNC_0(VAR_11, VAR_12->prev);
   FUNC_0(VAR_11, VAR_12->window);

   FUNC_1(VAR_11, VAR_12);
   VAR_12 = VAR_8;

   return VAR_13 == VAR_0 ? VAR_7 : VAR_9;
}
