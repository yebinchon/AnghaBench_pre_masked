
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short base; } ;
typedef TYPE_1__ imm_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 unsigned char FUNC_2 (unsigned short) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned short,int) ;

__attribute__((used)) static unsigned char FUNC_5(imm_struct *VAR_2)
{
 int VAR_3;
 unsigned short VAR_4 = VAR_2->base;
 unsigned char VAR_5;

 FUNC_4(VAR_4, 0x0c);

 VAR_3 = VAR_1;
 do {
  VAR_5 = FUNC_2(VAR_4);
  VAR_3--;
  FUNC_3(1);
 }
 while (!(VAR_5 & 0x80) && (VAR_3));
 FUNC_4(VAR_4, 0x04);
 if (VAR_3)
  return (VAR_5 & 0xb8);


 FUNC_0(VAR_2, VAR_0);
 FUNC_1("imm timeout in imm_wait\n");
 return 0;
}
