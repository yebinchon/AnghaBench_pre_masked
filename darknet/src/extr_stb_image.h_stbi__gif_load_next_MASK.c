
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ stbi_uc ;
typedef int stbi__int32 ;
struct TYPE_5__ {scalar_t__* out; int w; int h; scalar_t__* background; scalar_t__* history; int eflags; int line_size; int start_x; int start_y; int max_x; int max_y; int cur_x; int cur_y; int lflags; int step; int parse; int transparent; scalar_t__* color_table; int flags; int** pal; size_t bgindex; int delay; scalar_t__ lpal; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int,int) ;
 scalar_t__* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int*,int ) ;
 int FUNC_6 (int *,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__* FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static stbi_uc *FUNC_10(stbi__context *VAR_0, stbi__gif *VAR_1, int *VAR_2, int VAR_3, stbi_uc *VAR_4)
{
   int VAR_5;
   int VAR_6;
   int VAR_7;
   int VAR_8;


   VAR_6 = 0;
   if (VAR_1->out == 0) {
      if (!FUNC_5(VAR_0, VAR_1, VAR_2,0)) return 0;
      VAR_1->out = (stbi_uc *) FUNC_7(4 * VAR_1->w * VAR_1->h);
      VAR_1->background = (stbi_uc *) FUNC_7(4 * VAR_1->w * VAR_1->h);
      VAR_1->history = (stbi_uc *) FUNC_7(VAR_1->w * VAR_1->h);
      if (VAR_1->out == 0) return FUNC_2("outofmem", "Out of memory");




      FUNC_1( VAR_1->out, 0x00, 4 * VAR_1->w * VAR_1->h );
      FUNC_1( VAR_1->background, 0x00, 4 * VAR_1->w * VAR_1->h );
      FUNC_1( VAR_1->history, 0x00, VAR_1->w * VAR_1->h );
      VAR_6 = 1;
   } else {

      VAR_5 = (VAR_1->eflags & 0x1C) >> 2;
      VAR_8 = VAR_1->w * VAR_1->h;

      if ((VAR_5 == 3) && (VAR_4 == 0)) {
         VAR_5 = 2;
      }

      if (VAR_5 == 3) {
         for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
            if (VAR_1->history[VAR_7]) {
               FUNC_0( &VAR_1->out[VAR_7 * 4], &VAR_4[VAR_7 * 4], 4 );
            }
         }
      } else if (VAR_5 == 2) {

         for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
            if (VAR_1->history[VAR_7]) {
               FUNC_0( &VAR_1->out[VAR_7 * 4], &VAR_1->background[VAR_7 * 4], 4 );
            }
         }
      } else {




      }


      FUNC_0( VAR_1->background, VAR_1->out, 4 * VAR_1->w * VAR_1->h );
   }


   FUNC_1( VAR_1->history, 0x00, VAR_1->w * VAR_1->h );

   for (;;) {
      int VAR_9 = FUNC_4(VAR_0);
      switch (VAR_9) {
         case 0x2C:
         {
            stbi__int32 VAR_10, VAR_11, VAR_12, VAR_13;
            stbi_uc *VAR_14;

            VAR_10 = FUNC_3(VAR_0);
            VAR_11 = FUNC_3(VAR_0);
            VAR_12 = FUNC_3(VAR_0);
            VAR_13 = FUNC_3(VAR_0);
            if (((VAR_10 + VAR_12) > (VAR_1->w)) || ((VAR_11 + VAR_13) > (VAR_1->h)))
               return FUNC_2("bad Image Descriptor", "Corrupt GIF");

            VAR_1->line_size = VAR_1->w * 4;
            VAR_1->start_x = VAR_10 * 4;
            VAR_1->start_y = VAR_11 * VAR_1->line_size;
            VAR_1->max_x = VAR_1->start_x + VAR_12 * 4;
            VAR_1->max_y = VAR_1->start_y + VAR_13 * VAR_1->line_size;
            VAR_1->cur_x = VAR_1->start_x;
            VAR_1->cur_y = VAR_1->start_y;

            VAR_1->lflags = FUNC_4(VAR_0);

            if (VAR_1->lflags & 0x40) {
               VAR_1->step = 8 * VAR_1->line_size;
               VAR_1->parse = 3;
            } else {
               VAR_1->step = VAR_1->line_size;
               VAR_1->parse = 0;
            }

            if (VAR_1->lflags & 0x80) {
               FUNC_6(VAR_0,VAR_1->lpal, 2 << (VAR_1->lflags & 7), VAR_1->eflags & 0x01 ? VAR_1->transparent : -1);
               VAR_1->color_table = (stbi_uc *) VAR_1->lpal;
            } else if (VAR_1->flags & 0x80) {
               VAR_1->color_table = (stbi_uc *) VAR_1->pal;
            } else
               return FUNC_2("missing color table", "Corrupt GIF");

            VAR_14 = FUNC_8(VAR_0, VAR_1);
            if (VAR_14 == ((void*)0)) return ((void*)0);


            VAR_8 = VAR_1->w * VAR_1->h;
            if (VAR_6 && (VAR_1->bgindex > 0)) {

               for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
                  if (VAR_1->history[VAR_7] == 0) {
                     VAR_1->pal[VAR_1->bgindex][3] = 255;
                     FUNC_0( &VAR_1->out[VAR_7 * 4], &VAR_1->pal[VAR_1->bgindex], 4 );
                  }
               }
            }

            return VAR_14;
         }

         case 0x21:
         {
            int VAR_15;
            int VAR_16 = FUNC_4(VAR_0);
            if (VAR_16 == 0xF9) {
               VAR_15 = FUNC_4(VAR_0);
               if (VAR_15 == 4) {
                  VAR_1->eflags = FUNC_4(VAR_0);
                  VAR_1->delay = 10 * FUNC_3(VAR_0);


                  if (VAR_1->transparent >= 0) {
                     VAR_1->pal[VAR_1->transparent][3] = 255;
                  }
                  if (VAR_1->eflags & 0x01) {
                     VAR_1->transparent = FUNC_4(VAR_0);
                     if (VAR_1->transparent >= 0) {
                        VAR_1->pal[VAR_1->transparent][3] = 0;
                     }
                  } else {

                     FUNC_9(VAR_0, 1);
                     VAR_1->transparent = -1;
                  }
               } else {
                  FUNC_9(VAR_0, VAR_15);
                  break;
               }
            }
            while ((VAR_15 = FUNC_4(VAR_0)) != 0) {
               FUNC_9(VAR_0, VAR_15);
            }
            break;
         }

         case 0x3B:
            return (stbi_uc *) VAR_0;

         default:
            return FUNC_2("unknown code", "Corrupt GIF");
      }
   }
}
