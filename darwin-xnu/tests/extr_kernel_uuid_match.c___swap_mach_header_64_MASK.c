
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mach_header_64 {int flags; int sizeofcmds; int ncmds; int filetype; int cpusubtype; int cputype; int magic; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mach_header_64 *VAR_0) {
 FUNC_0(VAR_0->magic);
 FUNC_0(VAR_0->cputype);
 FUNC_0(VAR_0->cpusubtype);
 FUNC_0(VAR_0->filetype);
 FUNC_0(VAR_0->ncmds);
 FUNC_0(VAR_0->sizeofcmds);
 FUNC_0(VAR_0->flags);
}
