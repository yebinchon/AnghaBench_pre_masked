
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {int ms; int s; int m; int h; int timestr; scalar_t__ jiffies; int mv_count; } ;
struct timeval {int dummy; } ;
struct TYPE_2__ {int height; int width; int state; struct timeval ts; int field_count; } ;
struct vivi_buffer {TYPE_1__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct vivi_dev*,int,char*,int ,unsigned long,int) ;
 int FUNC_2 (struct vivi_fh*,char*,int ,int,int,int,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,char*,int) ;
 int FUNC_7 (int ,char*,int,int,int,int) ;
 void* FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct vivi_fh *VAR_3, struct vivi_buffer *VAR_4)
{
 struct vivi_dev *VAR_5 = VAR_3->dev;
 int VAR_6 , VAR_7 = 0;
 int VAR_8 = VAR_4->vb.height;
 int VAR_9 = VAR_4->vb.width;
 struct timeval VAR_10;
 char *VAR_11;
 void *VAR_12 = FUNC_8(&VAR_4->vb);

 if (!VAR_12)
  return;

 VAR_11 = FUNC_5(VAR_9 * 2, VAR_0);
 if (!VAR_11)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  FUNC_2(VAR_3, VAR_11, 0, VAR_9, VAR_8, VAR_6, VAR_5->mv_count,
    VAR_5->timestr);
  FUNC_6(VAR_12 + VAR_7, VAR_11, VAR_9 * 2);
  VAR_7 += VAR_9*2;
 }

 VAR_5->mv_count++;

 FUNC_4(VAR_11);



 VAR_5->ms += FUNC_3(VAR_2-VAR_5->jiffies);
 VAR_5->jiffies = VAR_2;
 if (VAR_5->ms >= 1000) {
  VAR_5->ms -= 1000;
  VAR_5->s++;
  if (VAR_5->s >= 60) {
   VAR_5->s -= 60;
   VAR_5->m++;
   if (VAR_5->m > 60) {
    VAR_5->m -= 60;
    VAR_5->h++;
    if (VAR_5->h > 24)
     VAR_5->h -= 24;
   }
  }
 }
 FUNC_7(VAR_5->timestr, "%02d:%02d:%02d:%03d",
   VAR_5->h, VAR_5->m, VAR_5->s, VAR_5->ms);

 FUNC_1(VAR_5, 2, "vivifill at %s: Buffer 0x%08lx size= %d\n",
   VAR_5->timestr, (unsigned long)VAR_11, VAR_7);


 VAR_4->vb.field_count++;
 FUNC_0(&VAR_10);
 VAR_4->vb.ts = VAR_10;
 VAR_4->vb.state = VAR_1;
}
