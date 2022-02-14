
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct smb_com_readx_req {scalar_t__ ByteCount; } ;
struct kvec {char* iov_base; scalar_t__ iov_len; } ;
struct cifs_tcon {int num_reads; TYPE_5__* ses; } ;
struct cifs_io_parms {int pid; unsigned int netfid; int offset; unsigned int length; struct cifs_tcon* tcon; } ;
typedef int __u64 ;
typedef int __u32 ;
typedef unsigned int __u16 ;
struct TYPE_10__ {int capabilities; int * server; } ;
struct TYPE_6__ {int smb_buf_length; void* PidHigh; void* Pid; } ;
struct TYPE_9__ {int AndXCommand; unsigned int Fid; TYPE_1__ hdr; scalar_t__ ByteCount; void* MaxCountHigh; void* MaxCount; scalar_t__ Remaining; void* OffsetHigh; void* OffsetLow; } ;
struct TYPE_7__ {int Protocol; } ;
struct TYPE_8__ {int DataOffset; TYPE_2__ hdr; int DataLength; int DataLengthHigh; } ;
typedef TYPE_3__ READ_RSP ;
typedef TYPE_4__ READ_REQ ;


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
 int FUNC_0 (int const,TYPE_5__*,struct kvec*,int,int*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,int,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (unsigned int) ;
 void* FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int ,int,struct cifs_tcon*,void**) ;

int
FUNC_12(const int VAR_10, struct cifs_io_parms *VAR_11, unsigned int *VAR_12,
     char **VAR_13, int *VAR_14)
{
 int VAR_15 = -VAR_6;
 READ_REQ *VAR_16 = ((void*)0);
 READ_RSP *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 int VAR_19;
 int VAR_20 = 0;
 struct kvec VAR_21[1];
 __u32 VAR_22 = VAR_11->pid;
 __u16 VAR_23 = VAR_11->netfid;
 __u64 VAR_24 = VAR_11->offset;
 struct cifs_tcon *VAR_25 = VAR_11->tcon;
 unsigned int VAR_26 = VAR_11->length;

 FUNC_3(1, "Reading %d bytes on fid %d", VAR_26, VAR_23);
 if (VAR_25->ses->capabilities & VAR_0)
  VAR_19 = 12;
 else {
  VAR_19 = 10;
  if ((VAR_24 >> 32) > 0) {

   return -VAR_8;
  }
 }

 *VAR_12 = 0;
 VAR_15 = FUNC_11(VAR_9, VAR_19, VAR_25, (void **) &VAR_16);
 if (VAR_15)
  return VAR_15;

 VAR_16->hdr.Pid = FUNC_7((__u16)VAR_22);
 VAR_16->hdr.PidHigh = FUNC_7((__u16)(VAR_22 >> 16));


 if (VAR_25->ses->server == ((void*)0))
  return -VAR_7;

 VAR_16->AndXCommand = 0xFF;
 VAR_16->Fid = VAR_23;
 VAR_16->OffsetLow = FUNC_8(VAR_24 & 0xFFFFFFFF);
 if (VAR_19 == 12)
  VAR_16->OffsetHigh = FUNC_8(VAR_24 >> 32);

 VAR_16->Remaining = 0;
 VAR_16->MaxCount = FUNC_7(VAR_26 & 0xFFFF);
 VAR_16->MaxCountHigh = FUNC_8(VAR_26 >> 16);
 if (VAR_19 == 12)
  VAR_16->ByteCount = 0;
 else {

  struct smb_com_readx_req *VAR_27 =
   (struct smb_com_readx_req *)VAR_16;
  VAR_27->ByteCount = 0;
 }

 VAR_21[0].iov_base = (char *)VAR_16;
 VAR_21[0].iov_len = FUNC_1(VAR_16->hdr.smb_buf_length) + 4;
 VAR_15 = FUNC_0(VAR_10, VAR_25->ses, VAR_21, 1 ,
    &VAR_20, VAR_3);
 FUNC_6(&VAR_25->num_reads);
 VAR_17 = (READ_RSP *)VAR_21[0].iov_base;
 if (VAR_15) {
  FUNC_2(1, "Send error in read = %d", VAR_15);
 } else {
  int VAR_28 = FUNC_9(VAR_17->DataLengthHigh);
  VAR_28 = VAR_28 << 16;
  VAR_28 += FUNC_9(VAR_17->DataLength);
  *VAR_12 = VAR_28;


  if ((VAR_28 > VAR_1)
    || (VAR_28 > VAR_26)) {
   FUNC_3(1, "bad length %d for count %d",
     VAR_28, VAR_26);
   VAR_15 = -VAR_8;
   *VAR_12 = 0;
  } else {
   VAR_18 = (char *) (&VAR_17->hdr.Protocol) +
     FUNC_9(VAR_17->DataOffset);




   if (*VAR_13)
    FUNC_10(*VAR_13, VAR_18, VAR_28);
  }
 }


 if (*VAR_13) {
  if (VAR_20 == VAR_5)
   FUNC_5(VAR_21[0].iov_base);
  else if (VAR_20 == VAR_2)
   FUNC_4(VAR_21[0].iov_base);
 } else if (VAR_20 != VAR_4) {

  *VAR_13 = VAR_21[0].iov_base;
  if (VAR_20 == VAR_5)
   *VAR_14 = VAR_5;
  else if (VAR_20 == VAR_2)
   *VAR_14 = VAR_2;
 }



 return VAR_15;
}
