
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int const int16_t ;
struct TYPE_4__ {int dmsk; int dctr; int* dptr; int* inbuf; int (* infunc ) (TYPE_1__*,int*,int ) ;} ;
typedef TYPE_1__ JDEC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static int16_t FUNC_1 (
 JDEC* VAR_3,
 const uint8_t* VAR_4,
 const uint16_t* VAR_5,
 const uint8_t* VAR_6
)
{
 uint8_t VAR_7, VAR_8, *VAR_9;
 uint16_t VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;


 VAR_7 = VAR_3->dmsk; VAR_10 = VAR_3->dctr; VAR_9 = VAR_3->dptr;
 VAR_8 = *VAR_9; VAR_11 = VAR_12 = 0;
 VAR_13 = 16;
 do {
  if (!VAR_7) {
   if (!VAR_10) {
    VAR_9 = VAR_3->inbuf;
    VAR_10 = VAR_3->infunc(VAR_3, VAR_9, VAR_2);
    if (!VAR_10) return 0 - (int16_t)VAR_1;
   } else {
    VAR_9++;
   }
   VAR_10--;
   if (VAR_12) {
    VAR_12 = 0;
    if (*VAR_9 != 0) return 0 - (int16_t)VAR_0;
    *VAR_9 = VAR_8 = 0xFF;
   } else {
    VAR_8 = *VAR_9;
    if (VAR_8 == 0xFF) {
     VAR_12 = 1; continue;
    }
   }
   VAR_7 = 0x80;
  }
  VAR_11 <<= 1;
  if (VAR_8 & VAR_7) VAR_11++;
  VAR_7 >>= 1;

  for (VAR_14 = *VAR_4++; VAR_14; VAR_14--) {
   if (VAR_11 == *VAR_5++) {
    VAR_3->dmsk = VAR_7; VAR_3->dctr = VAR_10; VAR_3->dptr = VAR_9;
    return *VAR_6;
   }
   VAR_6++;
  }
  VAR_13--;
 } while (VAR_13);

 return 0 - (int16_t)VAR_0;
}
