
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_data {int index; int value; void* kind; } ;
struct file {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct file*,int) ;

__attribute__((used)) static struct serial_data FUNC_2(struct file *VAR_3, int VAR_4)
{
 struct serial_data VAR_5;
 int VAR_6;

 VAR_5.kind = VAR_2;
 VAR_5.index = 0;
 VAR_5.value = 0;
 VAR_6 = 0;
 while (1) {
  int VAR_7 = FUNC_1(VAR_3, VAR_4);

  VAR_6++;
  if (VAR_7 < 0) {
   FUNC_0("serial2002 error\n");
   break;
  } else if (VAR_7 & 0x80) {
   VAR_5.value = (VAR_5.value << 7) | (VAR_7 & 0x7f);
  } else {
   if (VAR_6 == 1) {
    switch ((VAR_7 >> 5) & 0x03) {
    case 0:{
      VAR_5.value = 0;
      VAR_5.kind = VAR_1;
     }
     break;
    case 1:{
      VAR_5.value = 1;
      VAR_5.kind = VAR_1;
     }
     break;
    }
   } else {
    VAR_5.value =
        (VAR_5.value << 2) | ((VAR_7 & 0x60) >> 5);
    VAR_5.kind = VAR_0;
   }
   VAR_5.index = VAR_7 & 0x1f;
   break;
  }
 }
 return VAR_5;

}
