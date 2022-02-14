
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment_command_64 {int flags; int nsects; int initprot; int maxprot; int filesize; int fileoff; int vmsize; int vmaddr; int segname; int cmdsize; int cmd; } ;
struct segment_command {int flags; int nsects; int initprot; int maxprot; int filesize; int fileoff; int vmsize; int vmaddr; int segname; int cmdsize; int cmd; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_1(const struct segment_command *VAR_0,
    struct segment_command_64 *VAR_1)
{
 VAR_1->cmd = VAR_0->cmd;
 VAR_1->cmdsize = VAR_0->cmdsize;
 FUNC_0(VAR_0->segname, VAR_1->segname, sizeof(VAR_1->segname));
 VAR_1->vmaddr = VAR_0->vmaddr;
 VAR_1->vmsize = VAR_0->vmsize;
 VAR_1->fileoff = VAR_0->fileoff;
 VAR_1->filesize = VAR_0->filesize;
 VAR_1->maxprot = VAR_0->maxprot;
 VAR_1->initprot = VAR_0->initprot;
 VAR_1->nsects = VAR_0->nsects;
 VAR_1->flags = VAR_0->flags;
}
