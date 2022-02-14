
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;


 int VAR_3 ;


 int VAR_4 ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5 = 0;
 FUNC_0(FUNC_3("PIO_GetByte TransferStatus:%d\n",VAR_4));

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_2();
  break;
 case 130:
  VAR_4 = 129;


 case 129:
  FUNC_0(FUNC_3("ReadFrame: DataIndex:%d ExpectedBytes:%d\n",VAR_1,VAR_2));
  if (VAR_1 < VAR_2) {
   VAR_5 = VAR_0[VAR_1++];
   if (VAR_1 >= VAR_2) {
    VAR_4 = VAR_3;
   }





  }
  else {
   FUNC_1("Invalid read frame!");
   VAR_4 = VAR_3;
  }
  break;
 case 131:
  if (VAR_1 < VAR_2) {
   VAR_5 = VAR_0[VAR_1++];
   if (VAR_1 >= VAR_2) {
    VAR_4 = VAR_3;
   }






  }
  else {
   FUNC_1("Invalid read frame!");
   VAR_4 = VAR_3;
  }
  break;
 default:
  break;
 }
 return VAR_5;
}
