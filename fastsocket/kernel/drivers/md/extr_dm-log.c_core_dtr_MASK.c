
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_c {int clean_bits; } ;
struct dm_dirty_log {scalar_t__ context; } ;


 int FUNC_0 (struct log_c*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_dirty_log *VAR_0)
{
 struct log_c *VAR_1 = (struct log_c *) VAR_0->context;

 FUNC_1(VAR_1->clean_bits);
 FUNC_0(VAR_1);
}
