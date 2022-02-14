
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_20__ {int colStart; int rowStart; int colEnd; int rowEnd; } ;
struct TYPE_19__ {int videoSize; } ;
struct TYPE_16__ {scalar_t__ systemState; int fatalError; int vpStatus; } ;
struct TYPE_15__ {int vendor; int product; } ;
struct TYPE_14__ {int qx3_detected; } ;
struct TYPE_13__ {int gainMode; } ;
struct TYPE_12__ {int firmwareVersion; int firmwareRevision; } ;
struct TYPE_11__ {int streamStartLine; TYPE_9__ roi; TYPE_8__ format; TYPE_5__ status; TYPE_4__ pnpID; TYPE_3__ qx3; TYPE_2__ exposure; TYPE_1__ version; } ;
struct sd {int first_frame; int fps; int cam_exposure; scalar_t__ exposure_count; int exposure_status; TYPE_10__ params; } ;
struct TYPE_18__ {TYPE_6__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int width; int height; TYPE_7__ cam; } ;
struct TYPE_17__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 int FUNC_12 (struct gspca_dev*) ;
 int FUNC_13 (struct gspca_dev*) ;
 int FUNC_14 (struct gspca_dev*) ;
 int FUNC_15 (struct gspca_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_16 (struct gspca_dev*) ;
 int FUNC_17 (struct gspca_dev*) ;
 int FUNC_18 (struct gspca_dev*) ;
 int FUNC_19 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_20(struct gspca_dev *VAR_18)
{
 struct sd *VAR_19 = (struct sd *) VAR_18;
 int VAR_20, VAR_21;


 if (FUNC_18(VAR_18)) {
  if (VAR_19->params.status.systemState != VAR_17) {
   FUNC_0(VAR_8, "unexpected systemstate: %02x",
          VAR_19->params.status.systemState);
   FUNC_19(&VAR_19->params);
   return -VAR_10;
  }


  VAR_21 = FUNC_17(VAR_18);
  if (VAR_21)
   return VAR_21;

  VAR_21 = FUNC_15(VAR_18, VAR_0,
     0, 0, 0, 0);
  if (VAR_21)
   return VAR_21;

  VAR_21 = FUNC_18(VAR_18);
  if (VAR_21)
   return VAR_21;
 }




 VAR_19->params.version.firmwareVersion = 0;
 FUNC_16(VAR_18);
 if (VAR_19->params.version.firmwareVersion != 1) {
  FUNC_0(VAR_8, "only firmware version 1 is supported (got: %d)",
         VAR_19->params.version.firmwareVersion);
  return -VAR_10;
 }


 if (VAR_19->params.version.firmwareRevision <= 2 &&
     VAR_19->params.exposure.gainMode > 2) {
  VAR_19->params.exposure.gainMode = 2;
 }


 VAR_19->params.qx3.qx3_detected = (VAR_19->params.pnpID.vendor == 0x0813 &&
           VAR_19->params.pnpID.product == 0x0001);






 VAR_21 = FUNC_15(VAR_18, VAR_3,
    VAR_13, 0, VAR_14, 0);
 if (VAR_21)
  return VAR_21;


 VAR_21 = FUNC_17(VAR_18);
 if (VAR_21)
  return VAR_21;


 VAR_21 = FUNC_15(VAR_18, VAR_1, 0, 0, 0, 0);
 if (VAR_21)
  return VAR_21;

 if (VAR_19->params.status.fatalError) {
  FUNC_0(VAR_8, "fatal_error: %04x, vp_status: %04x",
         VAR_19->params.status.fatalError,
         VAR_19->params.status.vpStatus);
  return -VAR_9;
 }



 VAR_21 = FUNC_15(VAR_18, VAR_2, 0, 0, 0, 0);
 if (VAR_21)
  return VAR_21;


 VAR_19->params.streamStartLine = 120;

 VAR_20 = VAR_18->cam.cam_mode[VAR_18->curr_mode].priv;
 if (VAR_20 & 0x01) {
  VAR_19->params.roi.colStart = 2;
  VAR_19->params.roi.rowStart = 6;
 } else {
  VAR_19->params.roi.colStart = 0;
  VAR_19->params.roi.rowStart = 0;
 }

 if (VAR_20 & 0x02) {
  VAR_19->params.format.videoSize = VAR_16;
  VAR_19->params.roi.colStart /= 2;
  VAR_19->params.roi.rowStart /= 2;
  VAR_19->params.streamStartLine /= 2;
 } else
  VAR_19->params.format.videoSize = VAR_15;

 VAR_19->params.roi.colEnd = VAR_19->params.roi.colStart +
    (VAR_18->width >> 3);
 VAR_19->params.roi.rowEnd = VAR_19->params.roi.rowStart +
    (VAR_18->height >> 2);


 VAR_21 = FUNC_15(VAR_18, VAR_5,
    VAR_7, 0, 0, 0);
 if (VAR_21)
  return VAR_21;


 VAR_21 = FUNC_15(VAR_18, VAR_4,
    VAR_6,
    VAR_12, 0, 0);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_7(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_5(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_11(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_14(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_8(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_6(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_9(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_4(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_12(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_3(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_10(VAR_18);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_13(VAR_18);
 if (VAR_21)
  return VAR_21;


 VAR_21 = FUNC_2(VAR_18);
 if (VAR_21)
  return VAR_21;



 VAR_19->first_frame = 6;
 VAR_19->exposure_status = VAR_11;
 VAR_19->exposure_count = 0;
 FUNC_1(&VAR_19->cam_exposure, 0);
 FUNC_1(&VAR_19->fps, 0);

 return 0;
}
