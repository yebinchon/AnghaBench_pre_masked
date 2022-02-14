
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
struct TYPE_5__ {int (* clean_binds ) (void*,int*,int*) ;} ;
struct TYPE_4__ {char* name; int probed; int* binds; int key_count; int does_combos; int drv_fd_hnd; char const* const* key_names; void* drv_data; int drv_id; } ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int* FUNC_2 (int ,int) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int) ;
 int FUNC_10 (void*,int*,int*) ;

void FUNC_11(const char *VAR_5, int VAR_6, void *VAR_7,
  int VAR_8, const char * const *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13 = 0, *VAR_14;
 char VAR_15[256], *VAR_16, *VAR_17;

 FUNC_9(VAR_15, VAR_5, sizeof(VAR_15));
 VAR_15[sizeof(VAR_15)-12] = 0;
 VAR_16 = VAR_15 + FUNC_8(VAR_15);

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
 {
  if (VAR_3[VAR_11].name == ((void*)0))
   continue;
  if (FUNC_6(VAR_3[VAR_11].name, VAR_15) == 0)
  {
   if (VAR_3[VAR_11].probed) {
    VAR_13++;
    FUNC_5(VAR_16, " [%d]", VAR_13);
    continue;
   }
   goto update;
  }
 }

 if (VAR_11 >= VAR_1)
 {

  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
   if (!VAR_3[VAR_11].probed) break;
  if (VAR_11 >= VAR_1) {
   FUNC_4("input: too many devices, can't add %s\n", VAR_15);
   return;
  }
  FUNC_3(&VAR_3[VAR_11]);
 }

 VAR_17 = FUNC_7(VAR_15);
 if (VAR_17 == ((void*)0))
  return;

 VAR_14 = FUNC_2(VAR_4, VAR_8);
 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_17);
  return;
 }

 VAR_3[VAR_11].name = VAR_17;
 VAR_3[VAR_11].binds = VAR_14;
 VAR_3[VAR_11].key_count = VAR_8;
 if (VAR_11 + 1 > VAR_2)
  VAR_2 = VAR_11 + 1;

 FUNC_4("input: new device #%d \"%s\"\n", VAR_11, VAR_15);
update:
 VAR_3[VAR_11].probed = 1;
 VAR_3[VAR_11].does_combos = VAR_10;
 VAR_3[VAR_11].drv_id = VAR_4;
 VAR_3[VAR_11].drv_fd_hnd = VAR_6;
 VAR_3[VAR_11].key_names = VAR_9;
 VAR_3[VAR_11].drv_data = VAR_7;

 if (VAR_3[VAR_11].binds != ((void*)0)) {
  VAR_12 = FUNC_0(VAR_4).clean_binds(VAR_7, VAR_3[VAR_11].binds,
   VAR_3[VAR_11].binds + VAR_8 * VAR_0);
  if (VAR_12 == 0) {

   FUNC_1(VAR_3[VAR_11].binds);
   VAR_3[VAR_11].binds = ((void*)0);
  }
 }
}
