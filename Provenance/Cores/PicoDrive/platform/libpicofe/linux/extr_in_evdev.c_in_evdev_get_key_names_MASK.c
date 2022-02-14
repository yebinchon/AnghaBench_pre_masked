
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in_pdata {char const* const* key_names; } ;
struct TYPE_3__ {struct in_pdata* pdata; } ;
typedef TYPE_1__ in_drv_t ;


 int VAR_0 ;
 char const* const* VAR_1 ;

__attribute__((used)) static const char * const *
FUNC_0(const in_drv_t *VAR_2, int *VAR_3)
{
 const struct in_pdata *VAR_4 = VAR_2->pdata;
 *VAR_3 = VAR_0;

 if (VAR_4->key_names)
  return VAR_4->key_names;
 return VAR_1;
}
