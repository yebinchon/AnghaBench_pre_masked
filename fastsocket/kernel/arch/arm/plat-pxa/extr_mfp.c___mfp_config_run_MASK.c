
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfp_pin {int mfpr_run; int mfpr_off; } ;


 scalar_t__ FUNC_0 (struct mfp_pin*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct mfp_pin *VAR_0)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0->mfpr_off, VAR_0->mfpr_run);
}
