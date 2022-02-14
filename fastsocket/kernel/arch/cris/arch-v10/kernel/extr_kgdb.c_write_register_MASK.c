
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ibr; int ccr; } ;
typedef TYPE_1__ registers ;


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
 int FUNC_0 (unsigned char*,char*,int) ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static int
FUNC_1 (int VAR_14, char *VAR_15)
{
 int VAR_16 = VAR_10;
 registers *VAR_17 = &VAR_13;

        if (VAR_14 >= VAR_9 && VAR_14 <= VAR_8) {

  FUNC_0 ((unsigned char *)VAR_17 + VAR_14 * sizeof(unsigned int),
    VAR_15, sizeof(unsigned int));
 }
        else if (VAR_14 == VAR_5 || VAR_14 == VAR_12 || VAR_14 == VAR_6 || VAR_14 == VAR_7) {

  VAR_16 = VAR_1;
 }
        else if (VAR_14 == VAR_0) {


  FUNC_0 ((unsigned char *)&(VAR_17->ccr) + (VAR_14-VAR_0) * sizeof(unsigned short),
    VAR_15, sizeof(unsigned short));
 }
 else if (VAR_14 >= VAR_4 && VAR_14 <= VAR_11) {

  FUNC_0 ((unsigned char *)&(VAR_17->ibr) + (VAR_14-VAR_3) * sizeof(unsigned int),
    VAR_15, sizeof(unsigned int));
 }
        else {

  VAR_16 = VAR_2;
 }
 return VAR_16;
}
