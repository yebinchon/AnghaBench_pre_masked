
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {struct mapped_device* md; int mode; int holders; int target_callbacks; int devices; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (struct dm_table*,unsigned int) ;
 int FUNC_2 (int *,int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (struct dm_table*) ;
 struct dm_table* FUNC_5 (int,int ) ;

int FUNC_6(struct dm_table **VAR_3, fmode_t VAR_4,
      unsigned VAR_5, struct mapped_device *VAR_6)
{
 struct dm_table *VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->devices);
 FUNC_0(&VAR_7->target_callbacks);
 FUNC_2(&VAR_7->holders, 0);

 if (!VAR_5)
  VAR_5 = VAR_2;

 VAR_5 = FUNC_3(VAR_5, VAR_2);

 if (FUNC_1(VAR_7, VAR_5)) {
  FUNC_4(VAR_7);
  return -VAR_0;
 }

 VAR_7->mode = VAR_4;
 VAR_7->md = VAR_6;
 *VAR_3 = VAR_7;
 return 0;
}
