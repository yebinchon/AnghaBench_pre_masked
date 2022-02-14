
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int) ;
 int FUNC_3 (struct cx231xx*,int,int *,int,int ,int ) ;
 int FUNC_4 (struct cx231xx*,int,int *) ;
 int FUNC_5 (struct cx231xx*,int,int) ;

void FUNC_6(struct cx231xx *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;
 u8 VAR_5 = 0;

 VAR_3 = VAR_3 & 0xFC0003FF;
 VAR_3 = VAR_3 | 0x03FDFC00;
 FUNC_3(VAR_2, VAR_3, (u8 *)&VAR_4, 4, 0, 0);

 FUNC_4(VAR_2, 0x07, &VAR_5);
 FUNC_1(" verve_read_byte address0x07=0x%x\n", VAR_5);
 FUNC_5(VAR_2, 0x07, 0xF4);
 FUNC_4(VAR_2, 0x07, &VAR_5);
 FUNC_1(" verve_read_byte address0x07=0x%x\n", VAR_5);

 FUNC_0(VAR_2, 1, 2);

 FUNC_2(VAR_2, VAR_0, 0x0500FE00);
 FUNC_2(VAR_2, VAR_1, 0xFFFDFFFF);

}
