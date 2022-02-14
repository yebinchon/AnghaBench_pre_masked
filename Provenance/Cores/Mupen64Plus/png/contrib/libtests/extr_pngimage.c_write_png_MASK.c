
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display {char* operation; int transforms; int color_type; int * write_pp; int filter_method; int compression_method; int interlace_method; int bit_depth; int height; int width; int written_file; } ;
typedef int png_infop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct display*) ;
 int VAR_6 ;
 int FUNC_2 (struct display*,int ,char*) ;
 int VAR_7 ;
 int * FUNC_3 (int ,struct display*,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int *,int ,int,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(struct display *VAR_9, png_infop VAR_10, int VAR_11)
{
   FUNC_1(VAR_9);

   FUNC_0(&VAR_9->written_file);
   VAR_9->operation = "write";
   VAR_9->transforms = VAR_11;

   VAR_9->write_pp = FUNC_3(VAR_2, VAR_9,
      VAR_6, VAR_7);

   if (VAR_9->write_pp == ((void*)0))
      FUNC_2(VAR_9, VAR_0, "failed to create write png_struct");

   FUNC_6(VAR_9->write_pp, &VAR_9->written_file, VAR_8,
      ((void*)0) );
   if (VAR_11 & (VAR_3|
                     VAR_4|
                     VAR_5))
   {
      int VAR_12 = VAR_9->color_type;

      if (VAR_11 & (VAR_4|
                        VAR_5))
         VAR_12 &= ~VAR_1;

      FUNC_4(VAR_9->write_pp, VAR_10, VAR_9->width, VAR_9->height, VAR_9->bit_depth, VAR_12,
         VAR_9->interlace_method, VAR_9->compression_method, VAR_9->filter_method);
   }

   FUNC_7(VAR_9->write_pp, VAR_10, VAR_11, ((void*)0) );




   FUNC_1(VAR_9);
}
