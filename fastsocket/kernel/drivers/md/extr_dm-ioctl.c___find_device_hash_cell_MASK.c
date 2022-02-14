
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_cell {scalar_t__ new_map; scalar_t__ uuid; scalar_t__ name; } ;
struct dm_ioctl {char* uuid; char* name; int flags; scalar_t__ dev; } ;


 int VAR_0 ;
 struct hash_cell* FUNC_0 (scalar_t__) ;
 struct hash_cell* FUNC_1 (char*) ;
 struct hash_cell* FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,int) ;

__attribute__((used)) static struct hash_cell *FUNC_4(struct dm_ioctl *VAR_1)
{
 struct hash_cell *VAR_2 = ((void*)0);

 if (*VAR_1->uuid) {
  if (*VAR_1->name || VAR_1->dev)
   return ((void*)0);

  VAR_2 = FUNC_2(VAR_1->uuid);
  if (!VAR_2)
   return ((void*)0);
 } else if (*VAR_1->name) {
  if (VAR_1->dev)
   return ((void*)0);

  VAR_2 = FUNC_1(VAR_1->name);
  if (!VAR_2)
   return ((void*)0);
 } else if (VAR_1->dev) {
  VAR_2 = FUNC_0(VAR_1->dev);
  if (!VAR_2)
   return ((void*)0);
 } else
  return ((void*)0);





 FUNC_3(VAR_1->name, VAR_2->name, sizeof(VAR_1->name));
 if (VAR_2->uuid)
  FUNC_3(VAR_1->uuid, VAR_2->uuid, sizeof(VAR_1->uuid));
 else
  VAR_1->uuid[0] = '\0';

 if (VAR_2->new_map)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;

 return VAR_2;
}
