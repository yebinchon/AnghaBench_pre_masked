
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int ses; } ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_12__ {int Attributes; void* AllocationSize; void* EndOfFile; scalar_t__ LastAccessTime; void* ChangeTime; void* LastWriteTime; } ;
struct TYPE_9__ {int Flags2; } ;
struct TYPE_11__ {int BufferFormat; int ByteCount; scalar_t__ FileName; TYPE_1__ hdr; } ;
struct TYPE_10__ {int attr; int size; int last_write_time; } ;
typedef TYPE_2__ QUERY_INFORMATION_RSP ;
typedef TYPE_3__ QUERY_INFORMATION_REQ ;
typedef TYPE_4__ FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,unsigned char const*,int ,struct nls_table const*,int) ;
 int FUNC_3 (struct timespec) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,int ,int) ;
 int FUNC_12 (int ,int ,struct cifs_tcon*,void**,void**) ;
 int FUNC_13 (scalar_t__,unsigned char const*,int) ;
 int FUNC_14 (unsigned char const*,int ) ;

int FUNC_15(const int VAR_5, struct cifs_tcon *VAR_6,
   const unsigned char *VAR_7,
   FILE_ALL_INFO *VAR_8,
   const struct nls_table *VAR_9, int VAR_10)
{
 QUERY_INFORMATION_REQ *VAR_11;
 QUERY_INFORMATION_RSP *VAR_12;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15;

 FUNC_1(1, "In SMBQPath path %s", VAR_7);
QInfRetry:
 VAR_13 = FUNC_12(VAR_4, 0, VAR_6, (void **) &VAR_11,
        (void **) &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_11->hdr.Flags2 & VAR_3) {
  VAR_15 =
   FUNC_2((__le16 *) VAR_11->FileName, VAR_7,
     VAR_2, VAR_9, VAR_10);
  VAR_15++;
  VAR_15 *= 2;
 } else {
  VAR_15 = FUNC_14(VAR_7, VAR_2);
  VAR_15++;
  FUNC_13(VAR_11->FileName, VAR_7, VAR_15);
 }
 VAR_11->BufferFormat = 0x04;
 VAR_15++;
 FUNC_8(VAR_11, (__u16)VAR_15);
 VAR_11->ByteCount = FUNC_5(VAR_15);

 VAR_13 = FUNC_0(VAR_5, VAR_6->ses, (struct smb_hdr *) VAR_11,
    (struct smb_hdr *) VAR_12, &VAR_14, 0);
 if (VAR_13) {
  FUNC_1(1, "Send error in QueryInfo = %d", VAR_13);
 } else if (VAR_8) {
  struct timespec VAR_16;
  __u32 VAR_17 = FUNC_10(VAR_12->last_write_time);



  FUNC_11(VAR_8, 0, sizeof(FILE_ALL_INFO));
  VAR_16.tv_nsec = 0;
  VAR_16.tv_sec = VAR_17;

  VAR_8->ChangeTime = FUNC_7(FUNC_3(VAR_16));
  VAR_8->LastWriteTime = VAR_8->ChangeTime;
  VAR_8->LastAccessTime = 0;
  VAR_8->AllocationSize =
   FUNC_7(FUNC_10(VAR_12->size));
  VAR_8->EndOfFile = VAR_8->AllocationSize;
  VAR_8->Attributes =
   FUNC_6(FUNC_9(VAR_12->attr));
 } else
  VAR_13 = -VAR_1;

 FUNC_4(VAR_11);

 if (VAR_13 == -VAR_0)
  goto QInfRetry;

 return VAR_13;
}
