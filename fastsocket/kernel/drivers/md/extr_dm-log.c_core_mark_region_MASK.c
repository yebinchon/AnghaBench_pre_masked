
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int clean_bits; } ;
struct dm_dirty_log {scalar_t__ context; } ;
typedef int region_t ;


 int FUNC_0 (struct log_c*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_dirty_log *VAR_0, region_t VAR_1)
{
 struct log_c *VAR_2 = (struct log_c *) VAR_0->context;
 FUNC_0(VAR_2, VAR_2->clean_bits, VAR_1);
}
