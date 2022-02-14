
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ldc_version {scalar_t__ major; } ;


 int FUNC_0 (struct ldc_version*) ;
 struct ldc_version* VAR_0 ;

__attribute__((used)) static struct ldc_version *FUNC_1(u16 VAR_1)
{
 struct ldc_version *VAR_2 = ((void*)0);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  struct ldc_version *VAR_4 = &VAR_0[VAR_3];
  if (VAR_4->major <= VAR_1) {
   VAR_2 = VAR_4;
   break;
  }
 }
 return VAR_2;
}
