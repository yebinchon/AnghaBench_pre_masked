
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int * b_end_io; } ;
typedef int bh_end_io_t ;


 int FUNC_0 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_1(struct buffer_head *VAR_0,
       bh_end_io_t *VAR_1)
{
 VAR_0->b_end_io = VAR_1;
 FUNC_0(VAR_0);
}
