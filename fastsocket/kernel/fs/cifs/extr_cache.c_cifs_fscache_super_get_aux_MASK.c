
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cifs_tcon {int resource_id; } ;
struct cifs_fscache_super_auxdata {int resource_id; } ;
typedef int auxdata ;


 int FUNC_0 (void*,struct cifs_fscache_super_auxdata*,int) ;
 int FUNC_1 (struct cifs_fscache_super_auxdata*,int ,int) ;

__attribute__((used)) static uint16_t
FUNC_2(const void *VAR_0, void *VAR_1,
      uint16_t VAR_2)
{
 struct cifs_fscache_super_auxdata VAR_3;
 const struct cifs_tcon *VAR_4 = VAR_0;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.resource_id = VAR_4->resource_id;

 if (VAR_2 > sizeof(VAR_3))
  VAR_2 = sizeof(VAR_3);

 FUNC_0(VAR_1, &VAR_3, VAR_2);

 return VAR_2;
}
