
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36050 {int width; int height; int total_code_vol; int real_code_vol; int max_block_vol; int name; } ;
struct videocodec {scalar_t__ data; } ;
struct vfe_settings {int width; int height; int decimation; int quality; int y; int x; } ;
struct vfe_polarity {int dummy; } ;
struct tvnorm {int VStart; int HStart; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_1 (struct zr36050*,int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct videocodec *VAR_1,
     struct tvnorm *VAR_2,
     struct vfe_settings *VAR_3,
     struct vfe_polarity *VAR_4)
{
 struct zr36050 *VAR_5 = (struct zr36050 *) VAR_1->data;
 int VAR_6;

 FUNC_0(2, "%s: set_video %d.%d, %d/%d-%dx%d (0x%x) q%d call\n",
  VAR_5->name, VAR_2->HStart, VAR_2->VStart,
  VAR_3->x, VAR_3->y, VAR_3->width, VAR_3->height,
  VAR_3->decimation, VAR_3->quality);



 VAR_5->width = VAR_3->width / (VAR_3->decimation & 0xff);
 VAR_5->height = VAR_3->height / ((VAR_3->decimation >> 8) & 0xff);


 VAR_6 = VAR_5->width * VAR_5->height;
 VAR_6 *= 16;

 VAR_6 = VAR_6 * VAR_3->quality / 200;


 if (VAR_6 < 8192)
  VAR_6 = 8192;

 if (VAR_6 > VAR_5->total_code_vol * 7)
  VAR_6 = VAR_5->total_code_vol * 7;

 VAR_5->real_code_vol = VAR_6 >> 3;



 FUNC_1(VAR_5, VAR_0, VAR_5->max_block_vol);

 return 0;
}
