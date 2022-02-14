
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
struct TYPE_9__ {uintptr_t data; size_t datalen; int policyname; } ;
typedef TYPE_1__ _ps_mac_policy_extension_t ;
typedef TYPE_2__* _posix_spawnattr_t ;
typedef TYPE_3__* _posix_spawn_mac_policy_extensions_t ;
struct TYPE_11__ {int psmx_alloc; int psmx_count; TYPE_1__* psmx_extensions; } ;
struct TYPE_10__ {TYPE_3__* psa_mac_extensions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (int,int,int*) ;
 TYPE_1__* FUNC_3 (TYPE_3__*,char const*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*,size_t) ;
 int FUNC_5 (int ,char const*,int) ;

int
FUNC_6(posix_spawnattr_t * __restrict VAR_3,
  const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 _posix_spawnattr_t VAR_7;
 _posix_spawn_mac_policy_extensions_t VAR_8;
 _ps_mac_policy_extension_t *VAR_9;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return VAR_0;

 VAR_7 = *(_posix_spawnattr_t *)VAR_3;
 VAR_8 = VAR_7->psa_mac_extensions;
 VAR_9 = FUNC_3(VAR_7->psa_mac_extensions, VAR_4);
 if (VAR_9 != ((void*)0)) {
  VAR_9->data = (uintptr_t)VAR_5;
  VAR_9->datalen = VAR_6;
  return 0;
 }
 else if (VAR_8 == ((void*)0)) {
  VAR_8 = VAR_7->psa_mac_extensions = FUNC_1(FUNC_0(VAR_2));
  if (VAR_8 == ((void*)0))
   return VAR_1;
  VAR_8->psmx_alloc = VAR_2;
  VAR_8->psmx_count = 0;
 }
 else if (VAR_8->psmx_count == VAR_8->psmx_alloc) {
  int VAR_10 = 0;
  if (FUNC_2(VAR_8->psmx_alloc, 2, &VAR_10))
   return VAR_1;
  size_t VAR_11 = FUNC_0(VAR_10);
  if (VAR_11 == 0)
   return VAR_1;
  VAR_8 = VAR_7->psa_mac_extensions = FUNC_4(VAR_8, VAR_11);
  if (VAR_8 == ((void*)0))
   return VAR_1;
  VAR_8->psmx_alloc = VAR_10;
 }
 VAR_9 = &VAR_8->psmx_extensions[VAR_8->psmx_count];
 FUNC_5(VAR_9->policyname, VAR_4, sizeof(VAR_9->policyname));
 VAR_9->data = (uintptr_t)VAR_5;
 VAR_9->datalen = VAR_6;
 VAR_8->psmx_count += 1;
 return 0;
}
