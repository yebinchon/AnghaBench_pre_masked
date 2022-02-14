
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int NextEntryOffset; } ;
struct TYPE_3__ {int FileNameLength; } ;
typedef TYPE_1__ FIND_FILE_STANDARD_INFO ;
typedef TYPE_2__ FILE_DIRECTORY_INFO ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*,char*,...) ;
 int FUNC_1 (int,char*,char*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static char *FUNC_3(char *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4;
 FILE_DIRECTORY_INFO *VAR_5 = (FILE_DIRECTORY_INFO *)VAR_1;

 if (VAR_3 == VAR_0) {
  FIND_FILE_STANDARD_INFO *VAR_6;
  VAR_6 = (FIND_FILE_STANDARD_INFO *)VAR_5;

  VAR_4 = VAR_1 + sizeof(FIND_FILE_STANDARD_INFO) +
    VAR_6->FileNameLength;
 } else
  VAR_4 = VAR_1 + FUNC_2(VAR_5->NextEntryOffset);
 FUNC_1(1, "new entry %p old entry %p", VAR_4, VAR_1);

 if (VAR_4 >= VAR_2) {
  FUNC_0(1, "search entry %p began after end of SMB %p old entry %p",
   VAR_4, VAR_2, VAR_1);
  return ((void*)0);
 } else if (((VAR_3 == VAR_0) &&
      (VAR_4 + sizeof(FIND_FILE_STANDARD_INFO) > VAR_2))
    || ((VAR_3 != VAR_0) &&
     (VAR_4 + sizeof(FILE_DIRECTORY_INFO) > VAR_2))) {
  FUNC_0(1, "search entry %p extends after end of SMB %p",
   VAR_4, VAR_2);
  return ((void*)0);
 } else
  return VAR_4;

}
