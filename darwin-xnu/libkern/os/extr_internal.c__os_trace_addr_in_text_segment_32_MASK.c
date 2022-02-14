
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct segment_command {scalar_t__ cmd; uintptr_t vmaddr; uintptr_t vmsize; int cmdsize; int segname; } ;
struct mach_header {scalar_t__ ncmds; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_1(const void *VAR_2, const void *VAR_3)
{
    const struct mach_header *VAR_4 = (const struct mach_header *) VAR_2;
    const struct segment_command *VAR_5 = (const struct segment_command *)(const void *)((const char *)VAR_4 + sizeof(struct mach_header));

    for (uint32_t VAR_6 = 0; VAR_6 < VAR_4->ncmds; VAR_6++) {
        if (VAR_5->cmd == VAR_0) {
            if (FUNC_0(VAR_5->segname, VAR_1, sizeof(VAR_5->segname)) == 0) {
                return ((uintptr_t)VAR_3 >= (VAR_5->vmaddr) && (uintptr_t)VAR_3 < (VAR_5->vmaddr + VAR_5->vmsize));
            }
        }
        VAR_5 = (const struct segment_command *)(const void *)((const char *)VAR_5 + VAR_5->cmdsize);
    }

    return 0;
}
