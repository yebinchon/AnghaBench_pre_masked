
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* dptr; int dctr; int* inbuf; int (* infunc ) (TYPE_1__*,int*,int ) ;scalar_t__* dcv; scalar_t__ dmsk; } ;
typedef int JRESULT ;
typedef TYPE_1__ JDEC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int*,int ) ;

__attribute__((used)) static JRESULT FUNC_1 (
 JDEC* VAR_4,
 uint16_t VAR_5
)
{
 uint16_t VAR_6, VAR_7;
 uint16_t VAR_8;
 uint8_t *VAR_9;



 VAR_9 = VAR_4->dptr; VAR_7 = VAR_4->dctr;
 VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  if (!VAR_7) {
   VAR_9 = VAR_4->inbuf;
   VAR_7 = VAR_4->infunc(VAR_4, VAR_9, VAR_3);
   if (!VAR_7) return VAR_1;
  } else {
   VAR_9++;
  }
  VAR_7--;
  VAR_8 = (VAR_8 << 8) | *VAR_9;
 }
 VAR_4->dptr = VAR_9; VAR_4->dctr = VAR_7; VAR_4->dmsk = 0;


 if ((VAR_8 & 0xFFD8) != 0xFFD0 || (VAR_8 & 7) != (VAR_5 & 7)) {
  return VAR_0;
 }


 VAR_4->dcv[2] = VAR_4->dcv[1] = VAR_4->dcv[0] = 0;

 return VAR_2;
}
