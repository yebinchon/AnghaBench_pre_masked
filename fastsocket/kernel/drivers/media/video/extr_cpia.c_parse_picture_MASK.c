
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int* data; int count; } ;
struct TYPE_8__ {int systemState; int grabState; int streamState; int fatalError; int cmdError; int debugFlags; int vpStatus; int errorCode; } ;
struct TYPE_7__ {int yThreshold; int uvThreshold; } ;
struct TYPE_11__ {int colStart; int colEnd; int rowStart; int rowEnd; } ;
struct TYPE_12__ {TYPE_2__ status; TYPE_1__ yuvThreshold; TYPE_5__ roi; } ;
struct TYPE_10__ {int palette; } ;
struct cam_data {int* raw_image; int fps; TYPE_3__ decompressed_frame; int mmap_kludge; int param_lock; TYPE_6__ params; TYPE_4__ vp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int*,int*,int,int,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int*,int*,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct cam_data *VAR_16, int VAR_17)
{
 u8 *VAR_18, *VAR_19, *VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31;


 FUNC_4(&VAR_16->param_lock);

 VAR_18 = VAR_16->decompressed_frame.data;
 VAR_20 = VAR_18+VAR_1;
 VAR_19 = VAR_16->raw_image;
 VAR_26 = VAR_17;
 VAR_27 = VAR_16->vp.palette;

 if ((VAR_19[0] != VAR_6) || (VAR_19[1] != VAR_7)) {
  FUNC_1("header not found\n");
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }

 if ((VAR_19[16] != VAR_13) && (VAR_19[16] != VAR_12)) {
  FUNC_1("wrong video size\n");
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }

 if (VAR_19[17] != VAR_10 && VAR_19[17] != VAR_11) {
  FUNC_1("illegal subtype %d\n",VAR_19[17]);
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }
 VAR_31 = VAR_19[17] == VAR_11;

 if (VAR_19[18] != VAR_15 && VAR_19[18] != VAR_14) {
  FUNC_1("illegal yuvorder %d\n",VAR_19[18]);
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }
 VAR_22 = VAR_19[18] == VAR_14;

 if ((VAR_19[24] != VAR_16->params.roi.colStart) ||
     (VAR_19[25] != VAR_16->params.roi.colEnd) ||
     (VAR_19[26] != VAR_16->params.roi.rowStart) ||
     (VAR_19[27] != VAR_16->params.roi.rowEnd)) {
  FUNC_1("ROI mismatch\n");
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }
 VAR_29 = 8*(VAR_19[25] - VAR_19[24]);
 VAR_28 = 4*(VAR_19[27] - VAR_19[26]);


 if ((VAR_19[28] != VAR_8) && (VAR_19[28] != VAR_0)) {
  FUNC_1("illegal compression %d\n",VAR_19[28]);
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }
 VAR_23 = (VAR_19[28] == VAR_0);

 if (VAR_19[29] != VAR_9 && VAR_19[29] != VAR_2) {
  FUNC_1("illegal decimation %d\n",VAR_19[29]);
  FUNC_5(&VAR_16->param_lock);
  return -1;
 }
 VAR_24 = (VAR_19[29] == VAR_2);

 VAR_16->params.yuvThreshold.yThreshold = VAR_19[30];
 VAR_16->params.yuvThreshold.uvThreshold = VAR_19[31];
 VAR_16->params.status.systemState = VAR_19[32];
 VAR_16->params.status.grabState = VAR_19[33];
 VAR_16->params.status.streamState = VAR_19[34];
 VAR_16->params.status.fatalError = VAR_19[35];
 VAR_16->params.status.cmdError = VAR_19[36];
 VAR_16->params.status.debugFlags = VAR_19[37];
 VAR_16->params.status.vpStatus = VAR_19[38];
 VAR_16->params.status.errorCode = VAR_19[39];
 VAR_16->fps = VAR_19[41];
 FUNC_5(&VAR_16->param_lock);

 VAR_30 = FUNC_6(VAR_29, VAR_27);
 VAR_19 += VAR_5;
 VAR_17 -= VAR_5;
 VAR_21 = VAR_19[0] | (VAR_19[1] << 8);
 VAR_19 += 2;
 VAR_25 = 1;

 while (VAR_17 > 0) {
  VAR_17 -= (VAR_21+2);
  if (VAR_17 < 0) {
   FUNC_1("Insufficient data in buffer\n");
   return -1;
  }

  while (VAR_21 > 1) {
   if (!VAR_23 || (VAR_23 && !(*VAR_19 & 1))) {
    if(VAR_31 || VAR_25) {
    VAR_18 += FUNC_7(VAR_19, VAR_18, VAR_27,
         VAR_22, VAR_16->mmap_kludge);
    VAR_19 += 4;
    VAR_21 -= 4;
   } else {

     VAR_18 += FUNC_2(VAR_19, VAR_18,
          VAR_27, VAR_30,
          VAR_16->mmap_kludge);
     VAR_19 += 2;
     VAR_21 -= 2;
    }
   } else {

    VAR_18 += FUNC_6(*VAR_19 >> 1, VAR_27);
    if (VAR_18 > VAR_20) {
     FUNC_1("Insufficient buffer size\n");
     return -1;
    }
    ++VAR_19;
    VAR_21--;
   }
  }
  if (VAR_21 == 1) {
   if (*VAR_19 != VAR_4) {
    FUNC_0("EOL not found giving up after %d/%d"
        " bytes\n", VAR_26-VAR_17, VAR_26);
    return -1;
   }

   ++VAR_19;

   if ((VAR_17 > 3) && (VAR_19[0] == VAR_3) && (VAR_19[1] == VAR_3) &&
      (VAR_19[2] == VAR_3) && (VAR_19[3] == VAR_3)) {
    VAR_17 -= 4;
    break;
   }

   if(VAR_24) {

    VAR_18 += VAR_30;
   }

   if (VAR_17 > 1) {
    VAR_21 = VAR_19[0] | (VAR_19[1] << 8);
    VAR_19 += 2;
   }
   if(!VAR_24)
    VAR_25 = !VAR_25;
  } else {
   FUNC_1("line length was not 1 but %d after %d/%d bytes\n",
       VAR_21, VAR_26-VAR_17, VAR_26);
   return -1;
  }
 }

 if(VAR_24) {

  int VAR_32, VAR_33;
  u8 *VAR_34, *VAR_35;
  VAR_34 = VAR_16->decompressed_frame.data;
  VAR_18 = VAR_34+VAR_30;
  VAR_35 = VAR_18+VAR_30;
  for(VAR_32=1; VAR_32<VAR_28-1; VAR_32+=2) {
   for(VAR_33=0; VAR_33<VAR_30; ++VAR_33) {
    *VAR_18++ = ((int)*VAR_34++ + *VAR_35++) / 2;
   }
   VAR_34 += VAR_30;
   VAR_18 += VAR_30;
   VAR_35 += VAR_30;
  }

  FUNC_3(VAR_18, VAR_34, VAR_30);
 }

 VAR_16->decompressed_frame.count = VAR_18-VAR_16->decompressed_frame.data;

 return VAR_16->decompressed_frame.count;
}
