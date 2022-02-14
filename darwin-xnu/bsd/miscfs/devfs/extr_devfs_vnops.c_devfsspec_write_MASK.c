
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_write_args {int a_vp; } ;
typedef int devnode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct vnop_write_args*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct vnop_write_args *VAR_4)






{
 devnode_t * VAR_5 = FUNC_2(VAR_4->a_vp);

 FUNC_3(VAR_5, VAR_0 | VAR_1);

 return (FUNC_0 (VAR_2, FUNC_1(VAR_3), VAR_4));
}
