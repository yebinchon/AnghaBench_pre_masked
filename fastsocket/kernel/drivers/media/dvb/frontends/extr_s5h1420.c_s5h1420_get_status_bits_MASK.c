
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s5h1420_state {int dummy; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct s5h1420_state*,int) ;

__attribute__((used)) static fe_status_t FUNC_1(struct s5h1420_state* VAR_5)
{
 u8 VAR_6;
 fe_status_t VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5, 0x14);
 if (VAR_6 & 0x02)
  VAR_7 |= VAR_2;
 if (VAR_6 & 0x01)
  VAR_7 |= VAR_0;
 VAR_6 = FUNC_0(VAR_5, 0x36);
 if (VAR_6 & 0x01)
  VAR_7 |= VAR_4;
 if (VAR_6 & 0x20)
  VAR_7 |= VAR_3;
 if (VAR_7 == (VAR_2|VAR_0|VAR_4|VAR_3))
  VAR_7 |= VAR_1;

 return VAR_7;
}
