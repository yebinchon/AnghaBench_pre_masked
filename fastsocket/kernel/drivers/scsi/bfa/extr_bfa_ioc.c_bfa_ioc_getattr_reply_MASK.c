
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_attr_s {scalar_t__ port_mode; void* mfg_year; void* maxfrsize; void* card_type; void* adapter_prop; } ;
struct bfa_ioc_s {int fcmode; struct bfi_ioc_attr_s* attr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (struct bfa_ioc_s*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc_s *VAR_2)
{
 struct bfi_ioc_attr_s *VAR_3 = VAR_2->attr;

 VAR_3->adapter_prop = FUNC_1(VAR_3->adapter_prop);
 VAR_3->card_type = FUNC_1(VAR_3->card_type);
 VAR_3->maxfrsize = FUNC_0(VAR_3->maxfrsize);
 VAR_2->fcmode = (VAR_3->port_mode == VAR_0);
 VAR_3->mfg_year = FUNC_0(VAR_3->mfg_year);

 FUNC_2(VAR_2, VAR_1);
}
