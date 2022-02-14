
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ucbus_write_cmd {int member_0; int member_1; } ;
struct sd {int gspca_dev; } ;


 int FUNC_0 (struct ucbus_write_cmd*) ;
 int FUNC_1 (int *,struct ucbus_write_cmd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_0, u16 VAR_1)
{
 struct ucbus_write_cmd VAR_2[2] = {
  {0xf810, VAR_1 >> 8},
  {0xf811, VAR_1}
 };

 FUNC_1(&VAR_0->gspca_dev, VAR_2, FUNC_0(VAR_2), 2);
}
