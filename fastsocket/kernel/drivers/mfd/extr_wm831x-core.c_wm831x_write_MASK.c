
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x {int (* write_dev ) (struct wm831x*,unsigned short,int,void*) ;int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,unsigned short,unsigned short) ;
 int FUNC_3 (struct wm831x*,unsigned short,int,void*) ;
 scalar_t__ FUNC_4 (struct wm831x*,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct wm831x *VAR_1, unsigned short VAR_2,
   int VAR_3, void *VAR_4)
{
 u16 *VAR_5 = VAR_4;
 int VAR_6;

 FUNC_0(VAR_3 % 2);
 FUNC_0(VAR_3 <= 0);

 for (VAR_6 = 0; VAR_6 < VAR_3 / 2; VAR_6++) {
  if (FUNC_4(VAR_1, VAR_2))
   return -VAR_0;

  FUNC_2(VAR_1->dev, "Write %04x to R%d(0x%x)\n",
    VAR_5[VAR_6], VAR_2 + VAR_6, VAR_2 + VAR_6);

  VAR_5[VAR_6] = FUNC_1(VAR_5[VAR_6]);
 }

 return VAR_1->write_dev(VAR_1, VAR_2, VAR_3, VAR_4);
}
