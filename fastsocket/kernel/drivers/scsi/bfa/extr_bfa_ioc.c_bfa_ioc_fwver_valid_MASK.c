
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfi_ioc_image_hdr_s {scalar_t__ signature; scalar_t__ bootenv; } ;
struct bfa_ioc_s {int dummy; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_3 (struct bfa_ioc_s*,struct bfi_ioc_image_hdr_s*) ;
 int FUNC_4 (struct bfa_ioc_s*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static bfa_boolean_t
FUNC_7(struct bfa_ioc_s *VAR_1, u32 VAR_2)
{
 struct bfi_ioc_image_hdr_s VAR_3, *VAR_4;

 FUNC_3(VAR_1, &VAR_3);
 VAR_4 = (struct bfi_ioc_image_hdr_s *)
  FUNC_0(FUNC_1(VAR_1), 0);

 if (VAR_3.signature != FUNC_5(VAR_4->signature)) {
  FUNC_4(VAR_1, VAR_3.signature);
  FUNC_4(VAR_1, VAR_4->signature);
  return VAR_0;
 }

 if (FUNC_6(VAR_3.bootenv) != VAR_2) {
  FUNC_4(VAR_1, VAR_3.bootenv);
  FUNC_4(VAR_1, VAR_2);
  return VAR_0;
 }

 return FUNC_2(VAR_1, &VAR_3);
}
