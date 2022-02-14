
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct ipath_swqe {TYPE_1__ wr; int psn; } ;
struct ipath_qp {scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_tail; scalar_t__ s_psn; void* s_state; scalar_t__ s_cur; } ;







 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipath_swqe* FUNC_1 (struct ipath_qp*,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct ipath_qp *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_4->s_last;
 struct ipath_swqe *VAR_7 = FUNC_1(VAR_4, VAR_6);
 u32 VAR_8;

 VAR_4->s_cur = VAR_6;





 if (FUNC_2(VAR_5, VAR_7->psn) <= 0) {
  VAR_4->s_state = FUNC_0(VAR_3);
  goto done;
 }


 VAR_8 = VAR_7->wr.opcode;
 for (;;) {
  int VAR_9;

  if (++VAR_6 == VAR_4->s_size)
   VAR_6 = 0;
  if (VAR_6 == VAR_4->s_tail)
   break;
  VAR_7 = FUNC_1(VAR_4, VAR_6);
  VAR_9 = FUNC_2(VAR_5, VAR_7->psn);
  if (VAR_9 < 0)
   break;
  VAR_4->s_cur = VAR_6;




  if (VAR_9 == 0) {
   VAR_4->s_state = FUNC_0(VAR_3);
   goto done;
  }
  VAR_8 = VAR_7->wr.opcode;
 }






 switch (VAR_8) {
 case 129:
 case 128:
  VAR_4->s_state = FUNC_0(VAR_0);
  break;

 case 131:
 case 130:
  VAR_4->s_state = FUNC_0(VAR_1);
  break;

 case 132:
  VAR_4->s_state = FUNC_0(VAR_2);
  break;

 default:




  VAR_4->s_state = FUNC_0(VAR_3);
 }
done:
 VAR_4->s_psn = VAR_5;
}
