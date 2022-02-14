
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t CTLX_STATE ;



__attribute__((used)) static inline const char *FUNC_0(CTLX_STATE VAR_0)
{
 static const char *VAR_1[] = {
  "Initial state",
  "Complete",
  "Request failed",
  "Request pending",
  "Request packet submitted",
  "Request packet completed",
  "Response packet completed"
 };

 return VAR_1[VAR_0];
}
