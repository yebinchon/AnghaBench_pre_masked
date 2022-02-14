
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lookahead; size_t strstart; scalar_t__ last_lit; scalar_t__ insert; int * window; scalar_t__ match_length; } ;
typedef TYPE_1__ deflate_state ;
typedef int block_state ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static block_state FUNC_4(deflate_state *VAR_6, int VAR_7)
{
   int VAR_8;

   for (;;) {

      if (VAR_6->lookahead == 0) {
         FUNC_3(VAR_6);
         if (VAR_6->lookahead == 0) {
            if (VAR_7 == VAR_1)
               return VAR_4;
            break;
         }
      }


      VAR_6->match_length = 0;
      FUNC_1((VAR_5,"%c", VAR_6->window[VAR_6->strstart]));
      FUNC_2 (VAR_6, VAR_6->window[VAR_6->strstart], VAR_8);
      VAR_6->lookahead--;
      VAR_6->strstart++;
      if (VAR_8) FUNC_0(VAR_6, 0);
   }
   VAR_6->insert = 0;
   if (VAR_7 == VAR_0) {
      FUNC_0(VAR_6, 1);
      return VAR_3;
   }
   if (VAR_6->last_lit)
      FUNC_0(VAR_6, 0);
   return VAR_2;
}
