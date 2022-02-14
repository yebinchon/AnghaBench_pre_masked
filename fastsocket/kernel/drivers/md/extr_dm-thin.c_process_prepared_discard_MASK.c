
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {int td; } ;
struct dm_thin_new_mapping {int virt_block; struct thin_c* tc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_3(struct dm_thin_new_mapping *VAR_0)
{
 int VAR_1;
 struct thin_c *VAR_2 = VAR_0->tc;

 VAR_1 = FUNC_1(VAR_2->td, VAR_0->virt_block);
 if (VAR_1)
  FUNC_0("dm_thin_remove_block() failed");

 FUNC_2(VAR_0);
}
