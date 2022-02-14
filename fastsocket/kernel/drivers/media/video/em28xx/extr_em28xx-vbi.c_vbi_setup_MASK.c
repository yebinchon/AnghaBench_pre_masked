
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {struct em28xx_fh* priv_data; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int vbi_width; int vbi_height; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_1, unsigned int *VAR_2, unsigned int *VAR_3)
{
 struct em28xx_fh *VAR_4 = VAR_1->priv_data;
 struct em28xx *VAR_5 = VAR_4->dev;

 *VAR_3 = VAR_5->vbi_width * VAR_5->vbi_height * 2;

 if (0 == *VAR_2)
  *VAR_2 = VAR_0;
 if (*VAR_2 < 2)
  *VAR_2 = 2;
 if (*VAR_2 > 32)
  *VAR_2 = 32;
 return 0;
}
