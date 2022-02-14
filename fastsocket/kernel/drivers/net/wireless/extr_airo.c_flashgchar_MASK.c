
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct airo_info *VAR_2,int VAR_3,int VAR_4){
 int VAR_5;
 unsigned char VAR_6=0;

 do {
  VAR_5 = FUNC_0(VAR_2,VAR_1);

  if(VAR_4 && !(0x8000 & VAR_5)){
   VAR_4 -= 10;
   FUNC_2(10);
   continue;
  }
  VAR_6 = 0xff & VAR_5;

  if( (VAR_6 == VAR_3) && (0x8000 & VAR_5) ){
   FUNC_1(VAR_2,VAR_1,0);
   return 0;
  }
  if( VAR_6 == 0x81 || VAR_6 == 0x82 || VAR_6 == 0x83 || VAR_6 == 0x1a || 0xffff == VAR_5)
   break;
  FUNC_1(VAR_2,VAR_1,0);

 }while(VAR_4 > 0);
 return -VAR_0;
}
