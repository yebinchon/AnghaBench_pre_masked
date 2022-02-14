
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__** qttbl; } ;
typedef TYPE_1__ JDEC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3 (
 JDEC* VAR_3,
 const uint8_t* VAR_4,
 uint16_t VAR_5
)
{
 uint16_t VAR_6;
 uint8_t VAR_7, VAR_8;
 int32_t *VAR_9;


 while (VAR_5) {
  if (VAR_5 < 65) return VAR_0;
  VAR_5 -= 65;
  VAR_7 = *VAR_4++;
  if (VAR_7 & 0xF0) return VAR_0;
  VAR_6 = VAR_7 & 3;
  VAR_9 = FUNC_2(VAR_3, 64 * sizeof (int32_t));
  if (!VAR_9) return VAR_1;
  VAR_3->qttbl[VAR_6] = VAR_9;
  for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
   VAR_8 = FUNC_1(VAR_6);
   VAR_9[VAR_8] = (int32_t)((uint32_t)*VAR_4++ * FUNC_0(VAR_8));
  }
 }

 return VAR_2;
}
