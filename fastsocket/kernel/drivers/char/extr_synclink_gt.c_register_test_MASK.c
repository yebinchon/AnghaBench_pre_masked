
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int gpio_present; int init_error; } ;
typedef int patterns ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_3(struct slgt_info *VAR_6)
{
 static unsigned short VAR_7[] =
  {0x0000, 0xffff, 0xaaaa, 0x5555, 0x6969, 0x9696};
 static unsigned int VAR_8 = sizeof(VAR_7)/sizeof(VAR_7[0]);
 unsigned int VAR_9;
 int VAR_10 = 0;

 for (VAR_9=0 ; VAR_9 < VAR_8 ; VAR_9++) {
  FUNC_2(VAR_6, VAR_5, VAR_7[VAR_9]);
  FUNC_2(VAR_6, VAR_0, VAR_7[(VAR_9+1)%VAR_8]);
  if ((FUNC_0(VAR_6, VAR_5) != VAR_7[VAR_9]) ||
      (FUNC_0(VAR_6, VAR_0) != VAR_7[(VAR_9+1)%VAR_8])) {
   VAR_10 = -VAR_3;
   break;
  }
 }
 VAR_6->gpio_present = (FUNC_1(VAR_6, VAR_4) & VAR_1) ? 1 : 0;
 VAR_6->init_error = VAR_10 ? 0 : VAR_2;
 return VAR_10;
}
