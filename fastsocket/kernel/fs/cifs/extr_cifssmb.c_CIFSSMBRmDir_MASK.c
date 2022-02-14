
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int num_rmdirs; int ses; } ;
typedef int __le16 ;
struct TYPE_5__ {int Flags2; } ;
struct TYPE_6__ {int BufferFormat; int ByteCount; scalar_t__ DirName; TYPE_1__ hdr; } ;
typedef int DELETE_DIRECTORY_RSP ;
typedef TYPE_2__ DELETE_DIRECTORY_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int ,struct cifs_tcon*,void**,void**) ;
 int FUNC_8 (scalar_t__,char const*,int) ;
 int FUNC_9 (char const*,int ) ;

int
FUNC_10(const int VAR_4, struct cifs_tcon *VAR_5, const char *VAR_6,
      const struct nls_table *VAR_7, int VAR_8)
{
 DELETE_DIRECTORY_REQ *VAR_9 = ((void*)0);
 DELETE_DIRECTORY_RSP *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13;

 FUNC_1(1, "In CIFSSMBRmDir");
RmDirRetry:
 VAR_11 = FUNC_7(VAR_3, 0, VAR_5, (void **) &VAR_9,
        (void **) &VAR_10);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->hdr.Flags2 & VAR_2) {
  VAR_13 = FUNC_2((__le16 *) VAR_9->DirName, VAR_6,
      VAR_1, VAR_7, VAR_8);
  VAR_13++;
  VAR_13 *= 2;
 } else {
  VAR_13 = FUNC_9(VAR_6, VAR_1);
  VAR_13++;
  FUNC_8(VAR_9->DirName, VAR_6, VAR_13);
 }

 VAR_9->BufferFormat = 0x04;
 FUNC_6(VAR_9, VAR_13 + 1);
 VAR_9->ByteCount = FUNC_5(VAR_13 + 1);
 VAR_11 = FUNC_0(VAR_4, VAR_5->ses, (struct smb_hdr *) VAR_9,
    (struct smb_hdr *) VAR_10, &VAR_12, 0);
 FUNC_4(&VAR_5->num_rmdirs);
 if (VAR_11)
  FUNC_1(1, "Error in RMDir = %d", VAR_11);

 FUNC_3(VAR_9);
 if (VAR_11 == -VAR_0)
  goto RmDirRetry;
 return VAR_11;
}
