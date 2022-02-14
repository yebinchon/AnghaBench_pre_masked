
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; int queue_empty; } ;
typedef int ap_qid_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct ap_queue_status FUNC_2 (int ) ;
 struct ap_queue_status FUNC_3 (int ,int*,int*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(ap_qid_t VAR_4)
{
 struct ap_queue_status VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_6 = -VAR_2;
 VAR_5 = FUNC_2(VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  switch (VAR_5.response_code) {
  case 130:
   if (VAR_5.queue_empty)
    VAR_6 = 0;
   break;
  case 129:
  case 131:
  case 132:
   VAR_8 = VAR_0;
   break;
  case 128:
   VAR_6 = -VAR_1;
  case 133:
  default:
   break;
  }
  if (VAR_6 != -VAR_2 && VAR_6 != -VAR_1)
   break;
  if (VAR_8 < VAR_0 - 1) {
   FUNC_6(5);
   VAR_5 = FUNC_3(VAR_4, &VAR_7, &VAR_7);
  }
 }
 if (VAR_6 == 0 && FUNC_4()) {
  VAR_6 = FUNC_1(VAR_4, VAR_3);



  if (VAR_6)
   FUNC_5("Registering adapter interrupts for "
          "AP %d failed\n", FUNC_0(VAR_4));
 }
 return VAR_6;
}
