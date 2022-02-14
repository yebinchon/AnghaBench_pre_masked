
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x {int (* read_dev ) (struct wm831x*,unsigned short,int,void*) ;int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,unsigned short,unsigned short) ;
 int FUNC_3 (struct wm831x*,unsigned short,int,void*) ;

__attribute__((used)) static int FUNC_4(struct wm831x *VAR_0, unsigned short VAR_1,
         int VAR_2, void *VAR_3)
{
 int VAR_4, VAR_5;
 u16 *VAR_6 = VAR_3;

 FUNC_0(VAR_2 % 2);
 FUNC_0(VAR_2 <= 0);

 VAR_4 = VAR_0->read_dev(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_2 / 2; VAR_5++) {
  VAR_6[VAR_5] = FUNC_1(VAR_6[VAR_5]);

  FUNC_2(VAR_0->dev, "Read %04x from R%d(0x%x)\n",
    VAR_6[VAR_5], VAR_1 + VAR_5, VAR_1 + VAR_5);
 }

 return 0;
}
