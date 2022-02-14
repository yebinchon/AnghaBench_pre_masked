
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qstr {unsigned int len; char* name; } ;
struct nls_table {int dummy; } ;
struct cifs_sb_info {int mnt_cifs_flags; struct nls_table* local_nls; } ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __u16 ;
typedef int __le16 ;
struct TYPE_14__ {char* FileName; int FileNameLength; } ;
struct TYPE_13__ {char* FileName; int FileNameLength; } ;
struct TYPE_12__ {char* FileName; int FileNameLength; } ;
struct TYPE_8__ {int UniqueId; } ;
struct TYPE_11__ {char* FileName; TYPE_1__ basic; } ;
struct TYPE_10__ {char* FileName; scalar_t__ FileNameLength; } ;
struct TYPE_9__ {char* FileName; int UniqueId; int FileNameLength; } ;
typedef TYPE_2__ SEARCH_ID_FULL_DIR_INFO ;
typedef TYPE_3__ FIND_FILE_STANDARD_INFO ;
typedef TYPE_4__ FILE_UNIX_INFO ;
typedef TYPE_5__ FILE_FULL_DIRECTORY_INFO ;
typedef TYPE_6__ FILE_DIRECTORY_INFO ;
typedef TYPE_7__ FILE_BOTH_DIRECTORY_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (int,char*,scalar_t__) ;
 unsigned int FUNC_2 (char*,int *,int ,int ,struct nls_table*,int) ;
 unsigned int FUNC_3 (char*) ;
 unsigned int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (struct nls_table*) ;
 unsigned int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct qstr *VAR_10,
 char *VAR_11, __u16 VAR_12, unsigned int VAR_13,
 struct cifs_sb_info *VAR_14, unsigned int VAR_15, __u64 *VAR_16)
{
 int VAR_17 = 0;
 unsigned int VAR_18 = 0;
 char *VAR_19;
 struct nls_table *VAR_20 = VAR_14->local_nls;

 *VAR_16 = 0;

 if (VAR_12 == VAR_8) {
  FILE_UNIX_INFO *VAR_21 = (FILE_UNIX_INFO *)VAR_11;

  VAR_19 = &VAR_21->FileName[0];
  if (VAR_13) {
   VAR_18 = FUNC_3(VAR_19);
  } else {

   VAR_18 = FUNC_8(VAR_19, VAR_2);
  }

  *VAR_16 = FUNC_5(VAR_21->basic.UniqueId);
 } else if (VAR_12 == VAR_4) {
  FILE_DIRECTORY_INFO *VAR_22 =
   (FILE_DIRECTORY_INFO *)VAR_11;
  VAR_19 = &VAR_22->FileName[0];
  VAR_18 = FUNC_4(VAR_22->FileNameLength);
 } else if (VAR_12 == VAR_5) {
  FILE_FULL_DIRECTORY_INFO *VAR_23 =
   (FILE_FULL_DIRECTORY_INFO *)VAR_11;
  VAR_19 = &VAR_23->FileName[0];
  VAR_18 = FUNC_4(VAR_23->FileNameLength);
 } else if (VAR_12 == VAR_6) {
  SEARCH_ID_FULL_DIR_INFO *VAR_24 =
   (SEARCH_ID_FULL_DIR_INFO *)VAR_11;
  VAR_19 = &VAR_24->FileName[0];
  VAR_18 = FUNC_4(VAR_24->FileNameLength);
  *VAR_16 = FUNC_5(VAR_24->UniqueId);
 } else if (VAR_12 == VAR_3) {
  FILE_BOTH_DIRECTORY_INFO *VAR_25 =
   (FILE_BOTH_DIRECTORY_INFO *)VAR_11;
  VAR_19 = &VAR_25->FileName[0];
  VAR_18 = FUNC_4(VAR_25->FileNameLength);
 } else if (VAR_12 == VAR_7) {
  FIND_FILE_STANDARD_INFO *VAR_26 =
   (FIND_FILE_STANDARD_INFO *)VAR_11;
  VAR_19 = &VAR_26->FileName[0];

  VAR_18 = (unsigned int)VAR_26->FileNameLength;
 } else {
  FUNC_1(1, "Unknown findfirst level %d", VAR_12);
  return -VAR_1;
 }

 if (VAR_18 > VAR_15) {
  FUNC_0(1, "bad search response length %d past smb end", VAR_18);
  return -VAR_1;
 }

 if (VAR_13) {
  VAR_10->len = FUNC_2((char *) VAR_10->name,
        (__le16 *) VAR_19,
        VAR_9,
        FUNC_6(VAR_18, VAR_15), VAR_20,
        VAR_14->mnt_cifs_flags &
      VAR_0);
  VAR_10->len -= FUNC_7(VAR_20);
 } else {
  VAR_10->name = VAR_19;
  VAR_10->len = VAR_18;
 }
 return VAR_17;
}
