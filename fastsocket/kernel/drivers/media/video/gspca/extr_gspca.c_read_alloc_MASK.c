
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int count; int index; void* memory; void* type; } ;
struct v4l2_buffer {int count; int index; void* memory; void* type; } ;
struct gspca_dev {scalar_t__ nframes; int nbufread; void* memory; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 void* VAR_2 ;
 int FUNC_1 (struct v4l2_requestbuffers*,int ,int) ;
 int FUNC_2 (struct file*,struct gspca_dev*,struct v4l2_requestbuffers*) ;
 int FUNC_3 (struct file*,struct gspca_dev*,struct v4l2_requestbuffers*) ;
 int FUNC_4 (struct file*,struct gspca_dev*,void*) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_3,
   struct file *VAR_4)
{
 struct v4l2_buffer VAR_5;
 int VAR_6, VAR_7;

 FUNC_0(VAR_0, "read alloc");
 if (VAR_3->nframes == 0) {
  struct v4l2_requestbuffers VAR_8;

  FUNC_1(&VAR_8, 0, sizeof VAR_8);
  VAR_8.count = VAR_3->nbufread;
  VAR_8.type = VAR_2;
  VAR_8.memory = VAR_1;
  VAR_7 = FUNC_3(VAR_4, VAR_3, &VAR_8);
  if (VAR_7 != 0) {
   FUNC_0(VAR_0, "read reqbuf err %d", VAR_7);
   return VAR_7;
  }
  FUNC_1(&VAR_5, 0, sizeof VAR_5);
  VAR_5.type = VAR_2;
  VAR_5.memory = VAR_1;
  for (VAR_6 = 0; VAR_6 < VAR_3->nbufread; VAR_6++) {
   VAR_5.index = VAR_6;
   VAR_7 = FUNC_2(VAR_4, VAR_3, &VAR_5);
   if (VAR_7 != 0) {
    FUNC_0(VAR_0, "read qbuf err: %d", VAR_7);
    return VAR_7;
   }
  }
  VAR_3->memory = VAR_1;
 }


 VAR_7 = FUNC_4(VAR_4, VAR_3, VAR_2);
 if (VAR_7 != 0)
  FUNC_0(VAR_0, "read streamon err %d", VAR_7);
 return VAR_7;
}
