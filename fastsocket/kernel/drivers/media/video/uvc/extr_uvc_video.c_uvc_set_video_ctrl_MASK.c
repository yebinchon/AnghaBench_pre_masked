
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming_control {scalar_t__ bMaxVersion; scalar_t__ bMinVersion; scalar_t__ bPreferedVersion; scalar_t__ bmFramingInfo; int dwClockFrequency; int dwMaxPayloadTransferSize; int dwMaxVideoFrameSize; int wDelay; int wCompWindowSize; int wCompQuality; int wPFrameRate; int wKeyFrameRate; int dwFrameInterval; scalar_t__ bFrameIndex; scalar_t__ bFormatIndex; int bmHint; } ;
struct uvc_streaming {int intfnum; TYPE_1__* dev; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_2__ {int uvc_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,scalar_t__*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int ,char*,char*,int,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_7(struct uvc_streaming *VAR_8,
 struct uvc_streaming_control *VAR_9, int VAR_10)
{
 __u8 *VAR_11;
 __u16 VAR_12;
 int VAR_13;

 VAR_12 = VAR_8->dev->uvc_version >= 0x0110 ? 34 : 26;
 VAR_11 = FUNC_4(VAR_12, VAR_2);
 if (VAR_11 == ((void*)0))
  return -VAR_1;

 *(__le16 *)&VAR_11[0] = FUNC_1(VAR_9->bmHint);
 VAR_11[2] = VAR_9->bFormatIndex;
 VAR_11[3] = VAR_9->bFrameIndex;
 *(__le32 *)&VAR_11[4] = FUNC_2(VAR_9->dwFrameInterval);
 *(__le16 *)&VAR_11[8] = FUNC_1(VAR_9->wKeyFrameRate);
 *(__le16 *)&VAR_11[10] = FUNC_1(VAR_9->wPFrameRate);
 *(__le16 *)&VAR_11[12] = FUNC_1(VAR_9->wCompQuality);
 *(__le16 *)&VAR_11[14] = FUNC_1(VAR_9->wCompWindowSize);
 *(__le16 *)&VAR_11[16] = FUNC_1(VAR_9->wDelay);
 FUNC_5(VAR_9->dwMaxVideoFrameSize, &VAR_11[18]);
 FUNC_5(VAR_9->dwMaxPayloadTransferSize, &VAR_11[22]);

 if (VAR_12 == 34) {
  FUNC_5(VAR_9->dwClockFrequency, &VAR_11[26]);
  VAR_11[30] = VAR_9->bmFramingInfo;
  VAR_11[31] = VAR_9->bPreferedVersion;
  VAR_11[32] = VAR_9->bMinVersion;
  VAR_11[33] = VAR_9->bMaxVersion;
 }

 VAR_13 = FUNC_0(VAR_8->dev, VAR_4, 0, VAR_8->intfnum,
  VAR_10 ? VAR_6 : VAR_5, VAR_11,
  VAR_12, VAR_7);
 if (VAR_13 != VAR_12) {
  FUNC_6(VAR_3, "Failed to set UVC %s control : "
   "%d (exp. %u).\n", VAR_10 ? "probe" : "commit",
   VAR_13, VAR_12);
  VAR_13 = -VAR_0;
 }

 FUNC_3(VAR_11);
 return VAR_13;
}
