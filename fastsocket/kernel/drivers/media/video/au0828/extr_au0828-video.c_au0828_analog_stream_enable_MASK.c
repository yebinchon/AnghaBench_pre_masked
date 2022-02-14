
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct au0828_dev*,int,int) ;
 int FUNC_1 (int,char*) ;

int FUNC_2(struct au0828_dev *VAR_2)
{
 FUNC_1(1, "au0828_analog_stream_enable called\n");
 FUNC_0(VAR_2, VAR_1, 0x00);
 FUNC_0(VAR_2, 0x106, 0x00);

 FUNC_0(VAR_2, 0x110, 0x00);
 FUNC_0(VAR_2, 0x111, 0x00);
 FUNC_0(VAR_2, 0x114, 0xa0);
 FUNC_0(VAR_2, 0x115, 0x05);

 FUNC_0(VAR_2, 0x112, 0x00);
 FUNC_0(VAR_2, 0x113, 0x00);
 FUNC_0(VAR_2, 0x116, 0xf2);
 FUNC_0(VAR_2, 0x117, 0x00);
 FUNC_0(VAR_2, VAR_0, 0xb3);

 return 0;
}
