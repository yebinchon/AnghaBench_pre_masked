
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cifs_sb_info {int dummy; } ;
struct cifs_fattr {void* cf_eof; void* cf_bytes; int cf_cifsattrs; void* cf_mtime; void* cf_ctime; void* cf_atime; } ;
struct TYPE_9__ {TYPE_2__* ses; } ;
struct TYPE_8__ {int DataSize; int AllocationSize; int Attributes; int LastWriteTime; int LastWriteDate; int LastAccessTime; int LastAccessDate; } ;
struct TYPE_7__ {TYPE_1__* server; } ;
struct TYPE_6__ {int timeAdj; } ;
typedef TYPE_3__ FIND_FILE_STANDARD_INFO ;


 int FUNC_0 (struct cifs_fattr*,struct cifs_sb_info*) ;
 TYPE_5__* FUNC_1 (struct cifs_sb_info*) ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct cifs_fattr*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct cifs_fattr *VAR_0, FIND_FILE_STANDARD_INFO *VAR_1,
         struct cifs_sb_info *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2)->ses->server->timeAdj;

 FUNC_5(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->cf_atime = FUNC_2(VAR_1->LastAccessDate,
         VAR_1->LastAccessTime, VAR_3);
 VAR_0->cf_ctime = FUNC_2(VAR_1->LastWriteDate,
         VAR_1->LastWriteTime, VAR_3);
 VAR_0->cf_mtime = FUNC_2(VAR_1->LastWriteDate,
         VAR_1->LastWriteTime, VAR_3);

 VAR_0->cf_cifsattrs = FUNC_3(VAR_1->Attributes);
 VAR_0->cf_bytes = FUNC_4(VAR_1->AllocationSize);
 VAR_0->cf_eof = FUNC_4(VAR_1->DataSize);

 FUNC_0(VAR_0, VAR_2);
}
