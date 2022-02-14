
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct tcon_link {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fattr {unsigned int cf_eof; int cf_mode; int cf_dtype; } ;
typedef int __u16 ;
struct TYPE_5__ {int tgid; } ;
struct TYPE_4__ {scalar_t__ EndOfFile; } ;
typedef TYPE_1__ FILE_ALL_INFO ;


 int FUNC_0 (struct cifs_fattr*) ;
 int FUNC_1 (char*,unsigned int,unsigned int*,int *) ;
 int FUNC_2 (int,struct cifs_tcon*,int ) ;
 int FUNC_3 (int,struct cifs_tcon*,unsigned char const*,int ,int ,int ,int *,int*,TYPE_1__*,int ,int) ;
 int FUNC_4 (int,struct cifs_io_parms*,unsigned int*,char**,int*) ;
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
 scalar_t__ FUNC_5 (struct tcon_link*) ;
 int FUNC_6 (struct tcon_link*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (struct tcon_link*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_2__* VAR_15 ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ,int ) ;
 struct cifs_tcon* FUNC_12 (struct tcon_link*) ;

int
FUNC_13(struct cifs_fattr *VAR_16,
     const unsigned char *VAR_17,
     struct cifs_sb_info *VAR_18, int VAR_19)
{
 int VAR_20;
 int VAR_21 = 0;
 __u16 VAR_22 = 0;
 struct tcon_link *VAR_23;
 struct cifs_tcon *VAR_24;
 struct cifs_io_parms VAR_25;
 u8 *VAR_26;
 char *VAR_27;
 unsigned int VAR_28 = 0;
 int VAR_29 = VAR_2;
 unsigned int VAR_30 = 0;
 FILE_ALL_INFO VAR_31;

 if (!FUNC_0(VAR_16))

  return 0;

 VAR_23 = FUNC_8(VAR_18);
 if (FUNC_5(VAR_23))
  return FUNC_6(VAR_23);
 VAR_24 = FUNC_12(VAR_23);

 VAR_20 = FUNC_3(VAR_19, VAR_24, VAR_17, VAR_7, VAR_8,
    VAR_3, &VAR_22, &VAR_21, &VAR_31,
    VAR_18->local_nls,
    VAR_18->mnt_cifs_flags &
    VAR_1);
 if (VAR_20 != 0)
  goto out;

 if (VAR_31.EndOfFile != FUNC_9(VAR_0)) {
  FUNC_2(VAR_19, VAR_24, VAR_22);

  goto out;
 }

 VAR_26 = FUNC_11(VAR_0, VAR_9);
 if (!VAR_26) {
  VAR_20 = -VAR_6;
  goto out;
 }
 VAR_27 = VAR_26;
 VAR_25.netfid = VAR_22;
 VAR_25.pid = VAR_15->tgid;
 VAR_25.tcon = VAR_24;
 VAR_25.offset = 0;
 VAR_25.length = VAR_0;

 VAR_20 = FUNC_4(VAR_19, &VAR_25, &VAR_28, &VAR_27, &VAR_29);
 FUNC_2(VAR_19, VAR_24, VAR_22);
 if (VAR_20 != 0) {
  FUNC_10(VAR_26);
  goto out;
 }

 VAR_20 = FUNC_1(VAR_26, VAR_28, &VAR_30, ((void*)0));
 FUNC_10(VAR_26);
 if (VAR_20 == -VAR_5) {

  VAR_20 = 0;
  goto out;
 }

 if (VAR_20 != 0)
  goto out;


 VAR_16->cf_eof = VAR_30;
 VAR_16->cf_mode &= ~VAR_11;
 VAR_16->cf_mode |= VAR_10 | VAR_14 | VAR_12 | VAR_13;
 VAR_16->cf_dtype = VAR_4;
out:
 FUNC_7(VAR_23);
 return VAR_20;
}
