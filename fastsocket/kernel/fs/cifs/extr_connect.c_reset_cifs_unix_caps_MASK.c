
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_vol {scalar_t__ posix_paths; scalar_t__ no_psx_acl; scalar_t__ no_linux_ext; } ;
struct TYPE_2__ {scalar_t__ Capability; } ;
struct cifs_tcon {int unix_ext; TYPE_1__ fsUnixInfo; } ;
struct cifs_sb_info {scalar_t__ prepathlen; int * prepath; int mnt_cifs_flags; } ;
typedef int __u64 ;


 int FUNC_0 (int,struct cifs_tcon*) ;
 scalar_t__ FUNC_1 (int,struct cifs_tcon*,int) ;
 int FUNC_2 (struct cifs_sb_info*) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(int VAR_12, struct cifs_tcon *VAR_13,
     struct cifs_sb_info *VAR_14, struct smb_vol *VAR_15)
{
 __u64 VAR_16 = FUNC_5(VAR_13->fsUnixInfo.Capability);

 if (VAR_15 && VAR_15->no_linux_ext) {
  VAR_13->fsUnixInfo.Capability = 0;
  VAR_13->unix_ext = 0;
  FUNC_4(1, "Linux protocol extensions disabled");
  return;
 } else if (VAR_15)
  VAR_13->unix_ext = 1;

 if (VAR_13->unix_ext == 0) {
  FUNC_4(1, "Unix extensions disabled so not set on reconnect");
  return;
 }

 if (!FUNC_0(VAR_12, VAR_13)) {
  __u64 VAR_17 = FUNC_5(VAR_13->fsUnixInfo.Capability);
  FUNC_4(1, "unix caps which server supports %lld", VAR_17);


  if (VAR_15 == ((void*)0)) {


   if ((VAR_16 & VAR_7) == 0)
    VAR_17 &= ~VAR_7;
   if ((VAR_16 & VAR_8) == 0) {
    if (VAR_17 & VAR_8)
     FUNC_3(1, "POSIXPATH support change");
    VAR_17 &= ~VAR_8;
   } else if ((VAR_17 & VAR_8) == 0) {
    FUNC_3(1, "possible reconnect error");
    FUNC_3(1, "server disabled POSIX path support");
   }
  }

  if (VAR_17 & VAR_10)
   FUNC_3(1, "per-share encryption not supported yet");

  VAR_17 &= VAR_2;
  if (VAR_15 && VAR_15->no_psx_acl)
   VAR_17 &= ~VAR_7;
  else if (VAR_7 & VAR_17) {
   FUNC_4(1, "negotiated posix acl support");
   if (VAR_14)
    VAR_14->mnt_cifs_flags |=
     VAR_0;
  }

  if (VAR_15 && VAR_15->posix_paths == 0)
   VAR_17 &= ~VAR_8;
  else if (VAR_17 & VAR_8) {
   FUNC_4(1, "negotiate posix pathnames");
   if (VAR_14)
    VAR_14->mnt_cifs_flags |=
     VAR_1;
  }




  if (VAR_14 && (VAR_14->prepathlen > 0))
   VAR_14->prepath[0] = FUNC_2(VAR_14);

  FUNC_4(1, "Negotiate caps 0x%x", (int)VAR_17);
  if (FUNC_1(VAR_12, VAR_13, VAR_17)) {
   if (VAR_15 == ((void*)0)) {
    FUNC_4(1, "resetting capabilities failed");
   } else
    FUNC_3(1, "Negotiating Unix capabilities "
        "with the server failed.  Consider "
        "mounting with the Unix Extensions\n"
        "disabled, if problems are found, "
        "by specifying the nounix mount "
        "option.");

  }
 }
}
