
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {unsigned int rbuf_fill_level; int rx_pio; int lock; scalar_t__ rx_enabled; int device_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct slgt_info*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct slgt_info *VAR_4, int VAR_5)
{
  unsigned long VAR_6;
 unsigned int VAR_7;
 FUNC_0(("%s rx_enable(%08x)\n", VAR_4->device_name, VAR_5));
 FUNC_4(&VAR_4->lock,VAR_6);





 VAR_7 = ((unsigned int)VAR_5) >> 16;
 if (VAR_7) {
  if ((VAR_7 > VAR_1) || (VAR_7 % 4)) {
   FUNC_5(&VAR_4->lock, VAR_6);
   return -VAR_2;
  }
  VAR_4->rbuf_fill_level = VAR_7;
  if (VAR_7 < 128)
   VAR_4->rx_pio = 1;
  else
   VAR_4->rx_pio = 0;
  FUNC_3(VAR_4);
 }







 VAR_5 &= 3;
 if (VAR_5) {
  if (!VAR_4->rx_enabled)
   FUNC_2(VAR_4);
  else if (VAR_5 == 2) {

   FUNC_6(VAR_4, VAR_3, FUNC_1(VAR_4, VAR_3) | VAR_0);
  }
 } else {
  if (VAR_4->rx_enabled)
   FUNC_3(VAR_4);
 }
 FUNC_5(&VAR_4->lock,VAR_6);
 return 0;
}
