
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* binds; int key_count; char** key_names; int drv_id; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* get_key_code ) (char const*) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int* FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char**,int) ;
 int FUNC_8 (char const*) ;

int FUNC_9(int VAR_2, const char *VAR_3, int VAR_4, int VAR_5)
{
 in_dev_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == ((void*)0) || VAR_5 >= VAR_0)
  return -1;


 if (VAR_3[0] == '\\' && VAR_3[1] == 'x') {
  char *VAR_10 = ((void*)0);
  VAR_9 = (int)FUNC_7(VAR_3 + 2, &VAR_10, 16);
  if (VAR_10 == ((void*)0) || *VAR_10 != 0)
   VAR_9 = -1;
 }
 else {

  if (VAR_6->binds == ((void*)0)) {
   VAR_6->binds = FUNC_3(VAR_6->drv_id, VAR_6->key_count);
   if (VAR_6->binds == ((void*)0))
    return -1;
  }

  VAR_9 = -1;
  if (VAR_6->key_names != ((void*)0)) {
   for (VAR_7 = 0; VAR_7 < VAR_6->key_count; VAR_7++) {
    const char *VAR_11 = VAR_6->key_names[VAR_7];
    if (VAR_11 != ((void*)0) && FUNC_5(VAR_11, VAR_3) == 0) {
     VAR_9 = VAR_7;
     break;
    }
   }
  }

  if (VAR_9 < 0)
   VAR_9 = FUNC_0(VAR_6->drv_id).get_key_code(VAR_3);
  if (VAR_9 < 0 && FUNC_6(VAR_3) == 1) {

   VAR_9 = VAR_3[0];
  }
 }

 if (VAR_9 < 0 || VAR_9 >= VAR_6->key_count) {
  FUNC_4("input: bad key: %s\n", VAR_3);
  return -1;
 }

 if (VAR_5 == VAR_1) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   VAR_6->binds[FUNC_1(VAR_9, VAR_7)] = 0;
  return 0;
 }

 VAR_8 = FUNC_1(VAR_9, VAR_5);
 if (VAR_6->binds[VAR_8] == -1)
  VAR_6->binds[VAR_8] = 0;
 VAR_6->binds[VAR_8] |= VAR_4;
 return 0;
}
