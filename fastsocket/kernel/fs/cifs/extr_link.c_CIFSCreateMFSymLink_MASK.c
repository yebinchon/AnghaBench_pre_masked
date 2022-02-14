
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; struct nls_table* local_nls; } ;
struct cifs_io_parms {unsigned int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
typedef int __u16 ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (int *,unsigned int,char const*) ;
 int FUNC_1 (int const,struct cifs_tcon*,int ) ;
 int FUNC_2 (int const,struct cifs_tcon*,char const*,int ,int ,int,int *,int*,int *,struct nls_table*,int) ;
 int FUNC_3 (int const,struct cifs_io_parms*,unsigned int*,int *,int *,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct cifs_sb_info*) ;
 TYPE_1__* VAR_9 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static int
FUNC_7(const int VAR_10, struct cifs_tcon *VAR_11,
      const char *VAR_12, const char *VAR_13,
      struct cifs_sb_info *VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18 = VAR_2;
 __u16 VAR_19 = 0;
 u8 *VAR_20;
 unsigned int VAR_21 = 0;
 struct cifs_io_parms VAR_22;
 struct nls_table *VAR_23;

 VAR_23 = VAR_14->local_nls;
 VAR_17 = VAR_14->mnt_cifs_flags & VAR_1;

 VAR_20 = FUNC_6(VAR_0, VAR_8);
 if (!VAR_20)
  return -VAR_5;

 VAR_15 = FUNC_0(VAR_20, VAR_0, VAR_13);
 if (VAR_15 != 0) {
  FUNC_5(VAR_20);
  return VAR_15;
 }

 if (FUNC_4(VAR_14))
  VAR_18 |= VAR_3;

 VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_6, VAR_7,
    VAR_18, &VAR_19, &VAR_16, ((void*)0),
    VAR_23, VAR_17);
 if (VAR_15 != 0) {
  FUNC_5(VAR_20);
  return VAR_15;
 }

 VAR_22.netfid = VAR_19;
 VAR_22.pid = VAR_9->tgid;
 VAR_22.tcon = VAR_11;
 VAR_22.offset = 0;
 VAR_22.length = VAR_0;

 VAR_15 = FUNC_3(VAR_10, &VAR_22, &VAR_21, VAR_20, ((void*)0), 0);
 FUNC_1(VAR_10, VAR_11, VAR_19);
 FUNC_5(VAR_20);
 if (VAR_15 != 0)
  return VAR_15;

 if (VAR_21 != VAR_0)
  return -VAR_4;

 return 0;
}
