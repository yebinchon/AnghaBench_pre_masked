
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fattr {int cf_eof; void* cf_dtype; int cf_mode; void* cf_rdev; } ;
typedef int __u64 ;
typedef int __u16 ;
typedef int __le64 ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (int,struct cifs_tcon*,int ) ;
 int FUNC_1 (int,struct cifs_tcon*,unsigned char const*,int ,int ,int ,int *,int*,int *,int ,int) ;
 int FUNC_2 (int,struct cifs_io_parms*,unsigned int*,char**,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 void* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct tcon_link*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (struct tcon_link*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 TYPE_1__* VAR_18 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 struct cifs_tcon* FUNC_11 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_12(struct cifs_fattr *VAR_19, const unsigned char *VAR_20,
       struct cifs_sb_info *VAR_21, int VAR_22)
{
 int VAR_23;
 int VAR_24 = 0;
 __u16 VAR_25;
 struct tcon_link *VAR_26;
 struct cifs_tcon *VAR_27;
 struct cifs_io_parms VAR_28;
 char VAR_29[24];
 unsigned int VAR_30;
 char *VAR_31;

 VAR_31 = VAR_29;

 VAR_19->cf_mode &= ~VAR_16;

 if (VAR_19->cf_eof == 0) {
  VAR_19->cf_mode |= VAR_14;
  VAR_19->cf_dtype = VAR_5;
  return 0;
 } else if (VAR_19->cf_eof < 8) {
  VAR_19->cf_mode |= VAR_17;
  VAR_19->cf_dtype = VAR_7;
  return -VAR_8;
 }

 VAR_26 = FUNC_8(VAR_21);
 if (FUNC_3(VAR_26))
  return FUNC_5(VAR_26);
 VAR_27 = FUNC_11(VAR_26);

 VAR_23 = FUNC_1(VAR_22, VAR_27, VAR_20, VAR_10, VAR_11,
    VAR_2, &VAR_25, &VAR_24, ((void*)0),
    VAR_21->local_nls,
    VAR_21->mnt_cifs_flags &
    VAR_0);
 if (VAR_23 == 0) {
  int VAR_32 = VAR_1;

  VAR_28.netfid = VAR_25;
  VAR_28.pid = VAR_18->tgid;
  VAR_28.tcon = VAR_27;
  VAR_28.offset = 0;
  VAR_28.length = 24;
  VAR_23 = FUNC_2(VAR_22, &VAR_28, &VAR_30, &VAR_31,
     &VAR_32);
  if ((VAR_23 == 0) && (VAR_30 >= 8)) {
   if (FUNC_10("IntxBLK", VAR_31, 8) == 0) {
    FUNC_6(1, "Block device");
    VAR_19->cf_mode |= VAR_12;
    VAR_19->cf_dtype = VAR_3;
    if (VAR_30 == 24) {

     __u64 VAR_33;
     __u64 VAR_34;
     VAR_33 = FUNC_9(*(__le64 *)(VAR_31+8));
     VAR_34 = FUNC_9(*(__le64 *)(VAR_31+16));
     VAR_19->cf_rdev = FUNC_4(VAR_33, VAR_34);
    }
   } else if (FUNC_10("IntxCHR", VAR_31, 8) == 0) {
    FUNC_6(1, "Char device");
    VAR_19->cf_mode |= VAR_13;
    VAR_19->cf_dtype = VAR_4;
    if (VAR_30 == 24) {

     __u64 VAR_35;
     __u64 VAR_36;
     VAR_35 = FUNC_9(*(__le64 *)(VAR_31+8));
     VAR_36 = FUNC_9(*(__le64 *)(VAR_31+16));
     VAR_19->cf_rdev = FUNC_4(VAR_35, VAR_36);
    }
   } else if (FUNC_10("IntxLNK", VAR_31, 7) == 0) {
    FUNC_6(1, "Symlink");
    VAR_19->cf_mode |= VAR_15;
    VAR_19->cf_dtype = VAR_6;
   } else {
    VAR_19->cf_mode |= VAR_17;
    VAR_19->cf_dtype = VAR_7;
    VAR_23 = -VAR_9;
   }
  } else {
   VAR_19->cf_mode |= VAR_17;
   VAR_19->cf_dtype = VAR_7;
   VAR_23 = -VAR_9;
  }
  FUNC_0(VAR_22, VAR_27, VAR_25);
 }
 FUNC_7(VAR_26);
 return VAR_23;
}
