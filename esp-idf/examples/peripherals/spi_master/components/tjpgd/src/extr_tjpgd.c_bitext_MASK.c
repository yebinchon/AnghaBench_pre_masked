
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_4__ {int dmsk; int dctr; int* dptr; int* inbuf; int (* infunc ) (TYPE_1__*,int*,int ) ;} ;
typedef TYPE_1__ JDEC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static int FUNC_1 (
 JDEC* VAR_3,
 int VAR_4
)
{
 uint8_t VAR_5, VAR_6, *VAR_7;
 uint16_t VAR_8, VAR_9, VAR_10;


 VAR_5 = VAR_3->dmsk; VAR_8 = VAR_3->dctr; VAR_7 = VAR_3->dptr;
 VAR_6 = *VAR_7; VAR_9 = VAR_10 = 0;
 do {
  if (!VAR_5) {
   if (!VAR_8) {
    VAR_7 = VAR_3->inbuf;
    VAR_8 = VAR_3->infunc(VAR_3, VAR_7, VAR_2);
    if (!VAR_8) return 0 - (int16_t)VAR_1;
   } else {
    VAR_7++;
   }
   VAR_8--;
   if (VAR_10) {
    VAR_10 = 0;
    if (*VAR_7 != 0) return 0 - (int16_t)VAR_0;
    *VAR_7 = VAR_6 = 0xFF;
   } else {
    VAR_6 = *VAR_7;
    if (VAR_6 == 0xFF) {
     VAR_10 = 1; continue;
    }
   }
   VAR_5 = 0x80;
  }
  VAR_9 <<= 1;
  if (VAR_6 & VAR_5) VAR_9++;
  VAR_5 >>= 1;
  VAR_4--;
 } while (VAR_4);
 VAR_3->dmsk = VAR_5; VAR_3->dctr = VAR_8; VAR_3->dptr = VAR_7;

 return (int)VAR_9;
}
