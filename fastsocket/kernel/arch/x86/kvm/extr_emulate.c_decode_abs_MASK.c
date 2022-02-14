
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ops {int dummy; } ;
struct decode_cache {int ad_bytes; int eip; void* modrm_ea; } ;
struct x86_emulate_ctxt {struct decode_cache decode; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct x86_emulate_ctxt *VAR_4,
        struct x86_emulate_ops *VAR_5)
{
 struct decode_cache *VAR_6 = &VAR_4->decode;
 int VAR_7 = VAR_0;

 switch (VAR_6->ad_bytes) {
 case 2:
  VAR_6->modrm_ea = FUNC_0(VAR_1, 2, VAR_6->eip);
  break;
 case 4:
  VAR_6->modrm_ea = FUNC_0(VAR_2, 4, VAR_6->eip);
  break;
 case 8:
  VAR_6->modrm_ea = FUNC_0(VAR_3, 8, VAR_6->eip);
  break;
 }
done:
 return VAR_7;
}
