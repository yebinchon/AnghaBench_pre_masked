
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int uuid_string_t ;
typedef scalar_t__ uint32_t ;
struct uuid_command {int uuid; } ;
struct mach_header_64 {scalar_t__ magic; unsigned int ncmds; } ;
struct mach_header {scalar_t__ magic; unsigned int ncmds; } ;
struct load_command {scalar_t__ cmd; scalar_t__ cmdsize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct mach_header*) ;
 int FUNC_3 (struct mach_header_64*) ;
 int FUNC_4 (struct mach_header*,size_t) ;
 struct mach_header* FUNC_5 (char*,size_t*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static bool FUNC_8(char *VAR_5, uuid_t VAR_6) {
 size_t VAR_7 = 0;
 bool VAR_8 = 0;
 unsigned int VAR_9 = 0;
 struct load_command *VAR_10 = ((void*)0);
 bool VAR_11 = 0;

 struct mach_header *VAR_12 = FUNC_5(VAR_5, &VAR_7);
 if (!VAR_12) {
  return 0;
 }
 if (VAR_12->magic == VAR_3 || VAR_12->magic == VAR_1) {

  struct mach_header *VAR_13 = VAR_12;
  if (VAR_13->magic == VAR_1) {
   FUNC_2(VAR_13);
   VAR_8 = 1;
  }
  VAR_9 = VAR_13->ncmds;

  VAR_10 = (struct load_command *)(VAR_13 + 1);
 } else if (VAR_12->magic == VAR_4 || VAR_12->magic == VAR_2) {

  struct mach_header_64 *VAR_14 = (struct mach_header_64 *)VAR_12;
  if (VAR_14->magic == VAR_2) {
   FUNC_3(VAR_14);
   VAR_8 = 1;
  }
  VAR_9 = VAR_14->ncmds;
  VAR_10 = (struct load_command *)(VAR_14 + 1);
 } else {

  FUNC_4(VAR_12, VAR_7);
  return 0;
 }
 for (unsigned int VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  uint32_t VAR_16 = VAR_10->cmd;
  uint32_t VAR_17 = VAR_10->cmdsize;
  if (VAR_8) {
   FUNC_0(VAR_16);
   FUNC_0(VAR_17);
  }
  if (VAR_16 == VAR_0) {
   struct uuid_command *VAR_18 =
     (struct uuid_command *)VAR_10;
   FUNC_6(VAR_6, VAR_18->uuid);
   uuid_string_t VAR_19;
   FUNC_7(VAR_6, VAR_19);
   FUNC_1("Trying test UUID %s", VAR_19);
   VAR_11 = 1;
   break;
  }
  VAR_10 = (struct load_command *)((uintptr_t)VAR_10 + VAR_17);
 }
 FUNC_4(VAR_12, VAR_7);
 return VAR_11;
}
