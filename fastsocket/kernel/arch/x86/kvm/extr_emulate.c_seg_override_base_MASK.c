
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int dummy; } ;
struct decode_cache {int seg_override; int has_seg_override; } ;


 unsigned long FUNC_0 (struct x86_emulate_ctxt*,int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct x86_emulate_ctxt *VAR_0,
           struct decode_cache *VAR_1)
{
 if (!VAR_1->has_seg_override)
  return 0;

 return FUNC_0(VAR_0, VAR_1->seg_override);
}
