
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct nlm_host {int h_pidcount; } ;


 scalar_t__ FUNC_0 (struct nlm_host*,scalar_t__) ;

__attribute__((used)) static inline uint32_t FUNC_1(struct nlm_host *VAR_0)
{
 uint32_t VAR_1;
 do {
  VAR_1 = VAR_0->h_pidcount++;
 } while (FUNC_0(VAR_0, VAR_1) < 0);
 return VAR_1;
}
