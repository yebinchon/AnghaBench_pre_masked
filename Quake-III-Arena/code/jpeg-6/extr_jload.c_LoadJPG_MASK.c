
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jpeg_error_mgr {int dummy; } ;
struct jpeg_decompress_struct {int output_width; int output_components; int output_height; int output_scanline; int err; } ;
typedef scalar_t__ fileHandle_t ;
typedef scalar_t__ JSAMPARRAY ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,scalar_t__*,int ) ;
 int VAR_0 ;
 unsigned char* FUNC_2 (int) ;
 int FUNC_3 (struct jpeg_decompress_struct*) ;
 int FUNC_4 (struct jpeg_decompress_struct*) ;
 int FUNC_5 (struct jpeg_decompress_struct*) ;
 int FUNC_6 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_7 (struct jpeg_decompress_struct*,scalar_t__,int) ;
 int FUNC_8 (struct jpeg_decompress_struct*) ;
 int FUNC_9 (struct jpeg_error_mgr*) ;
 int FUNC_10 (struct jpeg_decompress_struct*,scalar_t__) ;
 int VAR_1 ;

int FUNC_11( const char *VAR_2, unsigned char **VAR_3, int *VAR_4, int *VAR_5 ) {



  struct jpeg_decompress_struct VAR_6;
  struct jpeg_error_mgr VAR_7;

  fileHandle_t VAR_8;
  JSAMPARRAY VAR_9;
  int VAR_10;
  unsigned char *VAR_11;







  FUNC_1( VAR_2, &VAR_8, VAR_1 );
  if (VAR_8 == 0) {
    return 0;
  }
  VAR_6.err = FUNC_9(&VAR_7);


  FUNC_3(&VAR_6);



  FUNC_10(&VAR_6, VAR_8);



  (void) FUNC_6(&VAR_6, VAR_0);
  (void) FUNC_8(&VAR_6);
  VAR_10 = VAR_6.output_width * VAR_6.output_components;

  VAR_11 = FUNC_2(VAR_6.output_width*VAR_6.output_height*VAR_6.output_components);

  *VAR_3 = VAR_11;
  *VAR_4 = VAR_6.output_width;
  *VAR_5 = VAR_6.output_height;







  while (VAR_6.output_scanline < VAR_6.output_height) {




 VAR_9 = (JSAMPARRAY)VAR_11+(VAR_10*VAR_6.output_scanline);
    (void) FUNC_7(&VAR_6, VAR_9, 1);
  }



  (void) FUNC_5(&VAR_6);







  FUNC_4(&VAR_6);






  FUNC_0(VAR_8);






  return 1;
}
