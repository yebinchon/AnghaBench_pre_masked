
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int videosize_t ;


 int FUNC_0 (int,int ,scalar_t__) ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static videosize_t FUNC_2(int VAR_8)
{
 videosize_t VAR_9 = VAR_6;
 FUNC_0(VAR_8, 0, (VAR_0-1));
 switch (VAR_8) {
 case 134:
  VAR_9 = VAR_1;
  break;
 case 133:
  VAR_9 = VAR_2;
  break;
 case 132:
  VAR_9 = VAR_3;
  break;
 case 131:
  VAR_9 = VAR_4;
  break;
 case 130:
  VAR_9 = VAR_5;
  break;
 case 129:
  VAR_9 = VAR_6;
  break;
 case 128:
  VAR_9 = VAR_7;
  break;
 default:
  FUNC_1("size=%d. is not valid", VAR_8);
  break;
 }
 return VAR_9;
}
