
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
struct uuid_command {scalar_t__ cmd; int cmdsize; int const uuid; } ;
struct TYPE_2__ {scalar_t__ magic; size_t sizeofcmds; size_t ncmds; } ;
typedef TYPE_1__ kernel_mach_header_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,size_t,size_t*) ;

__attribute__((used)) static const uuid_t *
FUNC_2(const void *VAR_2, size_t VAR_3, size_t *VAR_4)
{
 const struct uuid_command *VAR_5 = ((void*)0);
 const kernel_mach_header_t *VAR_6 = VAR_2;


 if (VAR_3 < sizeof(kernel_mach_header_t) + sizeof(struct uuid_command)) {
  FUNC_0("libkern image too small");
  return ((void*)0);
 }


 if (VAR_6->magic != VAR_1 || (VAR_6->sizeofcmds > VAR_3 - sizeof(kernel_mach_header_t))) {
  FUNC_0("invalid MachO header");
  return ((void*)0);
 }


 size_t VAR_7 = sizeof(kernel_mach_header_t);
 for (size_t VAR_8 = 0; VAR_8 < VAR_6->ncmds; VAR_8++) {
  VAR_5 = VAR_2 + VAR_7;

  if (VAR_5->cmd == VAR_0) {
   *VAR_4 = sizeof(VAR_5->uuid);
   return &VAR_5->uuid;
  }

  if (FUNC_1(VAR_5->cmdsize, VAR_7, &VAR_7) ||
    VAR_7 > VAR_3 - sizeof(struct uuid_command)) {
   return ((void*)0);
  }
 }

 return ((void*)0);
}
