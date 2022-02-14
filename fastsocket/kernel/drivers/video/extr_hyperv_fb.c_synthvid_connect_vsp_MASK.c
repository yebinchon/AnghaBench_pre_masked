
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvfb_par {scalar_t__ synthvid_version; } ;
struct hv_device {int channel; } ;
struct fb_info {struct hvfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct fb_info* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct hv_device*,scalar_t__) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *,int ,int ,struct hv_device*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_13)
{
 struct fb_info *VAR_14 = FUNC_0(VAR_13);
 struct hvfb_par *VAR_15 = VAR_14->par;
 int VAR_16;

 VAR_16 = FUNC_4(VAR_13->channel, VAR_0, VAR_0,
    ((void*)0), 0, VAR_11, VAR_13);
 if (VAR_16) {
  FUNC_1("Unable to open vmbus channel\n");
  return VAR_16;
 }


 if (VAR_12 == VAR_8 ||
     VAR_12 == VAR_7)
  VAR_16 = FUNC_2(VAR_13, VAR_5);
 else
  VAR_16 = FUNC_2(VAR_13, VAR_6);

 if (VAR_16) {
  FUNC_1("Synthetic video device version not accepted\n");
  goto error;
 }

 if (VAR_15->synthvid_version == VAR_5) {
  VAR_9 = VAR_1;
  VAR_10 = VAR_3;
 } else {
  VAR_9 = VAR_2;
  VAR_10 = VAR_4;
 }

 return 0;

error:
 FUNC_3(VAR_13->channel);
 return VAR_16;
}
