
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int mbuf_t ;
typedef int curr_type ;
typedef int curr_length ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(mbuf_t VAR_2, int VAR_3, uint8_t VAR_4, int *VAR_5, int VAR_6)
{
 size_t VAR_7 = VAR_3;
 int VAR_8 = 0;
 uint32_t VAR_9;
 uint8_t VAR_10;

 *VAR_5 = 0;

 do {
  if (!VAR_6) {
   VAR_8 = FUNC_0(VAR_2, VAR_7, sizeof(VAR_10), &VAR_10);
   if (VAR_8) {
    *VAR_5 = VAR_0;
    return -1;
   }
  } else {
   VAR_6 = 0;
   VAR_10 = VAR_1;
  }

  if (VAR_10 != VAR_4) {
   VAR_7 += sizeof(VAR_10);
   VAR_8 = FUNC_0(VAR_2, VAR_7, sizeof(VAR_9), &VAR_9);
   if (VAR_8) {
    *VAR_5 = VAR_8;
    return -1;
   }

   VAR_7 += (sizeof(VAR_9) + FUNC_1(VAR_9));
  }
 } while (VAR_10 != VAR_4);

 return VAR_7;
}
