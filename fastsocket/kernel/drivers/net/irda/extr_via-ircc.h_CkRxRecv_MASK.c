
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_ircc_cb {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(__u16 VAR_2, struct via_ircc_cb *VAR_3)
{
 __u8 VAR_4, VAR_5;
 __u16 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_7 = VAR_5;
 VAR_6 = (VAR_7 << 8) | VAR_4;
 FUNC_1(10);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_7 = VAR_5;
 VAR_8 = (VAR_7 << 8) | VAR_4;
 if (VAR_8 != VAR_6)
  return 1;
 else
  return 0;

}
