
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct em28xx_fh* private_data; } ;
struct em28xx_fh {int users; int state; int open; int vb_vbiq; int vb_vidq; int udev; scalar_t__ alt; int v4l2_dev; struct em28xx_fh* dev; } ;
struct em28xx {int users; int state; int open; int vb_vbiq; int vb_vidq; int udev; scalar_t__ alt; int v4l2_dev; struct em28xx* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct em28xx_fh*) ;
 int FUNC_2 (struct em28xx_fh*,int ) ;
 int FUNC_3 (struct em28xx_fh*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct em28xx_fh*) ;
 scalar_t__ FUNC_6 (struct em28xx_fh*,int ) ;
 int FUNC_7 (struct em28xx_fh*,int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_6->private_data;
 struct em28xx *VAR_8 = VAR_7->dev;
 int VAR_9;

 FUNC_4("users=%d\n", VAR_8->users);

 if (FUNC_6(VAR_7, VAR_2)) {
  FUNC_11(&VAR_7->vb_vidq);
  FUNC_7(VAR_7, VAR_2);
 }

 if (FUNC_6(VAR_7, VAR_1)) {
  FUNC_11(&VAR_7->vb_vbiq);
  FUNC_7(VAR_7, VAR_1);
 }

 if (VAR_8->users == 1) {


  if (VAR_8->state & VAR_0) {
   FUNC_1(VAR_8);
   FUNC_5(VAR_8);
   return 0;
  }


  FUNC_9(&VAR_8->v4l2_dev, 0, VAR_4, VAR_5, 0);


  FUNC_3(VAR_8);
  FUNC_2(VAR_8, VAR_3);


  VAR_8->alt = 0;
  FUNC_4("setting alternate 0\n");
  VAR_9 = FUNC_8(VAR_8->udev, 0, 0);
  if (VAR_9 < 0) {
   FUNC_0("cannot change alternate number to "
     "0 (error=%i)\n", VAR_9);
  }
 }

 FUNC_10(&VAR_7->vb_vidq);
 FUNC_10(&VAR_7->vb_vbiq);
 FUNC_5(VAR_7);
 VAR_8->users--;
 FUNC_12(&VAR_8->open, 1);
 return 0;
}
