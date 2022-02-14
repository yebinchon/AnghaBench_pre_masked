
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {char const* name; void* base; scalar_t__ starting_element_count; scalar_t__ size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 TYPE_1__* VAR_3 ;

int FUNC_2(uint64_t VAR_4, const char *VAR_5, void *VAR_6,
   uint64_t VAR_7, uint64_t VAR_8)
{
 char *VAR_9;
 if (!VAR_6) {
  FUNC_0
      ("ERROR: cvmx_fpa_setup_pool: NULL buffer pointer!\n");
  return -1;
 }
 if (VAR_4 >= VAR_2) {
  FUNC_0("ERROR: cvmx_fpa_setup_pool: Illegal pool!\n");
  return -1;
 }

 if (VAR_7 < VAR_1) {
  FUNC_0
      ("ERROR: cvmx_fpa_setup_pool: Block size too small.\n");
  return -1;
 }

 if (((unsigned long)VAR_6 & (VAR_0 - 1)) != 0) {
  FUNC_0
      ("ERROR: cvmx_fpa_setup_pool: Buffer not aligned properly.\n");
  return -1;
 }

 VAR_3[VAR_4].name = VAR_5;
 VAR_3[VAR_4].size = VAR_7;
 VAR_3[VAR_4].starting_element_count = VAR_8;
 VAR_3[VAR_4].base = VAR_6;

 VAR_9 = (char *)VAR_6;
 while (VAR_8--) {
  FUNC_1(VAR_9, VAR_4, 0);
  VAR_9 += VAR_7;
 }
 return 0;
}
