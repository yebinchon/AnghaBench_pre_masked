
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct inode {int i_size; int i_mapping; int i_sb; } ;
struct iattr {int ia_size; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; void* netfid; } ;
struct cifsInodeInfo {int server_eof; } ;
struct cifsFileInfo {struct tcon_link* tlink; int pid; void* netfid; } ;
typedef int __u32 ;
typedef void* __u16 ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (int,struct cifs_tcon*,void*) ;
 int FUNC_1 (int,struct cifs_tcon*,char*,int ,int,int ,int) ;
 int FUNC_2 (int,struct cifs_tcon*,int ,void*,int ,int) ;
 int FUNC_3 (int,struct cifs_io_parms*,unsigned int*,int *,int *,int) ;
 struct cifsInodeInfo* FUNC_4 (struct inode*) ;
 int VAR_0 ;
 struct cifs_sb_info* FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct tcon_link*) ;
 int FUNC_8 (int,struct cifs_tcon*,char*,int ,int ,int ,void**,int*,int *,int ,int) ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (struct cifsFileInfo*) ;
 int FUNC_11 (struct tcon_link*) ;
 struct tcon_link* FUNC_12 (struct cifs_sb_info*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct inode*,int ) ;
 TYPE_1__* VAR_6 ;
 struct cifsFileInfo* FUNC_15 (struct cifsInodeInfo*,int) ;
 struct cifs_tcon* FUNC_16 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_17(struct inode *VAR_7, struct iattr *VAR_8,
     int VAR_9, char *VAR_10)
{
 int VAR_11;
 struct cifsFileInfo *VAR_12;
 struct cifsInodeInfo *VAR_13 = FUNC_4(VAR_7);
 struct cifs_sb_info *VAR_14 = FUNC_5(VAR_7->i_sb);
 struct tcon_link *VAR_15 = ((void*)0);
 struct cifs_tcon *VAR_16 = ((void*)0);
 struct cifs_io_parms VAR_17;
 VAR_12 = FUNC_15(VAR_13, 1);
 if (VAR_12) {
  __u16 VAR_18 = VAR_12->netfid;
  __u32 VAR_19 = VAR_12->pid;
  VAR_16 = FUNC_16(VAR_12->tlink);
  VAR_11 = FUNC_2(VAR_9, VAR_16, VAR_8->ia_size, VAR_18,
     VAR_19, 0);
  FUNC_10(VAR_12);
  FUNC_9(1, "SetFSize for attrs rc = %d", VAR_11);
  if ((VAR_11 == -VAR_2) || (VAR_11 == -VAR_3)) {
   unsigned int VAR_20;

   VAR_17.netfid = VAR_18;
   VAR_17.pid = VAR_19;
   VAR_17.tcon = VAR_16;
   VAR_17.offset = 0;
   VAR_17.length = VAR_8->ia_size;
   VAR_11 = FUNC_3(VAR_9, &VAR_17, &VAR_20,
       ((void*)0), ((void*)0), 1);
   FUNC_9(1, "Wrt seteof rc %d", VAR_11);
  }
 } else
  VAR_11 = -VAR_2;

 if (VAR_11 != 0) {
  if (VAR_16 == ((void*)0)) {
   VAR_15 = FUNC_12(VAR_14);
   if (FUNC_6(VAR_15))
    return FUNC_7(VAR_15);
   VAR_16 = FUNC_16(VAR_15);
  }





  VAR_11 = FUNC_1(VAR_9, VAR_16, VAR_10, VAR_8->ia_size,
       0, VAR_14->local_nls,
       VAR_14->mnt_cifs_flags &
     VAR_0);
  FUNC_9(1, "SetEOF by path (setattrs) rc = %d", VAR_11);
  if ((VAR_11 == -VAR_2) || (VAR_11 == -VAR_3)) {
   __u16 VAR_21;
   int VAR_22 = 0;

   VAR_11 = FUNC_8(VAR_9, VAR_16, VAR_10,
    VAR_4, VAR_5,
    VAR_1, &VAR_21, &VAR_22, ((void*)0),
    VAR_14->local_nls,
    VAR_14->mnt_cifs_flags &
     VAR_0);
   if (VAR_11 == 0) {
    unsigned int VAR_23;

    VAR_17.netfid = VAR_21;
    VAR_17.pid = VAR_6->tgid;
    VAR_17.tcon = VAR_16;
    VAR_17.offset = 0;
    VAR_17.length = VAR_8->ia_size;
    VAR_11 = FUNC_3(VAR_9, &VAR_17,
        &VAR_23,
        ((void*)0), ((void*)0), 1);
    FUNC_9(1, "wrt seteof rc %d", VAR_11);
    FUNC_0(VAR_9, VAR_16, VAR_21);
   }
  }
  if (VAR_15)
   FUNC_11(VAR_15);
 }

 if (VAR_11 == 0) {
  VAR_13->server_eof = VAR_8->ia_size;
  VAR_11 = FUNC_14(VAR_7, VAR_8->ia_size);
  FUNC_13(VAR_7->i_mapping, VAR_7->i_size);
 }

 return VAR_11;
}
