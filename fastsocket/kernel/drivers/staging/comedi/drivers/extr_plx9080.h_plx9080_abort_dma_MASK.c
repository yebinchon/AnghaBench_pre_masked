
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;

__attribute__((used)) static inline int FUNC_4(void *VAR_6, unsigned int VAR_7)
{
 void *VAR_8;
 uint8_t VAR_9;
 const int VAR_10 = 10000;
 unsigned int VAR_11;

 if (VAR_7)
  VAR_8 = VAR_6 + VAR_2;
 else
  VAR_8 = VAR_6 + VAR_1;


 VAR_9 = FUNC_1(VAR_8);
 if ((VAR_9 & VAR_5) == 0)
  return 0;


 for (VAR_11 = 0; (VAR_9 & VAR_4) && VAR_11 < VAR_10; VAR_11++) {
  FUNC_2(1);
  VAR_9 = FUNC_1(VAR_8);
 }
 if (VAR_11 == VAR_10) {
  FUNC_0
      ("plx9080: cancel() timed out waiting for dma %i done clear\n",
       VAR_7);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_8);

 VAR_9 = FUNC_1(VAR_8);
 for (VAR_11 = 0; (VAR_9 & VAR_4) == 0 && VAR_11 < VAR_10; VAR_11++) {
  FUNC_2(1);
  VAR_9 = FUNC_1(VAR_8);
 }
 if (VAR_11 == VAR_10) {
  FUNC_0
      ("plx9080: cancel() timed out waiting for dma %i done set\n",
       VAR_7);
  return -VAR_0;
 }

 return 0;
}
