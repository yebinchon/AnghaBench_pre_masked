
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bintime {int sec; scalar_t__ frac; } ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bintime*,int) ;
 int FUNC_1 (struct bintime*,int) ;
 int FUNC_2 (struct bintime*,int,int) ;
 int FUNC_3 (struct bintime*,int) ;
 int FUNC_4 (int,int) ;
 int VAR_1 ;

__attribute__((used)) static struct bintime
FUNC_5(uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, int64_t VAR_5)
{
 uint64_t VAR_6, VAR_7, VAR_8;
 struct bintime VAR_9;

 VAR_9.sec = 0;
 VAR_9.frac = 0;







 if (VAR_2 > VAR_1) {
  VAR_6 = (VAR_2/VAR_1);
  VAR_7 = VAR_6 * VAR_4;
  FUNC_0(&VAR_9, VAR_7);
  if (VAR_5) {
   if (VAR_6 == 1) {

    if (VAR_5 > 0)
     FUNC_1(&VAR_9, (uint64_t)VAR_5/ (uint64_t)VAR_0);
    else
     FUNC_3(&VAR_9, (uint64_t)-VAR_5/ (uint64_t)VAR_0);
   }
   else{





    FUNC_2(&VAR_9, VAR_6, VAR_5);
   }
  }
  VAR_2 = (VAR_2 % VAR_1);
        }

 VAR_8 = FUNC_4(VAR_3, VAR_2);
 if(VAR_8){
  VAR_9.sec += VAR_8;
 }




 FUNC_1(&VAR_9, VAR_2 * VAR_3);

 return VAR_9;
}
