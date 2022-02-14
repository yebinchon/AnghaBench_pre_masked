
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_pageout_args {int a_flags; int a_size; int a_pl_offset; int a_pl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;

int
FUNC_1(struct vnop_pageout_args *VAR_4)
{
        if ( !(VAR_4->a_flags & VAR_3))
         FUNC_0(VAR_4->a_pl, VAR_4->a_pl_offset, VAR_4->a_size, VAR_2 | VAR_1);
 return (VAR_0);
}
