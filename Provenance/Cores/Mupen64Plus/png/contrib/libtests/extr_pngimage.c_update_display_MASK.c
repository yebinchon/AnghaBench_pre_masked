
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct display {int chunks; int bit_depth; int color_type; int active_transforms; int ignored_transforms; int filter_method; int compression_method; int interlace_method; int height; int width; int * original_rows; int original_rowbytes; int * read_ip; int * original_ip; int * read_pp; int * original_pp; int original_file; } ;
typedef int png_uint_32 ;
typedef int * png_structp ;
typedef int * png_infop ;
struct TYPE_2__ {int transform; int valid_chunks; int color_mask_required; int color_mask_absent; int bit_depths; int when; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct display*,int ,char*) ;
 int FUNC_1 (int *,int *,int *,int *,int*,int*,int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct display*,int *,char*,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct display *VAR_5)



{
   png_structp VAR_6;
   png_infop VAR_7;


   FUNC_5(VAR_5, &VAR_5->original_file, "original read", 0 );


   VAR_5->original_pp = VAR_6 = VAR_5->read_pp, VAR_5->read_pp = ((void*)0);
   VAR_5->original_ip = VAR_7 = VAR_5->read_ip, VAR_5->read_ip = ((void*)0);

   VAR_5->original_rowbytes = FUNC_2(VAR_6, VAR_7);
   if (VAR_5->original_rowbytes == 0)
      FUNC_0(VAR_5, VAR_0, "png_get_rowbytes returned 0");

   VAR_5->chunks = FUNC_4(VAR_6, VAR_7, 0xffffffff);
   if ((VAR_5->chunks & VAR_1) == 0)
      FUNC_0(VAR_5, VAR_0, "png_read_png did not set IDAT flag");

   VAR_5->original_rows = FUNC_3(VAR_6, VAR_7);
   if (VAR_5->original_rows == ((void*)0))
      FUNC_0(VAR_5, VAR_0, "png_read_png did not create row buffers");

   if (!FUNC_1(VAR_6, VAR_7,
      &VAR_5->width, &VAR_5->height, &VAR_5->bit_depth, &VAR_5->color_type,
      &VAR_5->interlace_method, &VAR_5->compression_method, &VAR_5->filter_method))
      FUNC_0(VAR_5, VAR_0, "png_get_IHDR failed");





   {
      png_uint_32 VAR_8 = VAR_5->chunks;
      int VAR_9 = 0, VAR_10 = 0;
      int VAR_11 = VAR_5->color_type;
      int VAR_12 = VAR_5->bit_depth;
      unsigned int VAR_13;

      for (VAR_13=0; VAR_13<VAR_3; ++VAR_13) if (VAR_4[VAR_13].name != ((void*)0))
      {
         int VAR_14 = VAR_4[VAR_13].transform;

         if ((VAR_4[VAR_13].valid_chunks == 0 ||
               (VAR_4[VAR_13].valid_chunks & VAR_8) != 0) &&
            (VAR_4[VAR_13].color_mask_required & VAR_11) ==
               VAR_4[VAR_13].color_mask_required &&
            (VAR_4[VAR_13].color_mask_absent & VAR_11) == 0 &&
            (VAR_4[VAR_13].bit_depths & VAR_12) != 0 &&
            (VAR_4[VAR_13].when & VAR_2) != 0)
            VAR_9 |= VAR_14;

         else if ((VAR_4[VAR_13].when & VAR_2) != 0)
            VAR_10 |= VAR_14;
      }





      VAR_10 &= ~VAR_9;

      VAR_5->active_transforms = VAR_9;
      VAR_5->ignored_transforms = VAR_10;
   }
}
