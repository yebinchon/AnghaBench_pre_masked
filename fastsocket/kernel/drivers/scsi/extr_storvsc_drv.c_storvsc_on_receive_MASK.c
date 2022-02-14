
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstor_packet {int operation; } ;
struct storvsc_scan_work {int work; int host; } ;
struct storvsc_device {int host; } ;
struct storvsc_cmd_request {int dummy; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;



 struct storvsc_device* FUNC_1 (struct hv_device*) ;
 struct storvsc_scan_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct hv_device*,struct vstor_packet*,struct storvsc_cmd_request*) ;

__attribute__((used)) static void FUNC_5(struct hv_device *VAR_2,
        struct vstor_packet *VAR_3,
        struct storvsc_cmd_request *VAR_4)
{
 struct storvsc_scan_work *VAR_5;
 struct storvsc_device *VAR_6;

 switch (VAR_3->operation) {
 case 130:
  FUNC_4(VAR_2, VAR_3, VAR_4);
  break;

 case 128:
 case 129:
  VAR_6 = FUNC_1(VAR_2);
  VAR_5 = FUNC_2(sizeof(struct storvsc_scan_work), VAR_0);
  if (!VAR_5)
   return;

  FUNC_0(&VAR_5->work, VAR_1);
  VAR_5->host = VAR_6->host;
  FUNC_3(&VAR_5->work);
  break;

 default:
  break;
 }
}
