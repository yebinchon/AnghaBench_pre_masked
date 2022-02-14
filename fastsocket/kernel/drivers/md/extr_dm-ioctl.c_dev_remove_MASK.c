
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {int name; struct mapped_device* md; } ;
struct dm_ioctl {int flags; int event_nr; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hash_cell* FUNC_1 (struct dm_ioctl*) ;
 int FUNC_2 (struct hash_cell*) ;
 int VAR_3 ;
 int FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (struct mapped_device*,int ,int ) ;
 int FUNC_5 (struct mapped_device*) ;
 int FUNC_6 (struct mapped_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dm_ioctl *VAR_4, size_t VAR_5)
{
 struct hash_cell *VAR_6;
 struct mapped_device *VAR_7;
 int VAR_8;

 FUNC_7(&VAR_3);
 VAR_6 = FUNC_1(VAR_4);

 if (!VAR_6) {
  FUNC_0("device doesn't appear to be in the dev hash table.");
  FUNC_8(&VAR_3);
  return -VAR_1;
 }

 VAR_7 = VAR_6->md;




 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8) {
  FUNC_0("unable to remove open device %s", VAR_6->name);
  FUNC_8(&VAR_3);
  FUNC_6(VAR_7);
  return VAR_8;
 }

 FUNC_2(VAR_6);
 FUNC_8(&VAR_3);

 if (!FUNC_4(VAR_7, VAR_2, VAR_4->event_nr))
  VAR_4->flags |= VAR_0;

 FUNC_6(VAR_7);
 FUNC_3(VAR_7);
 return 0;
}
