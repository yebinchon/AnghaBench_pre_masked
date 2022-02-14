
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uint64_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (int ,char const*,void**,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 char const* VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_3(const char *VAR_2)
{
 uint64_t VAR_3 = 0;
 DTEntry VAR_4;
 void *VAR_5;
 unsigned int VAR_6;

 if (FUNC_1(0, "/efi/platform", &VAR_4) != VAR_0) {
  FUNC_2("EFI_get_frequency: didn't find /efi/platform\n");
  return 0;
 }
 if (FUNC_0(VAR_4,VAR_2,&VAR_5,&VAR_6) != VAR_0) {
  FUNC_2("EFI_get_frequency: property %s not found\n", VAR_2);
  return 0;
 }
 if (VAR_6 == sizeof(uint64_t)) {
  VAR_3 = *(uint64_t *) VAR_5;
  FUNC_2("EFI_get_frequency: read %s value: %llu\n",
   VAR_2, VAR_3);
 }




 if (FUNC_0(VAR_4,"InitialTSC",&VAR_5,&VAR_6) == VAR_0) {
  if (VAR_6 == sizeof(uint64_t)) {
   VAR_1 = *(uint64_t *) VAR_5;
   FUNC_2("EFI_get_frequency: read InitialTSC: %llu\n",
    VAR_1);
  }
 }

 return VAR_3;
}
