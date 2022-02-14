
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct dm_table {int md; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct gendisk*) ;
 scalar_t__ FUNC_2 (struct gendisk*) ;
 int FUNC_3 (struct gendisk*,int ) ;
 int FUNC_4 (int ) ;
 struct gendisk* FUNC_5 (int ) ;
 struct gendisk* FUNC_6 (struct dm_table*,int) ;

__attribute__((used)) static void FUNC_7(struct dm_table *VAR_0)
{
 struct gendisk *VAR_1 = ((void*)0);

 if (!FUNC_1(FUNC_5(VAR_0->md)))
  return;

 VAR_1 = FUNC_6(VAR_0, 1);
 if (VAR_1)
  FUNC_3(FUNC_5(VAR_0->md),
           FUNC_1(VAR_1));
 else if (FUNC_2(FUNC_5(VAR_0->md)))
  FUNC_0("%s: device no longer has a valid integrity profile",
         FUNC_4(VAR_0->md));
 else
  FUNC_0("%s: unable to establish an integrity profile",
         FUNC_4(VAR_0->md));
}
