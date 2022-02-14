
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct nls_table {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
typedef int __u16 ;
struct TYPE_5__ {int tgid; } ;
struct TYPE_4__ {scalar_t__ EndOfFile; } ;
typedef TYPE_1__ FILE_ALL_INFO ;


 int FUNC_0 (char*,unsigned int,unsigned int*,char**) ;
 int FUNC_1 (int const,struct cifs_tcon*,int ) ;
 int FUNC_2 (int const,struct cifs_tcon*,unsigned char const*,int ,int ,int ,int *,int*,TYPE_1__*,struct nls_table const*,int) ;
 int FUNC_3 (int const,struct cifs_io_parms*,unsigned int*,char**,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* VAR_8 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(const int VAR_9, struct cifs_tcon *VAR_10,
     const unsigned char *VAR_11, char **VAR_12,
     const struct nls_table *VAR_13, int VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 __u16 VAR_17 = 0;
 u8 *VAR_18;
 char *VAR_19;
 unsigned int VAR_20 = 0;
 int VAR_21 = VAR_1;
 unsigned int VAR_22 = 0;
 struct cifs_io_parms VAR_23;
 FILE_ALL_INFO VAR_24;

 VAR_15 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_5, VAR_6,
    VAR_2, &VAR_17, &VAR_16, &VAR_24,
    VAR_13, VAR_14);
 if (VAR_15 != 0)
  return VAR_15;

 if (VAR_24.EndOfFile != FUNC_4(VAR_0)) {
  FUNC_1(VAR_9, VAR_10, VAR_17);

  return -VAR_3;
 }

 VAR_18 = FUNC_6(VAR_0, VAR_7);
 if (!VAR_18)
  return -VAR_4;
 VAR_19 = VAR_18;
 VAR_23.netfid = VAR_17;
 VAR_23.pid = VAR_8->tgid;
 VAR_23.tcon = VAR_10;
 VAR_23.offset = 0;
 VAR_23.length = VAR_0;

 VAR_15 = FUNC_3(VAR_9, &VAR_23, &VAR_20, &VAR_19, &VAR_21);
 FUNC_1(VAR_9, VAR_10, VAR_17);
 if (VAR_15 != 0) {
  FUNC_5(VAR_18);
  return VAR_15;
 }

 VAR_15 = FUNC_0(VAR_18, VAR_20, &VAR_22, VAR_12);
 FUNC_5(VAR_18);
 if (VAR_15 != 0)
  return VAR_15;

 return 0;
}
