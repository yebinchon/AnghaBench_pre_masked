
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jpeg_error_mgr {int dummy; } ;
struct jpeg_decompress_struct {int output_width; int output_components; int output_height; int output_scanline; int err; } ;
typedef int byte ;
struct TYPE_2__ {unsigned char* (* Malloc ) (int) ;int (* FS_FreeFile ) (int*) ;int (* FS_ReadFile ) (char*,void**) ;} ;
typedef int** JSAMPARRAY ;


 int VAR_0 ;
 int FUNC_0 (struct jpeg_decompress_struct*) ;
 int FUNC_1 (struct jpeg_decompress_struct*) ;
 int FUNC_2 (struct jpeg_decompress_struct*) ;
 int FUNC_3 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_4 (struct jpeg_decompress_struct*,int**,int) ;
 int FUNC_5 (struct jpeg_decompress_struct*) ;
 int FUNC_6 (struct jpeg_error_mgr*) ;
 int FUNC_7 (struct jpeg_decompress_struct*,int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_8 (char*,void**) ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (int*) ;

__attribute__((used)) static void FUNC_11( const char *VAR_2, unsigned char **VAR_3, int *VAR_4, int *VAR_5 ) {



  struct jpeg_decompress_struct VAR_6;
  struct jpeg_error_mgr VAR_7;

  JSAMPARRAY VAR_8;
  int VAR_9;
  unsigned char *VAR_10;
  byte *VAR_11;
  byte *VAR_12;







  VAR_1.FS_ReadFile ( ( char * ) VAR_2, (void **)&VAR_11);
  if (!VAR_11) {
 return;
  }
  VAR_6.err = FUNC_6(&VAR_7);


  FUNC_0(&VAR_6);



  FUNC_7(&VAR_6, VAR_11);



  (void) FUNC_3(&VAR_6, VAR_0);
  (void) FUNC_5(&VAR_6);
  VAR_9 = VAR_6.output_width * VAR_6.output_components;

  VAR_10 = VAR_1.Malloc(VAR_6.output_width*VAR_6.output_height*VAR_6.output_components);

  *VAR_3 = VAR_10;
  *VAR_4 = VAR_6.output_width;
  *VAR_5 = VAR_6.output_height;







  while (VAR_6.output_scanline < VAR_6.output_height) {




 VAR_12 = ((VAR_10+(VAR_9*VAR_6.output_scanline)));
 VAR_8 = &VAR_12;
    (void) FUNC_4(&VAR_6, VAR_8, 1);
  }


  {
   int VAR_13, VAR_14;
  byte *VAR_15;

  VAR_15 = *VAR_3;

   VAR_14 = VAR_6.output_width * VAR_6.output_height * 4;
   for ( VAR_13 = 3 ; VAR_13 < VAR_14 ; VAR_13+=4 ) {
    VAR_15[VAR_13] = 255;
   }
  }



  (void) FUNC_2(&VAR_6);







  FUNC_1(&VAR_6);






  VAR_1.FS_FreeFile (VAR_11);






}
