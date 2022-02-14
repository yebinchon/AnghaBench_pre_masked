
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filename; scalar_t__ flags; } ;
typedef TYPE_1__ FILEENTRIES ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{

  if(((FILEENTRIES *)VAR_0)->filename[0] == '.' || ((FILEENTRIES *)VAR_1)->filename[0] == '.')
  {
    if(FUNC_0(((FILEENTRIES *)VAR_0)->filename, ".") == 0) { return -1; }
    if(FUNC_0(((FILEENTRIES *)VAR_1)->filename, ".") == 0) { return 1; }
    if(FUNC_0(((FILEENTRIES *)VAR_0)->filename, "..") == 0) { return -1; }
    if(FUNC_0(((FILEENTRIES *)VAR_1)->filename, "..") == 0) { return 1; }
  }


  if(((FILEENTRIES *)VAR_0)->flags && !((FILEENTRIES *)VAR_1)->flags) return -1;
  if(!((FILEENTRIES *)VAR_0)->flags && ((FILEENTRIES *)VAR_1)->flags) return 1;

  return FUNC_1(((FILEENTRIES *)VAR_0)->filename, ((FILEENTRIES *)VAR_1)->filename);
}
