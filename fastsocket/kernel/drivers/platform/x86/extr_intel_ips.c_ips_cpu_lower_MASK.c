
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ips_driver {int orig_turbo_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct ips_driver *VAR_4)
{
 u64 VAR_5;
 u16 VAR_6, VAR_7;

 FUNC_0(VAR_1, VAR_5);

 VAR_6 = VAR_5 & VAR_3;
 VAR_7 = VAR_6 - 8;


 if (VAR_7 < (VAR_4->orig_turbo_limit & VAR_3))
  VAR_7 = VAR_4->orig_turbo_limit & VAR_3;

 FUNC_1(VAR_0, (VAR_7 * 10) / 8);

 VAR_5 |= VAR_2 | VAR_2;
 FUNC_2(VAR_1, VAR_5);

 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_7;

 FUNC_2(VAR_1, VAR_5);
}
