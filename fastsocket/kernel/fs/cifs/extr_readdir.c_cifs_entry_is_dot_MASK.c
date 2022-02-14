
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


struct TYPE_8__ {scalar_t__ info_level; scalar_t__ unicode; } ;
struct cifsFileInfo {TYPE_1__ srch_inf; } ;
typedef scalar_t__ __le16 ;
struct TYPE_14__ {char* FileName; int FileNameLength; } ;
struct TYPE_13__ {char* FileName; int FileNameLength; } ;
struct TYPE_12__ {char* FileName; int FileNameLength; } ;
struct TYPE_11__ {char* FileName; } ;
struct TYPE_10__ {char* FileName; int FileNameLength; } ;
struct TYPE_9__ {char* FileName; int FileNameLength; } ;
typedef TYPE_2__ SEARCH_ID_FULL_DIR_INFO ;
typedef TYPE_3__ FIND_FILE_STANDARD_INFO ;
typedef TYPE_4__ FILE_UNIX_INFO ;
typedef TYPE_5__ FILE_FULL_DIRECTORY_INFO ;
typedef TYPE_6__ FILE_DIRECTORY_INFO ;
typedef TYPE_7__ FILE_BOTH_DIRECTORY_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_7, struct cifsFileInfo *VAR_8)
{
 int VAR_9 = 0;
 char *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (VAR_8->srch_inf.info_level == VAR_5) {
  FILE_UNIX_INFO *VAR_12 = (FILE_UNIX_INFO *)VAR_7;
  VAR_10 = &VAR_12->FileName[0];
  if (VAR_8->srch_inf.unicode) {
   VAR_11 = FUNC_1(VAR_10);
  } else {

   VAR_11 = FUNC_3(VAR_10, 5);
  }
 } else if (VAR_8->srch_inf.info_level == VAR_1) {
  FILE_DIRECTORY_INFO *VAR_13 =
   (FILE_DIRECTORY_INFO *)VAR_7;
  VAR_10 = &VAR_13->FileName[0];
  VAR_11 = FUNC_2(VAR_13->FileNameLength);
 } else if (VAR_8->srch_inf.info_level ==
   VAR_2) {
  FILE_FULL_DIRECTORY_INFO *VAR_14 =
   (FILE_FULL_DIRECTORY_INFO *)VAR_7;
  VAR_10 = &VAR_14->FileName[0];
  VAR_11 = FUNC_2(VAR_14->FileNameLength);
 } else if (VAR_8->srch_inf.info_level ==
   VAR_3) {
  SEARCH_ID_FULL_DIR_INFO *VAR_15 =
   (SEARCH_ID_FULL_DIR_INFO *)VAR_7;
  VAR_10 = &VAR_15->FileName[0];
  VAR_11 = FUNC_2(VAR_15->FileNameLength);
 } else if (VAR_8->srch_inf.info_level ==
   VAR_0) {
  FILE_BOTH_DIRECTORY_INFO *VAR_16 =
   (FILE_BOTH_DIRECTORY_INFO *)VAR_7;
  VAR_10 = &VAR_16->FileName[0];
  VAR_11 = FUNC_2(VAR_16->FileNameLength);
 } else if (VAR_8->srch_inf.info_level == VAR_4) {
  FIND_FILE_STANDARD_INFO *VAR_17 =
   (FIND_FILE_STANDARD_INFO *)VAR_7;
  VAR_10 = &VAR_17->FileName[0];
  VAR_11 = VAR_17->FileNameLength;
 } else {
  FUNC_0(1, "Unknown findfirst level %d",
    VAR_8->srch_inf.info_level);
 }

 if (VAR_10) {
  if (VAR_8->srch_inf.unicode) {
   __le16 *VAR_18 = (__le16 *)VAR_10;
   if (VAR_11 == 2) {

    if (VAR_18[0] == VAR_6)
     VAR_9 = 1;
   } else if (VAR_11 == 4) {

    if ((VAR_18[0] == VAR_6)
       && (VAR_18[1] == VAR_6))
     VAR_9 = 2;
   }
  } else {
   if (VAR_11 == 1) {
    if (VAR_10[0] == '.')
     VAR_9 = 1;
   } else if (VAR_11 == 2) {
    if ((VAR_10[0] == '.') && (VAR_10[1] == '.'))
     VAR_9 = 2;
   }
  }
 }

 return VAR_9;
}
