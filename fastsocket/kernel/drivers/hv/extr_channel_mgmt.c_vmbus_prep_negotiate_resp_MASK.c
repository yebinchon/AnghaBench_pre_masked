
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vmbuspipe_hdr {int dummy; } ;
struct icmsg_negotiate {int icframe_vercnt; int icmsg_vercnt; TYPE_1__* icversion_data; } ;
struct icmsg_hdr {int icmsgsize; } ;
struct TYPE_2__ {int major; int minor; } ;



bool FUNC_0(struct icmsg_hdr *VAR_0,
    struct icmsg_negotiate *VAR_1, u8 *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13;
 bool VAR_14 = 0;

 VAR_0->icmsgsize = 0x10;
 VAR_9 = (VAR_3 >> 16);
 VAR_10 = (VAR_3 & 0xFFFF);

 VAR_11 = (VAR_4 >> 16);
 VAR_12 = (VAR_4 & 0xFFFF);

 VAR_1 = (struct icmsg_negotiate *)&VAR_2[
  sizeof(struct vmbuspipe_hdr) +
  sizeof(struct icmsg_hdr)];

 VAR_5 = VAR_1->icframe_vercnt;
 VAR_6 = 0;

 VAR_7 = VAR_1->icmsg_vercnt;
 VAR_8 = 0;






 for (VAR_13 = 0; VAR_13 < VAR_1->icframe_vercnt; VAR_13++) {
  if ((VAR_1->icversion_data[VAR_13].major == VAR_9) &&
     (VAR_1->icversion_data[VAR_13].minor == VAR_10)) {
   VAR_5 = VAR_1->icversion_data[VAR_13].major;
   VAR_6 = VAR_1->icversion_data[VAR_13].minor;
   VAR_14 = 1;
  }
 }

 if (!VAR_14)
  goto fw_error;

 VAR_14 = 0;

 for (VAR_13 = VAR_1->icframe_vercnt;
   (VAR_13 < VAR_1->icframe_vercnt + VAR_1->icmsg_vercnt); VAR_13++) {
  if ((VAR_1->icversion_data[VAR_13].major == VAR_11) &&
     (VAR_1->icversion_data[VAR_13].minor == VAR_12)) {
   VAR_7 = VAR_1->icversion_data[VAR_13].major;
   VAR_8 = VAR_1->icversion_data[VAR_13].minor;
   VAR_14 = 1;
  }
 }






fw_error:
 if (!VAR_14) {
  VAR_1->icframe_vercnt = 0;
  VAR_1->icmsg_vercnt = 0;
 } else {
  VAR_1->icframe_vercnt = 1;
  VAR_1->icmsg_vercnt = 1;
 }

 VAR_1->icversion_data[0].major = VAR_5;
 VAR_1->icversion_data[0].minor = VAR_6;
 VAR_1->icversion_data[1].major = VAR_7;
 VAR_1->icversion_data[1].minor = VAR_8;
 return VAR_14;
}
