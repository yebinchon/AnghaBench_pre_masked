
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlfb_data {char* edid; int udev; } ;


 int FUNC_0 (int ,int ,int,int,int,int,char*,int,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dlfb_data *VAR_0)
{
 int VAR_1;
 int VAR_2;
 char VAR_3[2];

 for (VAR_1 = 0; VAR_1 < 128; VAR_1++) {
  VAR_2 =
      FUNC_0(VAR_0->udev,
        FUNC_1(VAR_0->udev, 0), (0x02),
        (0x80 | (0x02 << 5)), VAR_1 << 8, 0xA1, VAR_3, 2,
        0);

  VAR_0->edid[VAR_1] = VAR_3[1];
 }

}
