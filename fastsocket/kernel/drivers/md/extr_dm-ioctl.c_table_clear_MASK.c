
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {struct mapped_device* md; int * new_map; } ;
struct dm_ioctl {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mapped_device*,struct dm_ioctl*) ;
 struct hash_cell* FUNC_2 (struct dm_ioctl*) ;
 int VAR_2 ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct dm_ioctl *VAR_3, size_t VAR_4)
{
 struct hash_cell *VAR_5;
 struct mapped_device *VAR_6;

 FUNC_5(&VAR_2);

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5) {
  FUNC_0("device doesn't appear to be in the dev hash table.");
  FUNC_6(&VAR_2);
  return -VAR_1;
 }

 if (VAR_5->new_map) {
  FUNC_4(VAR_5->new_map);
  VAR_5->new_map = ((void*)0);
 }

 VAR_3->flags &= ~VAR_0;

 FUNC_1(VAR_5->md, VAR_3);
 VAR_6 = VAR_5->md;
 FUNC_6(&VAR_2);
 FUNC_3(VAR_6);

 return 0;
}
