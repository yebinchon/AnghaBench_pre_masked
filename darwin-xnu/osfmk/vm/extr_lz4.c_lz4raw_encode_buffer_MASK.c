
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int offset; int word; } ;
typedef TYPE_1__ lz4_hash_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int **,size_t,int const**,int const*,size_t const,TYPE_1__*,int) ;

size_t FUNC_1(uint8_t * __restrict VAR_1, size_t VAR_2,
                            const uint8_t * __restrict VAR_3, size_t VAR_4,
                            lz4_hash_entry_t VAR_5[VAR_0])
{

  const lz4_hash_entry_t VAR_6 = { .offset = 0x80000000, .word = 0x0 };

  const uint8_t * VAR_7 = VAR_3;
  uint8_t * VAR_8 = VAR_1;


  const size_t VAR_9 = 0x7ffff000;
  while (VAR_4 > 0)
  {
       for (int VAR_10=0;VAR_10<VAR_0;) {
    VAR_5[VAR_10++] = VAR_6;
    VAR_5[VAR_10++] = VAR_6;
    VAR_5[VAR_10++] = VAR_6;
    VAR_5[VAR_10++] = VAR_6;
   }


    const size_t VAR_11 = VAR_4 > VAR_9 ? VAR_9 : VAR_4;



    uint8_t * VAR_12 = VAR_8;
    const uint8_t * VAR_13 = VAR_7;
    FUNC_0(&VAR_8, VAR_2, &VAR_7, VAR_7, VAR_11, VAR_5, VAR_11 < VAR_4);


    size_t VAR_14 = VAR_8 - VAR_12;
    size_t VAR_15 = VAR_7 - VAR_13;
    if (VAR_11 == VAR_4 && VAR_15 < VAR_11) return 0;




    if (VAR_11 < VAR_4 && VAR_11 - VAR_15 >= (1<<16)) return 0;


    VAR_4 -= VAR_15;
    VAR_2 -= VAR_14;
  }

  return (size_t)(VAR_8 - VAR_1);
}
