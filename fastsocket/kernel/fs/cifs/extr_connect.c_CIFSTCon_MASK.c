
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_hdr {int Flags2; int WordCount; int Tid; int Uid; int Mid; } ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int need_reconnect; int ipc; int Flags; int nativeFileSystem; int treeName; int tid; int tidStatus; int password; } ;
struct cifs_ses {int capabilities; int ipc_tid; TYPE_4__* server; int Suid; } ;
typedef int __u16 ;
typedef int __le16 ;
struct TYPE_8__ {int sec_mode; scalar_t__ secType; int cryptkey; } ;
struct TYPE_5__ {int smb_buf_length; } ;
struct TYPE_7__ {int AndXCommand; unsigned char* Password; void* ByteCount; TYPE_1__ hdr; void* PasswordLength; void* Flags; } ;
struct TYPE_6__ {int OptionalSupport; } ;
typedef TYPE_2__ TCONX_RSP ;
typedef TYPE_3__ TCONX_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int ,unsigned char*) ;
 int VAR_18 ;
 int FUNC_2 (unsigned int,struct cifs_ses*,struct smb_hdr*,struct smb_hdr*,int*,int ) ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ,int ,int,unsigned char*) ;
 struct smb_hdr* FUNC_6 () ;
 int FUNC_7 (struct smb_hdr*) ;
 int FUNC_8 (unsigned char*,int,int,struct nls_table const*) ;
 int FUNC_9 (int *,char const*,int,struct nls_table const*) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (struct smb_hdr*) ;
 int VAR_20 ;
 int FUNC_13 (struct smb_hdr*,int ,int *,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 unsigned char* FUNC_16 (struct smb_hdr*) ;
 int FUNC_17 (unsigned char*,char const*) ;
 scalar_t__ FUNC_18 (char const*) ;
 int FUNC_19 (int ,char const*,int ) ;
 int FUNC_20 (unsigned char*,int) ;

int
FUNC_21(unsigned int VAR_21, struct cifs_ses *VAR_22,
  const char *VAR_23, struct cifs_tcon *VAR_24,
  const struct nls_table *VAR_25)
{
 struct smb_hdr *VAR_26;
 struct smb_hdr *VAR_27;
 TCONX_REQ *VAR_28;
 TCONX_RSP *VAR_29;
 unsigned char *VAR_30;
 int VAR_31 = 0;
 int VAR_32;
 __u16 VAR_33, VAR_34;

 if (VAR_22 == ((void*)0))
  return -VAR_6;

 VAR_26 = FUNC_6();
 if (VAR_26 == ((void*)0))
  return -VAR_7;

 VAR_27 = VAR_26;

 FUNC_13(VAR_26, VAR_18,
   ((void*)0) , 4 );

 VAR_26->Mid = FUNC_0(VAR_22->server);
 VAR_26->Uid = VAR_22->Suid;
 VAR_28 = (TCONX_REQ *) VAR_26;
 VAR_29 = (TCONX_RSP *) VAR_27;

 VAR_28->AndXCommand = 0xFF;
 VAR_28->Flags = FUNC_11(VAR_19);
 VAR_30 = &VAR_28->Password[0];
 if (!VAR_24 || (VAR_22->server->sec_mode & VAR_13)) {
  VAR_28->PasswordLength = FUNC_11(1);
  *VAR_30 = 0;
  VAR_30++;

 } else {
  VAR_28->PasswordLength = FUNC_11(VAR_4);
  VAR_31 = FUNC_1(VAR_24->password, VAR_22->server->cryptkey,
     VAR_30);

  VAR_30 += VAR_4;
  if (VAR_22->capabilities & VAR_2) {

   *VAR_30 = 0;
   VAR_30++;
  }
 }

 if (VAR_22->server->sec_mode &
   (VAR_12 | VAR_11))
  VAR_26->Flags2 |= VAR_16;

 if (VAR_22->capabilities & VAR_1) {
  VAR_26->Flags2 |= VAR_15;
 }
 if (VAR_22->capabilities & VAR_0) {
  VAR_26->Flags2 |= VAR_14;
 }
 if (VAR_22->capabilities & VAR_2) {
  VAR_26->Flags2 |= VAR_17;
  VAR_32 =
      FUNC_9((__le16 *) VAR_30, VAR_23,
   6 *
   ( + 256 ), VAR_25);
  VAR_30 += 2 * VAR_32;
  VAR_30 += 2;
 } else {
  FUNC_17(VAR_30, VAR_23);
  VAR_30 += FUNC_18(VAR_23) + 1;
 }
 FUNC_17(VAR_30, "?????");
 VAR_30 += FUNC_18("?????");
 VAR_30 += 1;
 VAR_34 = VAR_30 - &VAR_28->Password[0];
 VAR_28->hdr.smb_buf_length = FUNC_10(FUNC_3(
     VAR_28->hdr.smb_buf_length) + VAR_34);
 VAR_28->ByteCount = FUNC_11(VAR_34);

 VAR_31 = FUNC_2(VAR_21, VAR_22, VAR_26, VAR_27, &VAR_32,
    0);


 if ((VAR_31 == 0) && (VAR_24 != ((void*)0))) {
  bool VAR_35;

  VAR_24->tidStatus = VAR_5;
  VAR_24->need_reconnect = 0;
  VAR_24->tid = VAR_27->Tid;
  VAR_30 = FUNC_16(VAR_27);
  VAR_33 = FUNC_12(VAR_27);
  VAR_32 = FUNC_20(VAR_30, VAR_33 - 2);
  if (VAR_26->Flags2 & VAR_17)
   VAR_35 = 1;
  else
   VAR_35 = 0;



  if (VAR_32 == 3) {
   if ((VAR_30[0] == 'I') && (VAR_30[1] == 'P') &&
       (VAR_30[2] == 'C')) {
    FUNC_4(1, "IPC connection");
    VAR_24->ipc = 1;
   }
  } else if (VAR_32 == 2) {
   if ((VAR_30[0] == 'A') && (VAR_30[1] == ':')) {

    FUNC_4(1, "disk share connection");
   }
  }
  VAR_30 += VAR_32 + 1;
  VAR_33 -= (VAR_32 + 1);
  FUNC_19(VAR_24->treeName, VAR_23, VAR_9);


  FUNC_14(VAR_24->nativeFileSystem);
  VAR_24->nativeFileSystem = FUNC_8(VAR_30,
            VAR_33, VAR_35,
            VAR_25);

  FUNC_4(1, "nativeFileSystem=%s", VAR_24->nativeFileSystem);

  if ((VAR_27->WordCount == 3) ||
    (VAR_27->WordCount == 7))

   VAR_24->Flags = FUNC_15(VAR_29->OptionalSupport);
  else
   VAR_24->Flags = 0;
  FUNC_4(1, "Tcon flags: 0x%x ", VAR_24->Flags);
 } else if ((VAR_31 == 0) && VAR_24 == ((void*)0)) {

  VAR_22->ipc_tid = VAR_27->Tid;
 }

 FUNC_7(VAR_26);
 return VAR_31;
}
