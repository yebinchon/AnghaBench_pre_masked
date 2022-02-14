
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int * firmware; int init_data; int init_ops; int init_ops_offsets; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0)
{
 FUNC_0(VAR_0->init_ops_offsets);
 FUNC_0(VAR_0->init_ops);
 FUNC_0(VAR_0->init_data);
 FUNC_1(VAR_0->firmware);
 VAR_0->firmware = ((void*)0);
}
