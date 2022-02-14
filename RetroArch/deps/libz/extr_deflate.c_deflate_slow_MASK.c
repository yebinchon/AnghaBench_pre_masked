
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_13__ {scalar_t__ lookahead; scalar_t__ strstart; int prev_length; int match_length; scalar_t__ prev_match; scalar_t__ match_start; scalar_t__ max_lazy_match; scalar_t__ strategy; int match_available; int insert; scalar_t__ last_lit; int * window; TYPE_1__* strm; } ;
typedef TYPE_2__ deflate_state ;
typedef int block_state ;
struct TYPE_12__ {scalar_t__ avail_out; } ;
typedef scalar_t__ IPos ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static block_state FUNC_10(deflate_state *VAR_11, int VAR_12)
{
   IPos VAR_13;
   int VAR_14;


   for (;;) {





      if (VAR_11->lookahead < VAR_0) {
         FUNC_8(VAR_11);
         if (VAR_11->lookahead < VAR_0 && VAR_12 == VAR_6) {
            return VAR_9;
         }
         if (VAR_11->lookahead == 0) break;
      }




      VAR_13 = VAR_2;
      if (VAR_11->lookahead >= VAR_1) {
         FUNC_3(VAR_11, VAR_11->strstart, VAR_13);
      }



      VAR_11->prev_length = VAR_11->match_length, VAR_11->prev_match = VAR_11->match_start;
      VAR_11->match_length = VAR_1-1;

      if (VAR_13 != VAR_2 && VAR_11->prev_length < VAR_11->max_lazy_match &&
            VAR_11->strstart - VAR_13 <= FUNC_4(VAR_11)) {




         VAR_11->match_length = FUNC_9 (VAR_11, VAR_13);


         if (VAR_11->match_length <= 5 && (VAR_11->strategy == VAR_4

                  || (VAR_11->match_length == VAR_1 &&
                     VAR_11->strstart - VAR_11->match_start > VAR_3)

                  )) {




            VAR_11->match_length = VAR_1-1;
         }
      }



      if (VAR_11->prev_length >= VAR_1 && VAR_11->match_length <= VAR_11->prev_length) {
         uInt VAR_15 = VAR_11->strstart + VAR_11->lookahead - VAR_1;


         FUNC_6(VAR_11, VAR_11->strstart -1 - VAR_11->prev_match,
               VAR_11->prev_length - VAR_1, VAR_14);






         VAR_11->lookahead -= VAR_11->prev_length-1;
         VAR_11->prev_length -= 2;
         do {
            if (++VAR_11->strstart <= VAR_15) {
               FUNC_3(VAR_11, VAR_11->strstart, VAR_13);
            }
         } while (--VAR_11->prev_length != 0);
         VAR_11->match_available = 0;
         VAR_11->match_length = VAR_1-1;
         VAR_11->strstart++;

         if (VAR_14) FUNC_1(VAR_11, 0);

      } else if (VAR_11->match_available) {




         FUNC_5((VAR_10,"%c", VAR_11->window[VAR_11->strstart-1]));
         FUNC_7(VAR_11, VAR_11->window[VAR_11->strstart-1], VAR_14);
         if (VAR_14) {
            FUNC_2(VAR_11, 0);
         }
         VAR_11->strstart++;
         VAR_11->lookahead--;
         if (VAR_11->strm->avail_out == 0) return VAR_9;
      } else {



         VAR_11->match_available = 1;
         VAR_11->strstart++;
         VAR_11->lookahead--;
      }
   }
   FUNC_0 (VAR_12 != VAR_6, "no flush?");
   if (VAR_11->match_available) {
      FUNC_5((VAR_10,"%c", VAR_11->window[VAR_11->strstart-1]));
      FUNC_7(VAR_11, VAR_11->window[VAR_11->strstart-1], VAR_14);
      VAR_11->match_available = 0;
   }
   VAR_11->insert = VAR_11->strstart < VAR_1-1 ? VAR_11->strstart : VAR_1-1;
   if (VAR_12 == VAR_5) {
      FUNC_1(VAR_11, 1);
      return VAR_8;
   }
   if (VAR_11->last_lit)
      FUNC_1(VAR_11, 0);
   return VAR_7;
}
