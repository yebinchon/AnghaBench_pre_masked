
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cifs_tcon {int resource_id; } ;
struct cifs_fscache_super_auxdata {int resource_id; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int auxdata ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,struct cifs_fscache_super_auxdata*,int) ;
 int FUNC_1 (struct cifs_fscache_super_auxdata*,int ,int) ;

__attribute__((used)) static enum
fscache_checkaux FUNC_2(void *VAR_2,
           const void *VAR_3,
           uint16_t VAR_4)
{
 struct cifs_fscache_super_auxdata VAR_5;
 const struct cifs_tcon *VAR_6 = VAR_2;

 if (VAR_4 != sizeof(VAR_5))
  return VAR_0;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.resource_id = VAR_6->resource_id;

 if (FUNC_0(VAR_3, &VAR_5, VAR_4) != 0)
  return VAR_0;

 return VAR_1;
}
