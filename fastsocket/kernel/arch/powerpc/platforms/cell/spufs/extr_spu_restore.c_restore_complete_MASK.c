
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* slot; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(void)
{
 extern void FUNC_3(void);
 unsigned int *VAR_7 = (unsigned int *)FUNC_3;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 VAR_8 = FUNC_0(VAR_9);
 VAR_9 = VAR_6[VAR_8].slot[0];
 VAR_10 = VAR_6[VAR_8].slot[1];

 switch (VAR_9) {
 case 132:




  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_2;
  VAR_7[2] = VAR_5 | VAR_10;
  break;
 case 133:




  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_1;
  VAR_7[2] = VAR_5 | VAR_10;
  break;
 case 128:




  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_5 | VAR_10;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 case 129:



  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_2;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 case 135:



  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_2;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 case 130:

  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_3;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 case 136:



  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_1;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 case 134:



  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_5 | VAR_10;
  break;
 case 131:

  VAR_7[0] = VAR_4;
  VAR_7[1] = VAR_3;
  VAR_7[2] = VAR_3;
  VAR_7[3] = VAR_0;
  break;
 default:

  break;
 }
 FUNC_1();
}
