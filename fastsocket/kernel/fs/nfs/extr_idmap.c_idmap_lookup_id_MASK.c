
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idmap_hashtable {int dummy; } ;
struct idmap_hashent {scalar_t__ ih_id; scalar_t__ ih_namelen; int ih_expires; } ;
typedef scalar_t__ __u32 ;


 struct idmap_hashent* FUNC_0 (struct idmap_hashtable*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static struct idmap_hashent *
FUNC_2(struct idmap_hashtable *VAR_1, __u32 VAR_2)
{
 struct idmap_hashent *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0))
  return ((void*)0);
 if (VAR_3->ih_id != VAR_2 || VAR_3->ih_namelen == 0)
  return ((void*)0);
 if (FUNC_1(VAR_0, VAR_3->ih_expires))
  return ((void*)0);
 return VAR_3;
}
