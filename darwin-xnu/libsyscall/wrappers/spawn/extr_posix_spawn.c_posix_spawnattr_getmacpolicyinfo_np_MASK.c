
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
struct TYPE_4__ {scalar_t__ datalen; scalar_t__ data; } ;
typedef TYPE_1__ _ps_mac_policy_extension_t ;
typedef TYPE_2__* _posix_spawnattr_t ;
struct TYPE_5__ {int psa_mac_extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;

int
FUNC_1(const posix_spawnattr_t * __restrict VAR_2,
  const char *VAR_3, void **VAR_4, size_t *VAR_5)
{
 _posix_spawnattr_t VAR_6;
 _ps_mac_policy_extension_t *VAR_7;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return VAR_0;

 VAR_6 = *(_posix_spawnattr_t *)VAR_2;
 VAR_7 = FUNC_0(VAR_6->psa_mac_extensions, VAR_3);
 if (VAR_7 == ((void*)0))
  return VAR_1;
 *VAR_4 = (void *)(uintptr_t)VAR_7->data;
 if (VAR_5 != ((void*)0)) {
  *VAR_5 = (size_t)VAR_7->datalen;
 }
 return 0;
}
