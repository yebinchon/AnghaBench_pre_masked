
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int size; int x; int y; } ;
struct TYPE_6__ {int size; int x; int y; } ;
struct TYPE_5__ {int x; int y; } ;
struct pwc_device {int pixfmt; unsigned char* image_data; TYPE_4__ view; TYPE_3__* images; TYPE_2__ image; TYPE_1__ offset; } ;
struct TYPE_7__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (unsigned char*,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct pwc_device *VAR_4)
{
 int VAR_5, VAR_6 = 0;


 switch (VAR_4->pixfmt) {
 case 128:
  VAR_6 = 6;
  break;
 case 130:
 case 129:
  VAR_6 = 6;
  break;
 }


 VAR_4->image.size = VAR_4->image.x * VAR_4->image.y * VAR_6 / 4;
 VAR_4->view.size = VAR_4->view.x * VAR_4->view.y * VAR_6 / 4;






 VAR_4->offset.x = ((VAR_4->view.x - VAR_4->image.x) / 2) & 0xFFFC;
 VAR_4->offset.y = ((VAR_4->view.y - VAR_4->image.y) / 2) & 0xFFFE;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  unsigned char *VAR_7 = VAR_4->image_data + VAR_4->images[VAR_5].offset;
  FUNC_0(VAR_7, VAR_2, VAR_4->view.x * VAR_4->view.y);
  VAR_7 += VAR_4->view.x * VAR_4->view.y;
  FUNC_0(VAR_7, VAR_0, VAR_4->view.x * VAR_4->view.y/4);
  VAR_7 += VAR_4->view.x * VAR_4->view.y/4;
  FUNC_0(VAR_7, VAR_1, VAR_4->view.x * VAR_4->view.y/4);
 }
}
