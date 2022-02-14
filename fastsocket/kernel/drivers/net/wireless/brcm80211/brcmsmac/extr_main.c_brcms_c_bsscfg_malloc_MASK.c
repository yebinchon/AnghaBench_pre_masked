
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcms_bss_info {int dummy; } ;
struct brcms_bss_cfg {int * current_bss; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_bss_cfg*) ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static struct brcms_bss_cfg *FUNC_2(uint VAR_1)
{
 struct brcms_bss_cfg *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct brcms_bss_cfg), VAR_0);
 if (VAR_2 == ((void*)0))
  goto fail;

 VAR_2->current_bss = FUNC_1(sizeof(struct brcms_bss_info), VAR_0);
 if (VAR_2->current_bss == ((void*)0))
  goto fail;

 return VAR_2;

 fail:
 FUNC_0(VAR_2);
 return ((void*)0);
}
