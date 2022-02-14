
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p8; int p4; int p0; } ;
typedef TYPE_1__ registers ;


 char VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static int
FUNC_0 (char VAR_13, unsigned int *VAR_14)
{
 registers *VAR_15 = &VAR_12;

 if (VAR_13 >= VAR_7 && VAR_13 <= VAR_6) {

  *VAR_14 = *(unsigned int *)((char *)VAR_15 + VAR_13 * sizeof(unsigned int));
                return VAR_8;
 }
 else if (VAR_13 == VAR_3 || VAR_13 == VAR_10) {

  *VAR_14 = (unsigned int)(*(unsigned char *)
                                         ((char *)&(VAR_15->p0) + (VAR_13-VAR_3) * sizeof(char)));
                return VAR_8;
 }
 else if (VAR_13 == VAR_4 || VAR_13 == VAR_0) {

  *VAR_14 = (unsigned int)(*(unsigned short *)
                                         ((char *)&(VAR_15->p4) + (VAR_13-VAR_4) * sizeof(unsigned short)));
                return VAR_8;
 }
 else if (VAR_13 >= VAR_2 && VAR_13 <= VAR_9) {

  *VAR_14 = *(unsigned int *)((char *)&(VAR_15->p8)
                                            + (VAR_13-VAR_5) * sizeof(unsigned int));
                return VAR_8;
 }
 else {

  VAR_11 = VAR_1;
  return VAR_1;
 }
}
