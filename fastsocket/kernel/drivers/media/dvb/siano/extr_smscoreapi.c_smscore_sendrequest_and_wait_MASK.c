
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int (* sendrequest_handler ) (int ,void*,size_t) ;int context; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,void*,size_t) ;
 scalar_t__ FUNC_3 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_4(struct smscore_device_t *VAR_2,
  void *VAR_3, size_t VAR_4, struct completion *VAR_5) {
 int VAR_6 = VAR_2->sendrequest_handler(VAR_2->context, VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_1("sendrequest returned error %d", VAR_6);
  return VAR_6;
 }

 return FUNC_3(VAR_5,
   FUNC_0(VAR_1)) ?
   0 : -VAR_0;
}
