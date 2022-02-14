
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct fsg_dev {int* cmnd; int data_size_from_cmnd; int cmnd_size; scalar_t__ data_dir; int residue; int filesem; TYPE_1__* curlun; scalar_t__ short_packet_received; scalar_t__ phase_error; struct fsg_buffhd* next_buffhd_to_fill; struct fsg_buffhd* next_buffhd_to_drain; } ;
struct fsg_buffhd {scalar_t__ state; TYPE_2__* inreq; } ;
struct TYPE_6__ {int cdrom; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int sense_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fsg_dev*,int,scalar_t__,int,int,char*) ;
 int VAR_9 ;
 int FUNC_1 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_2 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_3 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_4 (struct fsg_dev*) ;
 int FUNC_5 (struct fsg_dev*) ;
 int FUNC_6 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_7 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_8 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_9 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_10 (struct fsg_dev*,struct fsg_buffhd*) ;
 int FUNC_11 (struct fsg_dev*) ;
 int FUNC_12 (struct fsg_dev*) ;
 int FUNC_13 (struct fsg_dev*) ;
 int FUNC_14 (struct fsg_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct fsg_dev*) ;
 int FUNC_17 (int*) ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int ,int) ;
 TYPE_3__ VAR_10 ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (struct fsg_dev*) ;
 int FUNC_22 (char*,char*,int) ;
 int FUNC_23 (int *) ;

__attribute__((used)) static int FUNC_24(struct fsg_dev *VAR_11)
{
 struct fsg_buffhd *VAR_12;
 int VAR_13;
 int VAR_14 = -VAR_7;
 int VAR_15;
 static char VAR_16[16];

 FUNC_16(VAR_11);


 VAR_12 = VAR_11->next_buffhd_to_drain = VAR_11->next_buffhd_to_fill;
 while (VAR_12->state != VAR_0) {
  VAR_13 = FUNC_21(VAR_11);
  if (VAR_13)
   return VAR_13;
 }
 VAR_11->phase_error = 0;
 VAR_11->short_packet_received = 0;

 FUNC_15(&VAR_11->filesem);
 switch (VAR_11->cmnd[0]) {

 case 151:
  VAR_11->data_size_from_cmnd = VAR_11->cmnd[4];
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_4,
    (1<<4), 0,
    "INQUIRY")) == 0)
   VAR_14 = FUNC_1(VAR_11, VAR_12);
  break;

 case 149:
  VAR_11->data_size_from_cmnd = VAR_11->cmnd[4];
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_2,
    (1<<1) | (1<<4), 0,
    "MODE SELECT(6)")) == 0)
   VAR_14 = FUNC_2(VAR_11, VAR_12);
  break;

 case 150:
  VAR_11->data_size_from_cmnd = FUNC_17(&VAR_11->cmnd[7]);
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_2,
    (1<<1) | (3<<7), 0,
    "MODE SELECT(10)")) == 0)
   VAR_14 = FUNC_2(VAR_11, VAR_12);
  break;

 case 147:
  VAR_11->data_size_from_cmnd = VAR_11->cmnd[4];
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_4,
    (1<<1) | (1<<2) | (1<<4), 0,
    "MODE SENSE(6)")) == 0)
   VAR_14 = FUNC_3(VAR_11, VAR_12);
  break;

 case 148:
  VAR_11->data_size_from_cmnd = FUNC_17(&VAR_11->cmnd[7]);
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (1<<1) | (1<<2) | (3<<7), 0,
    "MODE SENSE(10)")) == 0)
   VAR_14 = FUNC_3(VAR_11, VAR_12);
  break;

 case 146:
  VAR_11->data_size_from_cmnd = 0;
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_3,
    (1<<4), 0,
    "PREVENT-ALLOW MEDIUM REMOVAL")) == 0)
   VAR_14 = FUNC_4(VAR_11);
  break;

 case 143:
  VAR_15 = VAR_11->cmnd[4];
  VAR_11->data_size_from_cmnd = (VAR_15 == 0 ? 256 : VAR_15) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_4,
    (7<<1) | (1<<4), 1,
    "READ(6)")) == 0)
   VAR_14 = FUNC_5(VAR_11);
  break;

 case 145:
  VAR_11->data_size_from_cmnd =
    FUNC_17(&VAR_11->cmnd[7]) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (1<<1) | (0xf<<2) | (3<<7), 1,
    "READ(10)")) == 0)
   VAR_14 = FUNC_5(VAR_11);
  break;

 case 144:
  VAR_11->data_size_from_cmnd =
    FUNC_18(&VAR_11->cmnd[6]) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 12, VAR_4,
    (1<<1) | (0xf<<2) | (0xf<<6), 1,
    "READ(12)")) == 0)
   VAR_14 = FUNC_5(VAR_11);
  break;

 case 142:
  VAR_11->data_size_from_cmnd = 8;
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (0xf<<2) | (1<<8), 1,
    "READ CAPACITY")) == 0)
   VAR_14 = FUNC_6(VAR_11, VAR_12);
  break;

 case 140:
  if (!VAR_10.cdrom)
   goto unknown_cmnd;
  VAR_11->data_size_from_cmnd = FUNC_17(&VAR_11->cmnd[7]);
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (3<<7) | (0x1f<<1), 1,
    "READ HEADER")) == 0)
   VAR_14 = FUNC_8(VAR_11, VAR_12);
  break;

 case 139:
  if (!VAR_10.cdrom)
   goto unknown_cmnd;
  VAR_11->data_size_from_cmnd = FUNC_17(&VAR_11->cmnd[7]);
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (7<<6) | (1<<1), 1,
    "READ TOC")) == 0)
   VAR_14 = FUNC_9(VAR_11, VAR_12);
  break;

 case 141:
  VAR_11->data_size_from_cmnd = FUNC_17(&VAR_11->cmnd[7]);
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_4,
    (3<<7), 1,
    "READ FORMAT CAPACITIES")) == 0)
   VAR_14 = FUNC_7(VAR_11, VAR_12);
  break;

 case 137:
  VAR_11->data_size_from_cmnd = VAR_11->cmnd[4];
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_4,
    (1<<4), 0,
    "REQUEST SENSE")) == 0)
   VAR_14 = FUNC_10(VAR_11, VAR_12);
  break;

 case 134:
  VAR_11->data_size_from_cmnd = 0;
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_3,
    (1<<1) | (1<<4), 0,
    "START-STOP UNIT")) == 0)
   VAR_14 = FUNC_11(VAR_11);
  break;

 case 133:
  VAR_11->data_size_from_cmnd = 0;
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_3,
    (0xf<<2) | (3<<7), 1,
    "SYNCHRONIZE CACHE")) == 0)
   VAR_14 = FUNC_12(VAR_11);
  break;

 case 132:
  VAR_11->data_size_from_cmnd = 0;
  VAR_14 = FUNC_0(VAR_11, 6, VAR_3,
    0, 1,
    "TEST UNIT READY");
  break;



 case 131:
  VAR_11->data_size_from_cmnd = 0;
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_3,
    (1<<1) | (0xf<<2) | (3<<7), 1,
    "VERIFY")) == 0)
   VAR_14 = FUNC_13(VAR_11);
  break;

 case 128:
  VAR_15 = VAR_11->cmnd[4];
  VAR_11->data_size_from_cmnd = (VAR_15 == 0 ? 256 : VAR_15) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 6, VAR_2,
    (7<<1) | (1<<4), 1,
    "WRITE(6)")) == 0)
   VAR_14 = FUNC_14(VAR_11);
  break;

 case 130:
  VAR_11->data_size_from_cmnd =
    FUNC_17(&VAR_11->cmnd[7]) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 10, VAR_2,
    (1<<1) | (0xf<<2) | (3<<7), 1,
    "WRITE(10)")) == 0)
   VAR_14 = FUNC_14(VAR_11);
  break;

 case 129:
  VAR_11->data_size_from_cmnd =
    FUNC_18(&VAR_11->cmnd[6]) << 9;
  if ((VAR_14 = FUNC_0(VAR_11, 12, VAR_2,
    (1<<1) | (0xf<<2) | (0xf<<6), 1,
    "WRITE(12)")) == 0)
   VAR_14 = FUNC_14(VAR_11);
  break;





 case 152:
 case 138:
 case 136:
 case 135:


 default:
 unknown_cmnd:
  VAR_11->data_size_from_cmnd = 0;
  FUNC_22(VAR_16, "Unknown x%02x", VAR_11->cmnd[0]);
  if ((VAR_14 = FUNC_0(VAR_11, VAR_11->cmnd_size,
    VAR_5, 0xff, 0, VAR_16)) == 0) {
   VAR_11->curlun->sense_data = VAR_8;
   VAR_14 = -VAR_7;
  }
  break;
 }
 FUNC_23(&VAR_11->filesem);

 if (VAR_14 == -VAR_6 || FUNC_20(VAR_9))
  return -VAR_6;


 if (VAR_14 == -VAR_7)
  VAR_14 = 0;
 if (VAR_14 >= 0 && VAR_11->data_dir == VAR_4) {
  VAR_14 = FUNC_19((u32) VAR_14, VAR_11->data_size_from_cmnd);
  VAR_12->inreq->length = VAR_14;
  VAR_12->state = VAR_1;
  VAR_11->residue -= VAR_14;
 }

 return 0;
}
