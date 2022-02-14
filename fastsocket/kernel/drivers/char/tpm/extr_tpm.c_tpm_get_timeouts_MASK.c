
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct duration_t {int tpm_long; int tpm_medium; int tpm_short; } ;
struct timeout_t {int d; int c; int b; int a; } ;
struct TYPE_11__ {struct duration_t duration; struct timeout_t timeout; } ;
struct TYPE_12__ {TYPE_4__ cap; } ;
struct TYPE_8__ {int subcap; void* subcap_size; void* cap; } ;
struct TYPE_13__ {TYPE_5__ getcap_out; TYPE_1__ getcap_in; } ;
struct TYPE_9__ {int return_code; int length; } ;
struct TYPE_10__ {TYPE_2__ out; void* in; } ;
struct tpm_cmd_t {TYPE_6__ params; TYPE_3__ header; } ;
struct TYPE_14__ {int* duration; void* timeout_d; void* timeout_c; void* timeout_b; void* timeout_a; } ;
struct tpm_chip {TYPE_7__ vendor; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 void* VAR_8 ;
 scalar_t__ FUNC_2 (struct tpm_chip*,struct tpm_cmd_t*,int ,char*) ;
 void* FUNC_3 (int) ;

void FUNC_4(struct tpm_chip *VAR_9)
{
 struct tpm_cmd_t VAR_10;
 struct timeout_t *VAR_11;
 struct duration_t *VAR_12;
 ssize_t VAR_13;
 u32 VAR_14;

 VAR_10.header.in = VAR_8;
 VAR_10.params.getcap_in.cap = VAR_1;
 VAR_10.params.getcap_in.subcap_size = FUNC_1(4);
 VAR_10.params.getcap_in.subcap = VAR_3;

 VAR_13 = FUNC_2(VAR_9, &VAR_10, VAR_4,
   "attempting to determine the timeouts");
 if (VAR_13)
  goto duration;

 if (FUNC_0(VAR_10.header.out.length)
     != 4 * sizeof(u32))
  goto duration;

 VAR_11 = &VAR_10.params.getcap_out.cap.timeout;

 VAR_14 = FUNC_0(VAR_11->a);
 if (VAR_14)
  VAR_9->vendor.timeout_a = FUNC_3(VAR_14);
 VAR_14 = FUNC_0(VAR_11->b);
 if (VAR_14)
  VAR_9->vendor.timeout_b = FUNC_3(VAR_14);
 VAR_14 = FUNC_0(VAR_11->c);
 if (VAR_14)
  VAR_9->vendor.timeout_c = FUNC_3(VAR_14);
 VAR_14 = FUNC_0(VAR_11->d);
 if (VAR_14)
  VAR_9->vendor.timeout_d = FUNC_3(VAR_14);

duration:
 VAR_10.header.in = VAR_8;
 VAR_10.params.getcap_in.cap = VAR_1;
 VAR_10.params.getcap_in.subcap_size = FUNC_1(4);
 VAR_10.params.getcap_in.subcap = VAR_2;

 VAR_13 = FUNC_2(VAR_9, &VAR_10, VAR_4,
   "attempting to determine the durations");
 if (VAR_13)
  return;

 if (FUNC_0(VAR_10.header.out.return_code)
     != 3 * sizeof(u32))
  return;
 VAR_12 = &VAR_10.params.getcap_out.cap.duration;
 VAR_9->vendor.duration[VAR_7] =
     FUNC_3(FUNC_0(VAR_12->tpm_short));




 if (VAR_9->vendor.duration[VAR_7] < (VAR_0/100))
  VAR_9->vendor.duration[VAR_7] = VAR_0;

 VAR_9->vendor.duration[VAR_6] =
     FUNC_3(FUNC_0(VAR_12->tpm_medium));
 VAR_9->vendor.duration[VAR_5] =
     FUNC_3(FUNC_0(VAR_12->tpm_long));
}
