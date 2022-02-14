
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {void* cf_mtime; void* cf_ctime; void* cf_atime; void* cf_bytes; void* cf_eof; int cf_cifsattrs; } ;
struct TYPE_3__ {int LastWriteTime; int ChangeTime; int LastAccessTime; int AllocationSize; int EndOfFile; int ExtFileAttributes; } ;
typedef TYPE_1__ FILE_DIRECTORY_INFO ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct cifs_fattr*,struct cifs_sb_info*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct cifs_fattr*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct cifs_fattr *VAR_0, FILE_DIRECTORY_INFO *VAR_1,
         struct cifs_sb_info *VAR_2)
{
 FUNC_4(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->cf_cifsattrs = FUNC_2(VAR_1->ExtFileAttributes);
 VAR_0->cf_eof = FUNC_3(VAR_1->EndOfFile);
 VAR_0->cf_bytes = FUNC_3(VAR_1->AllocationSize);
 VAR_0->cf_atime = FUNC_0(VAR_1->LastAccessTime);
 VAR_0->cf_ctime = FUNC_0(VAR_1->ChangeTime);
 VAR_0->cf_mtime = FUNC_0(VAR_1->LastWriteTime);

 FUNC_1(VAR_0, VAR_2);
}
