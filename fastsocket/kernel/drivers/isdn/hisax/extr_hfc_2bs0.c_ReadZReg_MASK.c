
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct BCState {TYPE_1__* cs; } ;
struct TYPE_4__ {int (* BC_Read_Reg ) (TYPE_1__*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct BCState *VAR_4, u_char VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->cs);
 VAR_6 = 256 * VAR_4->cs->BC_Read_Reg(VAR_4->cs, VAR_1, VAR_5 | VAR_0 | VAR_2);
 FUNC_0(VAR_4->cs);
 VAR_6 += VAR_4->cs->BC_Read_Reg(VAR_4->cs, VAR_1, VAR_5 | VAR_0 | VAR_3);
 return (VAR_6);
}
