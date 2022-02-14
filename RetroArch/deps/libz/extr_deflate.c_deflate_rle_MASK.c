
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_7__ {scalar_t__ lookahead; scalar_t__ match_length; scalar_t__ strstart; scalar_t__* window; int window_size; scalar_t__ last_lit; scalar_t__ insert; } ;
typedef TYPE_1__ deflate_state ;
typedef int block_state ;
typedef scalar_t__ Bytef ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static block_state FUNC_6(deflate_state *VAR_8, int VAR_9)
{
   int VAR_10;
   uInt VAR_11;
   Bytef *VAR_12, *VAR_13;

   for (;;) {




      if (VAR_8->lookahead <= VAR_0) {
         FUNC_5(VAR_8);
         if (VAR_8->lookahead <= VAR_0 && VAR_9 == VAR_3) {
            return VAR_6;
         }
         if (VAR_8->lookahead == 0) break;
      }


      VAR_8->match_length = 0;
      if (VAR_8->lookahead >= VAR_1 && VAR_8->strstart > 0) {
         VAR_12 = VAR_8->window + VAR_8->strstart - 1;
         VAR_11 = *VAR_12;
         if (VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12) {
            VAR_13 = VAR_8->window + VAR_8->strstart + VAR_0;
            do {
            } while (VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12 &&
                  VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12 &&
                  VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12 &&
                  VAR_11 == *++VAR_12 && VAR_11 == *++VAR_12 &&
                  VAR_12 < VAR_13);
            VAR_8->match_length = VAR_0 - (int)(VAR_13 - VAR_12);
            if (VAR_8->match_length > VAR_8->lookahead)
               VAR_8->match_length = VAR_8->lookahead;
         }
         FUNC_0(VAR_12 <= VAR_8->window+(uInt)(VAR_8->window_size-1), "wild scan");
      }


      if (VAR_8->match_length >= VAR_1) {
         FUNC_3(VAR_8, 1, VAR_8->match_length - VAR_1, VAR_10);

         VAR_8->lookahead -= VAR_8->match_length;
         VAR_8->strstart += VAR_8->match_length;
         VAR_8->match_length = 0;
      } else {

         FUNC_2((VAR_7,"%c", VAR_8->window[VAR_8->strstart]));
         FUNC_4 (VAR_8, VAR_8->window[VAR_8->strstart], VAR_10);
         VAR_8->lookahead--;
         VAR_8->strstart++;
      }
      if (VAR_10) FUNC_1(VAR_8, 0);
   }
   VAR_8->insert = 0;
   if (VAR_9 == VAR_2) {
      FUNC_1(VAR_8, 1);
      return VAR_5;
   }
   if (VAR_8->last_lit)
      FUNC_1(VAR_8, 0);
   return VAR_4;
}
