
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; } ;
struct TYPE_6__ {int length; int index; TYPE_2__ m; int memory; int field; int type; } ;
struct cafe_sio_buffer {TYPE_3__ v4lbuf; struct cafe_camera* cam; scalar_t__ mapcount; int * buffer; int list; } ;
struct TYPE_4__ {int sizeimage; } ;
struct cafe_camera {TYPE_1__ pix_format; struct cafe_sio_buffer* sb_bufs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cafe_camera *VAR_4, int VAR_5)
{
 struct cafe_sio_buffer *VAR_6 = VAR_4->sb_bufs + VAR_5;

 FUNC_0(&VAR_6->list);
 VAR_6->v4lbuf.length = FUNC_1(VAR_4->pix_format.sizeimage);
 VAR_6->buffer = FUNC_2(VAR_6->v4lbuf.length);
 if (VAR_6->buffer == ((void*)0))
  return -VAR_0;
 VAR_6->mapcount = 0;
 VAR_6->cam = VAR_4;

 VAR_6->v4lbuf.index = VAR_5;
 VAR_6->v4lbuf.type = VAR_1;
 VAR_6->v4lbuf.field = VAR_2;
 VAR_6->v4lbuf.memory = VAR_3;






 VAR_6->v4lbuf.m.offset = 2*VAR_5*VAR_6->v4lbuf.length;
 return 0;
}
