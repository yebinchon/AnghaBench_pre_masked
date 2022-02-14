
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_request {int mux; int avg; int result; int completion; struct pcf50633_adc_request* callback_param; int callback; } ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcf50633*,struct pcf50633_adc_request*) ;
 int FUNC_1 (int *) ;
 struct pcf50633_adc_request* FUNC_2 (int,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct pcf50633 *VAR_3, int VAR_4, int VAR_5)
{
 struct pcf50633_adc_request *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->mux = VAR_4;
 VAR_6->avg = VAR_5;
 VAR_6->callback = VAR_2;
 VAR_6->callback_param = VAR_6;

 FUNC_1(&VAR_6->completion);
 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_6->completion);


 return VAR_6->result;
}
