
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks_net {int rc_ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ks_net*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ks_net *VAR_4)
{
 VAR_4->rc_ier = 0x00;

 FUNC_0(VAR_4, VAR_3, 0xffff);


 VAR_4->rc_ier = (VAR_0 | VAR_2 | VAR_1);
}
