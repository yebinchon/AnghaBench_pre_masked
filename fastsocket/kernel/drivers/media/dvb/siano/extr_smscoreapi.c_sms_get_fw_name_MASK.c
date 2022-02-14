
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smscore_device_t {int dummy; } ;
typedef enum sms_device_type_st { ____Placeholder_sms_device_type_st } sms_device_type_st ;
struct TYPE_2__ {char** fw; } ;


 TYPE_1__* FUNC_0 (int ) ;
 char*** VAR_0 ;
 int FUNC_1 (struct smscore_device_t*) ;

__attribute__((used)) static inline char *FUNC_2(struct smscore_device_t *VAR_1,
        int VAR_2, enum sms_device_type_st VAR_3)
{
 char **VAR_4 = FUNC_0(FUNC_1(VAR_1))->fw;
 return (VAR_4 && VAR_4[VAR_2]) ? VAR_4[VAR_2] : VAR_0[VAR_2][VAR_3];
}
