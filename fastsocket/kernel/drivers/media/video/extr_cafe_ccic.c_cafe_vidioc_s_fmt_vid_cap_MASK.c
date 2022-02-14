
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sizeimage; int pixelformat; } ;
struct TYPE_3__ {TYPE_2__ pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cafe_format_struct {int mbus_code; } ;
struct cafe_camera {scalar_t__ state; scalar_t__ n_sbufs; scalar_t__ nbufs; scalar_t__ dma_buf_size; int s_mutex; TYPE_2__ pix_format; int mbus_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct cafe_camera*,int ) ;
 int FUNC_1 (struct cafe_camera*) ;
 int FUNC_2 (struct cafe_camera*) ;
 struct cafe_format_struct* FUNC_3 (int ) ;
 int FUNC_4 (struct cafe_camera*) ;
 int FUNC_5 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, void *VAR_4,
  struct v4l2_format *VAR_5)
{
 struct cafe_camera *VAR_6 = VAR_4;
 struct cafe_format_struct *VAR_7;
 int VAR_8;





 if (VAR_6->state != VAR_2 || VAR_6->n_sbufs > 0)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5->fmt.pix.pixelformat);




 VAR_8 = FUNC_5(VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  return VAR_8;




 FUNC_6(&VAR_6->s_mutex);
 VAR_6->pix_format = VAR_5->fmt.pix;
 VAR_6->mbus_code = VAR_7->mbus_code;




 VAR_8 = -VAR_1;
 if (VAR_6->nbufs > 0 && VAR_6->dma_buf_size < VAR_6->pix_format.sizeimage)
  FUNC_4(VAR_6);
 if (VAR_6->nbufs == 0) {
  if (FUNC_0(VAR_6, 0))
   goto out;
 }



 VAR_8 = FUNC_1(VAR_6);
 if (! VAR_8)
  VAR_8 = FUNC_2(VAR_6);
  out:
 FUNC_7(&VAR_6->s_mutex);
 return VAR_8;
}
