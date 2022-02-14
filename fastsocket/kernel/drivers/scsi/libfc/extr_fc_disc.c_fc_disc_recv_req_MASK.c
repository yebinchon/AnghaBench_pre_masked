
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fc_disc {int disc_mutex; } ;
struct fc_lport {struct fc_disc disc; } ;
struct fc_frame {int dummy; } ;



 int FUNC_0 (struct fc_disc*,char*,int) ;
 int FUNC_1 (struct fc_disc*,struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fc_lport *VAR_0, struct fc_frame *VAR_1)
{
 u8 VAR_2;
 struct fc_disc *VAR_3 = &VAR_0->disc;

 VAR_2 = FUNC_3(VAR_1);
 switch (VAR_2) {
 case 128:
  FUNC_4(&VAR_3->disc_mutex);
  FUNC_1(VAR_3, VAR_1);
  FUNC_5(&VAR_3->disc_mutex);
  break;
 default:
  FUNC_0(VAR_3, "Received an unsupported request, "
       "the opcode is (%x)\n", VAR_2);
  FUNC_2(VAR_1);
  break;
 }
}
