
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_request {int mux; int avg; void (* callback ) (struct pcf50633*,void*,int) ;void* callback_param; } ;
struct pcf50633 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcf50633*,struct pcf50633_adc_request*) ;
 struct pcf50633_adc_request* FUNC_1 (int,int ) ;

int FUNC_2(struct pcf50633 *VAR_2, int VAR_3, int VAR_4,
        void (*VAR_5)(struct pcf50633 *, void *, int),
        void *VAR_6)
{
 struct pcf50633_adc_request *VAR_7;


 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->mux = VAR_3;
 VAR_7->avg = VAR_4;
 VAR_7->callback = VAR_5;
 VAR_7->callback_param = VAR_6;

 return FUNC_0(VAR_2, VAR_7);
}
