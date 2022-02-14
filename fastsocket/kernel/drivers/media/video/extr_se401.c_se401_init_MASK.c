
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_se401 {unsigned char sizes; unsigned char* width; unsigned char* height; int maxframesize; unsigned char cwidth; unsigned char cheight; unsigned char brightness; int resetlevel; int rgain; int ggain; int bgain; int enhance; int * inturb; TYPE_1__* dev; int button; scalar_t__ readcount; scalar_t__ framecount; scalar_t__ error; scalar_t__ dropped; int palette; } ;
typedef int cp ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (unsigned char*) ;
 void* FUNC_3 (int,int ) ;
 int VAR_11 ;
 int FUNC_4 (struct usb_se401*,int) ;
 int FUNC_5 (int,struct usb_se401*,int ,int,unsigned char*,int) ;
 int FUNC_6 (char*,int,char*,...) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,TYPE_1__*,int ,int *,int,int ,struct usb_se401*,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct usb_se401 *VAR_12, int VAR_13)
{
 int VAR_14 = 0, VAR_15;
 unsigned char VAR_16[0x40];
 char VAR_17[200];
 int VAR_18;


 FUNC_5(1, VAR_12, VAR_8, 1, ((void*)0), 0);


 VAR_15 = FUNC_5(0, VAR_12, VAR_5, 0,
       VAR_16, sizeof(VAR_16));
 if (VAR_16[1] != 0x41) {
  FUNC_1("Wrong descriptor type");
  return 1;
 }
 VAR_18 = FUNC_6(VAR_17, 200, "ExtraFeatures: %d", VAR_16[3]);

 VAR_12->sizes = VAR_16[4] + VAR_16[5] * 256;
 VAR_12->width = FUNC_3(VAR_12->sizes*sizeof(int), VAR_0);
 if (!VAR_12->width)
  return 1;
 VAR_12->height = FUNC_3(VAR_12->sizes*sizeof(int), VAR_0);
 if (!VAR_12->height) {
  FUNC_2(VAR_12->width);
  return 1;
 }
 for (VAR_14 = 0; VAR_14 < VAR_12->sizes; VAR_14++) {
  VAR_12->width[VAR_14] = VAR_16[6 + VAR_14 * 4 + 0] + VAR_16[6 + VAR_14*4 + 1] * 256;
  VAR_12->height[VAR_14] = VAR_16[6 + VAR_14 * 4 + 2] + VAR_16[6 + VAR_14 * 4 + 3] * 256;
 }
 VAR_18 += FUNC_6(VAR_17 + VAR_18, 200 - VAR_18, " Sizes:");
 for (VAR_14 = 0; VAR_14 < VAR_12->sizes; VAR_14++) {
  VAR_18 += FUNC_6(VAR_17 + VAR_18, 200 - VAR_18,
   " %dx%d", VAR_12->width[VAR_14], VAR_12->height[VAR_14]);
 }
 FUNC_0(&VAR_12->dev->dev, "%s\n", VAR_17);
 VAR_12->maxframesize = VAR_12->width[VAR_12->sizes-1] *
     VAR_12->height[VAR_12->sizes - 1] * 3;

 VAR_15 = FUNC_5(0, VAR_12, VAR_7, 0, VAR_16, sizeof(VAR_16));
 VAR_12->cwidth = VAR_16[0]+VAR_16[1]*256;
 VAR_15 = FUNC_5(0, VAR_12, VAR_6, 0, VAR_16, sizeof(VAR_16));
 VAR_12->cheight = VAR_16[0]+VAR_16[1]*256;

 if (!(VAR_16[2] & VAR_2)) {
  FUNC_1("Bayer format not supported!");
  return 1;
 }

 FUNC_5(1, VAR_12, VAR_9,
      VAR_2, ((void*)0), 0);

 VAR_15 = FUNC_5(0, VAR_12, VAR_4, 0, VAR_16, sizeof(VAR_16));
 VAR_12->brightness = VAR_16[0]+VAR_16[1]*256;

 VAR_12->resetlevel = 0x2d;
 VAR_12->rgain = 0x20;
 VAR_12->ggain = 0x20;
 VAR_12->bgain = 0x20;
 FUNC_4(VAR_12, 20000);
 VAR_12->palette = VAR_10;
 VAR_12->enhance = 1;
 VAR_12->dropped = 0;
 VAR_12->error = 0;
 VAR_12->framecount = 0;
 VAR_12->readcount = 0;


 if (VAR_13) {
  VAR_12->inturb = FUNC_7(0, VAR_0);
  if (!VAR_12->inturb) {
   FUNC_0(&VAR_12->dev->dev,
     "Allocation of inturb failed\n");
   return 1;
  }
  FUNC_8(VAR_12->inturb, VAR_12->dev,
      FUNC_9(VAR_12->dev, VAR_1),
      &VAR_12->button, sizeof(VAR_12->button),
      VAR_11,
      VAR_12,
      8
  );
  if (FUNC_10(VAR_12->inturb, VAR_0)) {
   FUNC_0(&VAR_12->dev->dev, "int urb burned down\n");
   return 1;
  }
 } else
  VAR_12->inturb = ((void*)0);


 FUNC_5(1, VAR_12, VAR_3, 1, ((void*)0), 0);
 FUNC_5(1, VAR_12, VAR_8, 1, ((void*)0), 0);
 FUNC_5(1, VAR_12, VAR_3, 0, ((void*)0), 0);
 FUNC_5(1, VAR_12, VAR_8, 0, ((void*)0), 0);

 return 0;
}
