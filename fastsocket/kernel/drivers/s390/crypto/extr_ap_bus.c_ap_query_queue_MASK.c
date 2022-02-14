
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
typedef int ap_qid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct ap_queue_status FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(ap_qid_t VAR_3, int *VAR_4, int *VAR_5)
{
 struct ap_queue_status VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = -VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_6 = FUNC_1(VAR_3, &VAR_7, &VAR_8);
  switch (VAR_6.response_code) {
  case 131:
   *VAR_4 = VAR_7 + 1;
   *VAR_5 = VAR_8;
   VAR_9 = 0;
   break;
  case 129:
   VAR_9 = -VAR_2;
   break;
  case 128:
   break;
  case 133:
   VAR_9 = -VAR_2;
   break;
  case 134:
   VAR_9 = -VAR_2;
   break;
  case 132:
   VAR_9 = -VAR_2;
   break;
  case 130:
   break;
  case 135:
   break;
  default:
   FUNC_0();
  }
  if (VAR_9 != -VAR_1)
   break;
  if (VAR_10 < VAR_0 - 1)
   FUNC_2(5);
 }
 return VAR_9;
}
