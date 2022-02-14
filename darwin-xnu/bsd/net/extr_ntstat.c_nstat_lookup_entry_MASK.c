
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int nstat_provider_id_t ;
typedef int nstat_provider_cookie_t ;
struct TYPE_4__ {int (* nstat_lookup ) (void const*,int ,int *) ;} ;
typedef TYPE_1__ nstat_provider ;
typedef int errno_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (void const*,int ,int *) ;

__attribute__((used)) static errno_t
FUNC_2(
 nstat_provider_id_t VAR_1,
 const void *VAR_2,
 u_int32_t VAR_3,
 nstat_provider **VAR_4,
 nstat_provider_cookie_t *VAR_5)
{
 *VAR_4 = FUNC_0(VAR_1);
 if (*VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 return (*VAR_4)->nstat_lookup(VAR_2, VAR_3, VAR_5);
}
