
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


struct TYPE_8__ {scalar_t__ info_level; unsigned int resume_name_len; char* presume_name; int resume_key; scalar_t__ unicode; } ;
struct cifsFileInfo {TYPE_1__ srch_inf; } ;
typedef scalar_t__ __u16 ;
struct TYPE_14__ {char* FileName; int FileIndex; int FileNameLength; } ;
struct TYPE_13__ {char* FileName; int FileIndex; int FileNameLength; } ;
struct TYPE_12__ {char* FileName; int FileIndex; int FileNameLength; } ;
struct TYPE_11__ {char* FileName; int ResumeKey; } ;
struct TYPE_10__ {char* FileName; int ResumeKey; scalar_t__ FileNameLength; } ;
struct TYPE_9__ {char* FileName; int FileIndex; int FileNameLength; } ;
typedef TYPE_2__ SEARCH_ID_FULL_DIR_INFO ;
typedef TYPE_3__ FIND_FILE_STANDARD_INFO ;
typedef TYPE_4__ FILE_UNIX_INFO ;
typedef TYPE_5__ FILE_FULL_DIRECTORY_INFO ;
typedef TYPE_6__ FILE_DIRECTORY_INFO ;
typedef TYPE_7__ FILE_BOTH_DIRECTORY_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 unsigned int FUNC_1 (char*) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_8,
 struct cifsFileInfo *VAR_9)
{
 int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 __u16 VAR_12;
 char *VAR_13;

 if ((VAR_9 == ((void*)0)) || (VAR_8 == ((void*)0)))
  return -VAR_0;

 VAR_12 = VAR_9->srch_inf.info_level;

 if (VAR_12 == VAR_7) {
  FILE_UNIX_INFO *VAR_14 = (FILE_UNIX_INFO *)VAR_8;

  VAR_13 = &VAR_14->FileName[0];
  if (VAR_9->srch_inf.unicode) {
   VAR_11 = FUNC_1(VAR_13);
  } else {

   VAR_11 = FUNC_3(VAR_13, VAR_1);
  }
  VAR_9->srch_inf.resume_key = VAR_14->ResumeKey;
 } else if (VAR_12 == VAR_3) {
  FILE_DIRECTORY_INFO *VAR_15 =
   (FILE_DIRECTORY_INFO *)VAR_8;
  VAR_13 = &VAR_15->FileName[0];
  VAR_11 = FUNC_2(VAR_15->FileNameLength);
  VAR_9->srch_inf.resume_key = VAR_15->FileIndex;
 } else if (VAR_12 == VAR_4) {
  FILE_FULL_DIRECTORY_INFO *VAR_16 =
   (FILE_FULL_DIRECTORY_INFO *)VAR_8;
  VAR_13 = &VAR_16->FileName[0];
  VAR_11 = FUNC_2(VAR_16->FileNameLength);
  VAR_9->srch_inf.resume_key = VAR_16->FileIndex;
 } else if (VAR_12 == VAR_5) {
  SEARCH_ID_FULL_DIR_INFO *VAR_17 =
   (SEARCH_ID_FULL_DIR_INFO *)VAR_8;
  VAR_13 = &VAR_17->FileName[0];
  VAR_11 = FUNC_2(VAR_17->FileNameLength);
  VAR_9->srch_inf.resume_key = VAR_17->FileIndex;
 } else if (VAR_12 == VAR_2) {
  FILE_BOTH_DIRECTORY_INFO *VAR_18 =
   (FILE_BOTH_DIRECTORY_INFO *)VAR_8;
  VAR_13 = &VAR_18->FileName[0];
  VAR_11 = FUNC_2(VAR_18->FileNameLength);
  VAR_9->srch_inf.resume_key = VAR_18->FileIndex;
 } else if (VAR_12 == VAR_6) {
  FIND_FILE_STANDARD_INFO *VAR_19 =
   (FIND_FILE_STANDARD_INFO *)VAR_8;
  VAR_13 = &VAR_19->FileName[0];

  VAR_11 = (unsigned int)VAR_19->FileNameLength;
  VAR_9->srch_inf.resume_key = VAR_19->ResumeKey;
 } else {
  FUNC_0(1, "Unknown findfirst level %d", VAR_12);
  return -VAR_0;
 }
 VAR_9->srch_inf.resume_name_len = VAR_11;
 VAR_9->srch_inf.presume_name = VAR_13;
 return VAR_10;
}
