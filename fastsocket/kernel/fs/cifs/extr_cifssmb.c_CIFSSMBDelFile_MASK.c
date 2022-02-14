
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_hdr {int dummy; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int num_deletes; int ses; } ;
typedef int __le16 ;
struct TYPE_5__ {int Flags2; } ;
struct TYPE_6__ {int BufferFormat; void* ByteCount; void* SearchAttributes; scalar_t__ fileName; TYPE_1__ hdr; } ;
typedef int DELETE_FILE_RSP ;
typedef TYPE_2__ DELETE_FILE_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const,int ,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,char const*,int ,struct nls_table const*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int,struct cifs_tcon*,void**,void**) ;
 int FUNC_8 (scalar_t__,char const*,int) ;
 int FUNC_9 (char const*,int ) ;

int
FUNC_10(const int VAR_7, struct cifs_tcon *VAR_8, const char *VAR_9,
        const struct nls_table *VAR_10, int VAR_11)
{
 DELETE_FILE_REQ *VAR_12 = ((void*)0);
 DELETE_FILE_RSP *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;

DelFileRetry:
 VAR_14 = FUNC_7(VAR_6, 1, VAR_8, (void **) &VAR_12,
        (void **) &VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->hdr.Flags2 & VAR_5) {
  VAR_16 =
      FUNC_2((__le16 *) VAR_12->fileName, VAR_9,
         VAR_4, VAR_10, VAR_11);
  VAR_16++;
  VAR_16 *= 2;
 } else {
  VAR_16 = FUNC_9(VAR_9, VAR_4);
  VAR_16++;
  FUNC_8(VAR_12->fileName, VAR_9, VAR_16);
 }
 VAR_12->SearchAttributes =
     FUNC_5(VAR_1 | VAR_0 | VAR_2);
 VAR_12->BufferFormat = 0x04;
 FUNC_6(VAR_12, VAR_16 + 1);
 VAR_12->ByteCount = FUNC_5(VAR_16 + 1);
 VAR_14 = FUNC_0(VAR_7, VAR_8->ses, (struct smb_hdr *) VAR_12,
    (struct smb_hdr *) VAR_13, &VAR_15, 0);
 FUNC_4(&VAR_8->num_deletes);
 if (VAR_14)
  FUNC_1(1, "Error in RMFile = %d", VAR_14);

 FUNC_3(VAR_12);
 if (VAR_14 == -VAR_3)
  goto DelFileRetry;

 return VAR_14;
}
