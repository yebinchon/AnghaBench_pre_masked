
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ iobuf; } ;
struct scsi_cmnd {int dummy; } ;
struct freecom_xfer_wrap {int Type; int Pad; int Count; scalar_t__ Timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct us_data*,unsigned int,struct scsi_cmnd*) ;
 int FUNC_4 (struct us_data*,unsigned int,struct freecom_xfer_wrap*,int ,int *) ;

__attribute__((used)) static int
FUNC_5 (struct scsi_cmnd *VAR_6, struct us_data *VAR_7,
  unsigned int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct freecom_xfer_wrap *VAR_11 =
  (struct freecom_xfer_wrap *) VAR_7->iobuf;
 int VAR_12;

 VAR_11->Type = VAR_0 | 0x00;
 VAR_11->Timeout = 0;
 VAR_11->Count = FUNC_1 (VAR_10);
 FUNC_2 (VAR_11->Pad, 0, sizeof (VAR_11->Pad));

 FUNC_0("Read data Freecom! (c=%d)\n", VAR_10);


 VAR_12 = FUNC_4 (VAR_7, VAR_9, VAR_11,
   VAR_1, ((void*)0));
 if (VAR_12 != VAR_4) {
  FUNC_0 ("Freecom readdata transport error\n");
  return VAR_2;
 }


 FUNC_0("Start of read\n");
 VAR_12 = FUNC_3(VAR_7, VAR_8, VAR_6);
 FUNC_0("freecom_readdata done!\n");

 if (VAR_12 > VAR_5)
  return VAR_2;
 return VAR_3;
}
