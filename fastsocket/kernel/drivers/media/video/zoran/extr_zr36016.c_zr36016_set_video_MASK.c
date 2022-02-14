
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zr36016 {int xdec; int ydec; scalar_t__ yoff; scalar_t__ xoff; int height; int width; int name; } ;
struct videocodec {scalar_t__ data; } ;
struct vfe_settings {int decimation; scalar_t__ y; int x; int height; int width; } ;
struct vfe_polarity {int dummy; } ;
struct tvnorm {int HStart; scalar_t__ VStart; } ;


 int FUNC_0 (int,char*,int ,int,scalar_t__,int ,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_1 (struct videocodec *VAR_0,
     struct tvnorm *VAR_1,
     struct vfe_settings *VAR_2,
     struct vfe_polarity *VAR_3)
{
 struct zr36016 *VAR_4 = (struct zr36016 *) VAR_0->data;

 FUNC_0(2, "%s: set_video %d.%d, %d/%d-%dx%d (0x%x) call\n",
  VAR_4->name, VAR_1->HStart, VAR_1->VStart,
  VAR_2->x, VAR_2->y, VAR_2->width, VAR_2->height,
  VAR_2->decimation);




 VAR_4->width = VAR_2->width;
 VAR_4->height = VAR_2->height;






 VAR_4->xoff = (VAR_1->HStart ? VAR_1->HStart : 1) + VAR_2->x;




 VAR_4->yoff = VAR_1->VStart + VAR_2->y;

 VAR_4->xdec = ((VAR_2->decimation & 0xff) == 1) ? 0 : 1;
 VAR_4->ydec = (((VAR_2->decimation >> 8) & 0xff) == 1) ? 0 : 1;

 return 0;
}
