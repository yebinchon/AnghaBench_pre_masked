
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decode_cache {int ad_bytes; } ;


 unsigned long FUNC_0 (struct decode_cache*) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct decode_cache *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->ad_bytes == sizeof(unsigned long))
  return VAR_1;
 else
  return VAR_1 & FUNC_0(VAR_0);
}
