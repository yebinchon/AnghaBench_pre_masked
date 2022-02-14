
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftphdr {int th_msg; void* th_code; void* th_opcode; } ;
struct errmsg {int e_code; int e_msg; } ;
struct TYPE_2__ {int * storage; struct tftphdr hdr; } ;


 void* VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct errmsg* VAR_2 ;
 void* FUNC_0 (unsigned short) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;

__attribute__((used)) static void FUNC_6(int VAR_5)
{
  struct tftphdr *VAR_6;
  int VAR_7;
  struct errmsg *VAR_8;

  VAR_6 = &VAR_1.hdr;
  VAR_6->th_opcode = FUNC_0((unsigned short)VAR_3);
  VAR_6->th_code = FUNC_0((unsigned short)VAR_5);
  for(VAR_8 = VAR_2; VAR_8->e_code >= 0; VAR_8++)
    if(VAR_8->e_code == VAR_5)
      break;
  if(VAR_8->e_code < 0) {
    VAR_8->e_msg = FUNC_3(VAR_5 - 100);
    VAR_6->th_code = VAR_0;
  }
  VAR_7 = (int)FUNC_4(VAR_8->e_msg);



  FUNC_2(VAR_6->th_msg, VAR_8->e_msg, VAR_7 + 1);
  VAR_7 += 5;
  if(FUNC_5(VAR_4, &VAR_1.storage[0], VAR_7) != VAR_7)
    FUNC_1("nak: fail\n");
}
