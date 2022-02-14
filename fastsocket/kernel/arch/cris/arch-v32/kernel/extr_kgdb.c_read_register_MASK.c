
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int srs; int exs; int wz; int pid; int bz; int r0; } ;
struct TYPE_3__ {int s0_0; } ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 TYPE_2__ VAR_13 ;
 TYPE_1__ VAR_14 ;

__attribute__((used)) static int
FUNC_0(char VAR_15, unsigned int *VAR_16)
{
 int VAR_17 = VAR_10;




 if (VAR_15 >= VAR_6 && VAR_15 <= VAR_0) {

  *VAR_16 = *(unsigned int *)((char *)&VAR_13.r0 + (VAR_15 - VAR_6) * sizeof(unsigned int));

 } else if (VAR_15 == VAR_1 || VAR_15 == VAR_11) {

  *VAR_16 = (unsigned int)(*(unsigned char *)
                                         ((char *)&VAR_13.bz + (VAR_15 - VAR_1) * sizeof(char)));

 } else if (VAR_15 == VAR_5) {

  *VAR_16 = *(unsigned int *)((char *)&VAR_13.pid);

 } else if (VAR_15 == VAR_9) {

  *VAR_16 = (unsigned int)(*(unsigned char *)((char *)&VAR_13.srs));

 } else if (VAR_15 == VAR_12) {

  *VAR_16 = (unsigned int)(*(unsigned short *)(char *)&VAR_13.wz);

 } else if (VAR_15 >= VAR_3 && VAR_15 <= VAR_4) {

  *VAR_16 = *(unsigned int *)((char *)&VAR_13.exs + (VAR_15 - VAR_3) * sizeof(unsigned int));

 } else if (VAR_15 >= VAR_7 && VAR_15 <= VAR_8) {

  *VAR_16 = *(unsigned int *)((char *)&VAR_14.s0_0 + (VAR_13.srs * 16 * sizeof(unsigned int)) + (VAR_15 - VAR_7) * sizeof(unsigned int));

 } else {

  VAR_17 = VAR_2;
 }
 return VAR_17;

}
