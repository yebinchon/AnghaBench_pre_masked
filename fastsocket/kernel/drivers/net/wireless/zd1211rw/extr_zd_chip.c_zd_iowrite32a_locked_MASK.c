
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_ioreq32 {int addr; } ;
struct zd_chip {int usb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct zd_chip*,struct zd_ioreq32 const*,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct zd_chip*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct zd_chip *VAR_1,
           const struct zd_ioreq32 *VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_4(&VAR_1->usb);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_6 + VAR_7) {
  VAR_7 = 0;
  VAR_8 = VAR_3-VAR_5;
  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0;
  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   if (!VAR_2[VAR_5+VAR_6].addr) {
    VAR_7 = 1;
    break;
   }
  }

  VAR_4 = FUNC_0(VAR_1, &VAR_2[VAR_5], VAR_6);
  if (VAR_4) {
   FUNC_3(&VAR_1->usb, 0);
   FUNC_1(FUNC_2(VAR_1),
    "error _zd_iowrite32v_locked."
    " Error number %d\n", VAR_4);
   return VAR_4;
  }
 }

 return FUNC_3(&VAR_1->usb, 50 );
}
