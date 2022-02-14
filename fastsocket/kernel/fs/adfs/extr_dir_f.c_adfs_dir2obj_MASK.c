
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_info {int attr; void* size; void* execaddr; void* loadaddr; void* file_id; int name; int name_len; } ;
struct adfs_direntry {int newdiratts; int dirlen; int direxec; int dirload; int dirinddiscadd; int dirobname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct object_info *VAR_1, struct adfs_direntry *VAR_2)
{
 VAR_1->name_len = FUNC_0(VAR_1->name, VAR_2->dirobname, VAR_0);
 VAR_1->file_id = FUNC_1(VAR_2->dirinddiscadd, 3);
 VAR_1->loadaddr = FUNC_1(VAR_2->dirload, 4);
 VAR_1->execaddr = FUNC_1(VAR_2->direxec, 4);
 VAR_1->size = FUNC_1(VAR_2->dirlen, 4);
 VAR_1->attr = VAR_2->newdiratts;
}
