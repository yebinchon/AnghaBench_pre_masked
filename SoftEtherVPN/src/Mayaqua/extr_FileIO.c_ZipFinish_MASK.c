
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int e ;
typedef int dh ;
typedef int d ;
struct TYPE_16__ {TYPE_6__* Fifo; int FileList; } ;
typedef TYPE_1__ ZIP_PACKER ;
struct TYPE_17__ {scalar_t__ HeaderPos; TYPE_3__* Name; scalar_t__ Attributes; } ;
typedef TYPE_2__ ZIP_FILE ;
struct TYPE_18__ {scalar_t__ CommentLen; void* StartPos; void* DirSize; void* DirEntry; void* DiskDirEntry; scalar_t__ StartDiskNum; scalar_t__ DiskNum; void* Signature; void* HeaderPos; void* OutAttr; scalar_t__ InAttr; int ExtraLen; int FileNameLen; int UncompSize; int CompSize; int Crc32; int FileDate; int FileTime; int CompType; int Option; int NeedVer; void* MadeVer; } ;
typedef TYPE_3__ ZIP_END_HEADER ;
typedef TYPE_3__ ZIP_DIR_HEADER ;
typedef TYPE_3__ ZIP_DATA_HEADER ;
typedef scalar_t__ USHORT ;
typedef scalar_t__ UINT ;
struct TYPE_19__ {scalar_t__ total_write_size; } ;
typedef TYPE_6__ FIFO ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_6__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (TYPE_3__*,int) ;

FIFO *FUNC_10(ZIP_PACKER *VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;
 UINT VAR_5;
 ZIP_END_HEADER VAR_6;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = (UINT)VAR_2->Fifo->total_write_size;

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_2->FileList);VAR_3++)
 {
  ZIP_FILE *VAR_7 = FUNC_2(VAR_2->FileList, VAR_3);
  ZIP_DIR_HEADER VAR_8;
  ZIP_DATA_HEADER VAR_9;

  FUNC_9(&VAR_8, sizeof(VAR_8));
  FUNC_9(&VAR_9, sizeof(VAR_9));

  VAR_8.Signature = FUNC_1(FUNC_6(0x02014B50));
  VAR_8.MadeVer = FUNC_0(FUNC_5(VAR_1));

  FUNC_8(VAR_7, &VAR_9, 1);

  VAR_8.NeedVer = VAR_9.NeedVer;
  VAR_8.Option = VAR_9.Option;
  VAR_8.CompType = VAR_9.CompType;
  VAR_8.FileTime = VAR_9.FileTime;
  VAR_8.FileDate = VAR_9.FileDate;
  VAR_8.Crc32 = VAR_9.Crc32;
  VAR_8.CompSize = VAR_9.CompSize;
  VAR_8.UncompSize = VAR_9.UncompSize;
  VAR_8.FileNameLen = VAR_9.FileNameLen;
  VAR_8.ExtraLen = VAR_9.ExtraLen;
  VAR_8.CommentLen = 0;
  VAR_8.DiskNum = 0;
  VAR_8.InAttr = 0;
  VAR_8.OutAttr = FUNC_1(FUNC_6((USHORT)VAR_7->Attributes));
  VAR_8.HeaderPos = FUNC_1(FUNC_6(VAR_7->HeaderPos));

  FUNC_7(VAR_2->Fifo, &VAR_8, sizeof(VAR_8));
  FUNC_7(VAR_2->Fifo, VAR_7->Name, FUNC_4(VAR_7->Name));
 }

 VAR_5 = (UINT)VAR_2->Fifo->total_write_size;

 FUNC_9(&VAR_6, sizeof(VAR_6));
 VAR_6.Signature = FUNC_1(FUNC_6(VAR_0));
 VAR_6.DiskNum = VAR_6.StartDiskNum = 0;
 VAR_6.DiskDirEntry = VAR_6.DirEntry = FUNC_0(FUNC_5((USHORT)FUNC_3(VAR_2->FileList)));
 VAR_6.DirSize = FUNC_1(FUNC_6((UINT)(VAR_5 - VAR_4)));
 VAR_6.StartPos = FUNC_1(FUNC_6(VAR_4));
 VAR_6.CommentLen = 0;

 FUNC_7(VAR_2->Fifo, &VAR_6, sizeof(VAR_6));

 return VAR_2->Fifo;
}
