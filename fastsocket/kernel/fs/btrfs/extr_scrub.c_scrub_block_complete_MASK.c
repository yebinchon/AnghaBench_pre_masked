
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_block {int no_io_error_seen; } ;


 int FUNC_0 (struct scrub_block*) ;
 int FUNC_1 (struct scrub_block*) ;

__attribute__((used)) static void FUNC_2(struct scrub_block *VAR_0)
{
 if (!VAR_0->no_io_error_seen)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
}
