
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jpeg_error_mgr {int dummy; } ;
struct jpeg_compress_struct {int image_width; int image_height; int input_components; int next_scanline; int in_color_space; int err; } ;
struct TYPE_2__ {unsigned char* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned char*) ;int (* FS_WriteFile ) (char*,unsigned char*,int ) ;} ;
typedef unsigned char* JSAMPROW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jpeg_compress_struct*,unsigned char*,int) ;
 int FUNC_1 (struct jpeg_compress_struct*) ;
 int FUNC_2 (struct jpeg_compress_struct*) ;
 int FUNC_3 (struct jpeg_compress_struct*) ;
 int FUNC_4 (struct jpeg_compress_struct*) ;
 int FUNC_5 (struct jpeg_compress_struct*,int,int ) ;
 int FUNC_6 (struct jpeg_compress_struct*,int ) ;
 int FUNC_7 (struct jpeg_error_mgr*) ;
 int FUNC_8 (struct jpeg_compress_struct*,unsigned char**,int) ;
 TYPE_1__ VAR_3 ;
 unsigned char* FUNC_9 (int) ;
 int FUNC_10 (char*,unsigned char*,int ) ;
 int FUNC_11 (unsigned char*) ;

void FUNC_12(char * VAR_4, int VAR_5, int VAR_6, int VAR_7, unsigned char *VAR_8) {






  struct jpeg_compress_struct VAR_9;
  struct jpeg_error_mgr VAR_10;

  JSAMPROW VAR_11[1];
  int VAR_12;
  unsigned char *VAR_13;
  VAR_9.err = FUNC_7(&VAR_10);

  FUNC_1(&VAR_9);
  VAR_13 = VAR_3.Hunk_AllocateTempMemory(VAR_6*VAR_7*4);
  FUNC_0(&VAR_9, VAR_13, VAR_6*VAR_7*4);






  VAR_9.image_width = VAR_6;
  VAR_9.image_height = VAR_7;
  VAR_9.input_components = 4;
  VAR_9.in_color_space = VAR_0;




  FUNC_4(&VAR_9);



  FUNC_5(&VAR_9, VAR_5, VAR_1 );






  FUNC_6(&VAR_9, VAR_1);
  VAR_12 = VAR_6 * 4;

  while (VAR_9.next_scanline < VAR_9.image_height) {




    VAR_11[0] = & VAR_8[((VAR_9.image_height-1)*VAR_12)-VAR_9.next_scanline * VAR_12];
    (void) FUNC_8(&VAR_9, VAR_11, 1);
  }



  FUNC_3(&VAR_9);

  VAR_3.FS_WriteFile( VAR_4, VAR_13, VAR_2 );

  VAR_3.Hunk_FreeTempMemory(VAR_13);




  FUNC_2(&VAR_9);


}
