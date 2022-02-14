
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int* duration; } ;
struct tpm_chip {TYPE_1__ vendor; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;

unsigned long FUNC_0(struct tpm_chip *VAR_7,
        u32 VAR_8)
{
 int VAR_9 = VAR_4;
 int VAR_10 = 0;

 if (VAR_8 < VAR_1)
  VAR_9 = VAR_5[VAR_8];
 else if ((VAR_8 & VAR_3) <
   VAR_2)
  VAR_9 =
      VAR_6[VAR_8 &
         VAR_3];

 if (VAR_9 != VAR_4)
  VAR_10 = VAR_7->vendor.duration[VAR_9];
 if (VAR_10 <= 0)
  return 2 * 60 * VAR_0;
 else
  return VAR_10;
}
