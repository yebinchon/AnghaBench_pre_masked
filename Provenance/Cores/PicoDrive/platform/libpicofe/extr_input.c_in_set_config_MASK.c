
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int names ;
struct TYPE_4__ {int key_count; char const* const* key_names; int drv_data; int drv_id; scalar_t__ probed; } ;
typedef TYPE_1__ in_dev_t ;
struct TYPE_5__ {int (* set_config ) (int ,int,int const) ;} ;


 TYPE_3__ FUNC_0 (int ) ;
 int VAR_0 ;


 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int const) ;

int FUNC_5(int VAR_2, int VAR_3, const void *VAR_4, int VAR_5)
{
 const char * const *VAR_6;
 const int *VAR_7 = VAR_4;
 in_dev_t *VAR_8;
 int VAR_9;

 if (VAR_3 == VAR_0)
  return FUNC_2(*VAR_7);

 VAR_8 = FUNC_1(VAR_2);
 if (VAR_8 == ((void*)0))
  return -1;

 switch (VAR_3) {
 case 128:
  VAR_6 = VAR_4;
  VAR_9 = VAR_5 / sizeof(VAR_6[0]);

  if (VAR_9 < VAR_8->key_count) {
   FUNC_3("input: set_key_names: not enough keys\n");
   return -1;
  }

  VAR_8->key_names = VAR_6;
  return 0;
 case 129:

  VAR_1 = VAR_2;
  return 0;
 default:
  break;
 }

 if (VAR_8->probed)
  return FUNC_0(VAR_8->drv_id).set_config(VAR_8->drv_data, VAR_3, *VAR_7);

 return -1;
}
