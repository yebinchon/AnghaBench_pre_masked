
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;



 unsigned int const FUNC_2 (unsigned int) ;
 unsigned int const FUNC_3 (unsigned int) ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_6 (struct ni_gpct const*) ;
 unsigned int FUNC_7 (struct ni_gpct const*,int ) ;

__attribute__((used)) static unsigned FUNC_8(const struct ni_gpct *VAR_11)
{
 unsigned VAR_12 = 0;
 unsigned VAR_13;
 const unsigned VAR_14 = (FUNC_7(VAR_11,
           FUNC_1
           (VAR_11->counter_index))
           & VAR_0) >>
     VAR_1;

 switch (VAR_14) {
 case 130:
  VAR_12 = VAR_6;
  break;
 case 129:
  VAR_12 = VAR_7;
  break;
 case 128:
  VAR_12 = VAR_8;
  break;
 case 134:
  VAR_12 = VAR_2;
  break;
 case 131:
  VAR_12 = VAR_5;
  break;
 case 133:
  VAR_12 = VAR_3;
  break;
 case 132:
  VAR_12 = VAR_4;
  break;
 default:
  for (VAR_13 = 0; VAR_13 <= VAR_9; ++VAR_13) {
   if (VAR_14 == FUNC_2(VAR_13)) {
    VAR_12 = FUNC_4(VAR_13);
    break;
   }
  }
  if (VAR_13 <= VAR_9)
   break;
  for (VAR_13 = 0; VAR_13 <= VAR_10; ++VAR_13) {
   if (VAR_14 == FUNC_3(VAR_13)) {
    VAR_12 =
        FUNC_5(VAR_13);
    break;
   }
  }
  if (VAR_13 <= VAR_10)
   break;
  FUNC_0();
  break;
 }
 VAR_12 |= FUNC_6(VAR_11);
 return VAR_12;
}
