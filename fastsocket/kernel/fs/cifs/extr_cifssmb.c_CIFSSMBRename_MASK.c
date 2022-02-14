
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int num_renames; int ses; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_5__ {int Flags2; } ;
struct TYPE_6__ {int BufferFormat; int* OldFileName; void* ByteCount; TYPE_1__ hdr; void* SearchAttributes; } ;
typedef int RENAME_RSP ;
typedef TYPE_2__ RENAME_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int,struct cifs_tcon*,void**,void**) ;
 int FUNC_8 (int*,char const*,int) ;
 int FUNC_9 (char const*,int ) ;

int
FUNC_10(const int VAR_8, struct cifs_tcon *VAR_9,
       const char *VAR_10, const char *VAR_11,
       const struct nls_table *VAR_12, int VAR_13)
{
 int VAR_14 = 0;
 RENAME_REQ *VAR_15 = ((void*)0);
 RENAME_RSP *VAR_16 = ((void*)0);
 int VAR_17;
 int VAR_18, VAR_19;
 __u16 VAR_20;

 FUNC_1(1, "In CIFSSMBRename");
renameRetry:
 VAR_14 = FUNC_7(VAR_7, 1, VAR_9, (void **) &VAR_15,
        (void **) &VAR_16);
 if (VAR_14)
  return VAR_14;

 VAR_15->BufferFormat = 0x04;
 VAR_15->SearchAttributes =
     FUNC_5(VAR_2 | VAR_1 | VAR_3 |
   VAR_0);

 if (VAR_15->hdr.Flags2 & VAR_6) {
  VAR_18 =
      FUNC_2((__le16 *) VAR_15->OldFileName, VAR_10,
         VAR_5, VAR_12, VAR_13);
  VAR_18++;
  VAR_18 *= 2;
  VAR_15->OldFileName[VAR_18] = 0x04;

  VAR_15->OldFileName[VAR_18 + 1] = 0x00;
  VAR_19 =
      FUNC_2((__le16 *)&VAR_15->OldFileName[VAR_18 + 2],
         VAR_11, VAR_5, VAR_12, VAR_13);
  VAR_19 += 1 + 1 ;
  VAR_19 *= 2;
 } else {
  VAR_18 = FUNC_9(VAR_10, VAR_5);
  VAR_18++;
  FUNC_8(VAR_15->OldFileName, VAR_10, VAR_18);
  VAR_19 = FUNC_9(VAR_11, VAR_5);
  VAR_19++;
  VAR_15->OldFileName[VAR_18] = 0x04;
  FUNC_8(&VAR_15->OldFileName[VAR_18 + 1], VAR_11, VAR_19);
  VAR_19++;
  VAR_19++;
 }

 VAR_20 = 1 + VAR_18 + VAR_19;
 FUNC_6(VAR_15, VAR_20);
 VAR_15->ByteCount = FUNC_5(VAR_20);

 VAR_14 = FUNC_0(VAR_8, VAR_9->ses, (struct smb_hdr *) VAR_15,
    (struct smb_hdr *) VAR_16, &VAR_17, 0);
 FUNC_4(&VAR_9->num_renames);
 if (VAR_14)
  FUNC_1(1, "Send error in rename = %d", VAR_14);

 FUNC_3(VAR_15);

 if (VAR_14 == -VAR_4)
  goto renameRetry;

 return VAR_14;
}
