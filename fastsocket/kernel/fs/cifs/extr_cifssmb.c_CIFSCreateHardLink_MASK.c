
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int num_hardlinks; int ses; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_5__ {int Flags2; } ;
struct TYPE_6__ {int BufferFormat; int* OldFileName; void* ByteCount; TYPE_1__ hdr; scalar_t__ ClusterCount; void* Flags; void* SearchAttributes; } ;
typedef int RENAME_RSP ;
typedef TYPE_2__ NT_RENAME_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
FUNC_10(const int VAR_9, struct cifs_tcon *VAR_10,
     const char *VAR_11, const char *VAR_12,
     const struct nls_table *VAR_13, int VAR_14)
{
 int VAR_15 = 0;
 NT_RENAME_REQ *VAR_16 = ((void*)0);
 RENAME_RSP *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19, VAR_20;
 __u16 VAR_21;

 FUNC_1(1, "In CIFSCreateHardLink");
winCreateHardLinkRetry:

 VAR_15 = FUNC_7(VAR_8, 4, VAR_10, (void **) &VAR_16,
        (void **) &VAR_17);
 if (VAR_15)
  return VAR_15;

 VAR_16->SearchAttributes =
     FUNC_5(VAR_2 | VAR_1 | VAR_3 |
   VAR_0);
 VAR_16->Flags = FUNC_5(VAR_4);
 VAR_16->ClusterCount = 0;

 VAR_16->BufferFormat = 0x04;

 if (VAR_16->hdr.Flags2 & VAR_7) {
  VAR_19 =
      FUNC_2((__le16 *) VAR_16->OldFileName, VAR_11,
         VAR_6, VAR_13, VAR_14);
  VAR_19++;
  VAR_19 *= 2;


  VAR_16->OldFileName[VAR_19] = 0x04;
  VAR_16->OldFileName[VAR_19 + 1] = 0x00;
  VAR_20 =
      FUNC_2((__le16 *)&VAR_16->OldFileName[VAR_19 + 2],
         VAR_12, VAR_6, VAR_13, VAR_14);
  VAR_20 += 1 + 1 ;
  VAR_20 *= 2;
 } else {
  VAR_19 = FUNC_9(VAR_11, VAR_6);
  VAR_19++;
  FUNC_8(VAR_16->OldFileName, VAR_11, VAR_19);
  VAR_20 = FUNC_9(VAR_12, VAR_6);
  VAR_20++;
  VAR_16->OldFileName[VAR_19] = 0x04;
  FUNC_8(&VAR_16->OldFileName[VAR_19 + 1], VAR_12, VAR_20);
  VAR_20++;
  VAR_20++;
 }

 VAR_21 = 1 + VAR_19 + VAR_20;
 FUNC_6(VAR_16, VAR_21);
 VAR_16->ByteCount = FUNC_5(VAR_21);

 VAR_15 = FUNC_0(VAR_9, VAR_10->ses, (struct smb_hdr *) VAR_16,
    (struct smb_hdr *) VAR_17, &VAR_18, 0);
 FUNC_4(&VAR_10->num_hardlinks);
 if (VAR_15)
  FUNC_1(1, "Send error in hard link (NT rename) = %d", VAR_15);

 FUNC_3(VAR_16);
 if (VAR_15 == -VAR_5)
  goto winCreateHardLinkRetry;

 return VAR_15;
}
