
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int srs; int exs; int pid; int r0; } ;
struct TYPE_3__ {int s0_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 TYPE_2__ VAR_16 ;
 TYPE_1__ VAR_17 ;

__attribute__((used)) static int
FUNC_1(int VAR_18, char *VAR_19)
{
 int VAR_20 = VAR_13;

        if (VAR_18 >= VAR_8 && VAR_18 <= VAR_0) {

  FUNC_0((unsigned char *)&VAR_16.r0 + (VAR_18 - VAR_8) * sizeof(unsigned int),
   VAR_19, sizeof(unsigned int));

 } else if (VAR_18 == VAR_1 || VAR_18 == VAR_14 || VAR_18 == VAR_15 || VAR_18 == VAR_2) {

  VAR_20 = VAR_3;

 } else if (VAR_18 == VAR_7) {


  FUNC_0((unsigned char *)&VAR_16.pid, VAR_19, sizeof(unsigned int));

 } else if (VAR_18 == VAR_12) {

  FUNC_0((unsigned char *)&VAR_16.srs, VAR_19, sizeof(unsigned char));

 } else if (VAR_18 >= VAR_5 && VAR_18 <= VAR_11) {

  FUNC_0((unsigned char *)&VAR_16.exs + (VAR_18 - VAR_5) * sizeof(unsigned int),
    VAR_19, sizeof(unsigned int));

       } else if (VAR_18 == VAR_6) {

               VAR_20 = VAR_3;

       } else if (VAR_18 >= VAR_9 && VAR_18 <= VAR_10) {

               FUNC_0((unsigned char *)&VAR_17.s0_0 + (VAR_16.srs * 16 * sizeof(unsigned int)) + (VAR_18 - VAR_9) * sizeof(unsigned int), VAR_19, sizeof(unsigned int));
 } else {

  VAR_20 = VAR_4;
 }
 return VAR_20;
}
