
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqworkq {int dummy; } ;
struct kqrequest {int kqr_state; int kqr_thread; int kqr_qos_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct kqworkq*,struct kqrequest*,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct kqworkq *VAR_4, struct kqrequest *VAR_5,
  int VAR_6)
{
 int VAR_7 = 0;

 FUNC_0(FUNC_1(VAR_0) | VAR_2,
   0, VAR_5->kqr_qos_index);

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6,
   VAR_3);

 FUNC_0(FUNC_1(VAR_0) | VAR_1,
   FUNC_3(VAR_5->kqr_thread), VAR_5->kqr_state);

 return VAR_7;
}
