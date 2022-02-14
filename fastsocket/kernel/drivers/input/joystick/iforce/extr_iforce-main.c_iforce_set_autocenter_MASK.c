
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct input_dev {int dummy; } ;
struct iforce {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iforce*,int ,unsigned char*) ;
 struct iforce* FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_1, u16 VAR_2)
{
 struct iforce *VAR_3 = FUNC_1(VAR_1);
 unsigned char VAR_4[3];

 VAR_4[0] = 0x03;
 VAR_4[1] = VAR_2 >> 9;
 FUNC_0(VAR_3, VAR_0, VAR_4);

 VAR_4[0] = 0x04;
 VAR_4[1] = 0x01;
 FUNC_0(VAR_3, VAR_0, VAR_4);
}
