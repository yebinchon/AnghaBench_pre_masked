
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_iop {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mac_iop volatile*,int ) ;
 int FUNC_1 (struct mac_iop volatile*,int ,int ) ;

__attribute__((used)) static int FUNC_2(volatile struct mac_iop *VAR_1)
{
 int VAR_2;

 VAR_2 = (FUNC_0(VAR_1, VAR_0) == 0xFF);
 FUNC_1(VAR_1, VAR_0, 0);
 return VAR_2;
}
