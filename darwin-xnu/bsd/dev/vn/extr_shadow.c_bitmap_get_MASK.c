
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_short ;
typedef int u_char ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {size_t byte; int bit; } ;
typedef TYPE_1__ bitmap_offset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_1__ FUNC_1 (int) ;

__attribute__((used)) static uint32_t
FUNC_2(u_char * VAR_6, uint32_t VAR_7, uint32_t VAR_8,
    boolean_t * VAR_9)
{
    uint32_t VAR_10;
    int VAR_11;
    boolean_t VAR_12;
    bitmap_offset_t VAR_13;
    bitmap_offset_t VAR_14;

    VAR_13 = FUNC_1(VAR_7);
    VAR_14 = FUNC_1(VAR_7 + VAR_8);

    VAR_12 = (VAR_6[VAR_13.byte] & FUNC_0(VAR_13.bit)) ? VAR_2 : VAR_0;
    VAR_10 = 0;

    if (VAR_13.byte < VAR_14.byte) {
 uint32_t VAR_15;

 if (VAR_13.bit) {
     for (VAR_11 = VAR_13.bit; VAR_11 < VAR_1; VAR_11++) {
  boolean_t VAR_16;

  VAR_16 = (VAR_6[VAR_13.byte] & FUNC_0(VAR_11)) ? VAR_2 : VAR_0;
  if (VAR_16 != VAR_12) {
      goto done;
  }
  VAR_10++;
     }
     VAR_13.bit = 0;
     VAR_13.byte++;
     if (VAR_13.byte == VAR_14.byte)
  goto end;
 }

 VAR_15 = VAR_14.byte - VAR_13.byte;


 while (VAR_15 >= sizeof(uint32_t)) {
     uint32_t * VAR_17 = (uint32_t *)(VAR_6 + VAR_13.byte);
     if ((VAR_12 && *VAR_17 == VAR_4)
  || (!VAR_12 && *VAR_17 == 0)) {
  VAR_10 += sizeof(*VAR_17) * VAR_1;
  VAR_13.byte += sizeof(*VAR_17);
  VAR_15 -= sizeof(*VAR_17);
     }
     else
  break;

 }

 if (VAR_15 >= sizeof(u_short)) {
     u_short * VAR_18 = (u_short *)(VAR_6 + VAR_13.byte);

     if ((VAR_12 && *VAR_18 == VAR_5)
  || (!VAR_12 && (*VAR_18 == 0))) {
  VAR_10 += sizeof(*VAR_18) * VAR_1;
  VAR_13.byte += sizeof(*VAR_18);
  VAR_15 -= sizeof(*VAR_18);
     }
 }


 if (VAR_15) {
     if ((VAR_12 && VAR_6[VAR_13.byte] == VAR_3)
  || (!VAR_12 && VAR_6[VAR_13.byte] == 0)) {
  VAR_10 += VAR_1;
  VAR_13.byte++;
  VAR_15--;
     }

     if (VAR_15) {
  for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
      boolean_t VAR_19;

      VAR_19 = (VAR_6[VAR_13.byte] & FUNC_0(VAR_11)) ? VAR_2 : VAR_0;
      if (VAR_19 != VAR_12) {
   break;
      }
      VAR_10++;
  }
  goto done;
     }
 }
    }

 end:
    for (VAR_11 = VAR_13.bit; VAR_11 < (int)VAR_14.bit; VAR_11++) {
 boolean_t VAR_20 = (VAR_6[VAR_13.byte] & FUNC_0(VAR_11)) ? VAR_2 : VAR_0;

 if (VAR_20 != VAR_12) {
     break;
 }
 VAR_10++;
    }

 done:
    *VAR_9 = VAR_12;
    return (VAR_10);
}
