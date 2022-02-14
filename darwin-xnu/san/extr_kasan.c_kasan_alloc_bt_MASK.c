
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t*,int) ;
 int FUNC_1 (int,int) ;
 uintptr_t VAR_1 ;

__attribute__((used)) static vm_size_t
FUNC_2(uint32_t *VAR_2, vm_size_t VAR_3, vm_size_t VAR_4)
{
 uintptr_t VAR_5[VAR_0];
 uintptr_t *VAR_6 = VAR_5;

 VAR_3 /= sizeof(uint32_t);
 vm_size_t VAR_7 = VAR_3;

 if (VAR_7 > 0) {
  VAR_7 = FUNC_1(VAR_7 + VAR_4, VAR_0);
  VAR_7 = FUNC_0(VAR_6, VAR_7);

  while (VAR_7 > VAR_3 && VAR_4 > 0) {
   VAR_6++;
   VAR_7--;
   VAR_4--;
  }



  for (vm_size_t VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_2[VAR_8] = (uint32_t)(VAR_6[VAR_8] - VAR_1);
  }
 }
 return VAR_7;
}
