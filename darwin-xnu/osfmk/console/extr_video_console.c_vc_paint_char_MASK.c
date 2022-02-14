
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_depth; } ;


 int FUNC_0 (unsigned int,unsigned int,unsigned char,int,unsigned char,int) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned char,int,unsigned char,int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned char,int,unsigned char,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_1, unsigned int VAR_2, unsigned char VAR_3, int VAR_4,
       unsigned char VAR_5, int VAR_6)
{
 if(!VAR_0.v_depth)
  return;

 switch(VAR_0.v_depth) {
 case 8:
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 case 16:
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6);
  break;
 case 30:
 case 32:
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6);
  break;
 }
}
