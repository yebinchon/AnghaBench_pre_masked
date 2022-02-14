
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map_info {int dummy; } ;
struct chip_probe {scalar_t__ (* probe_chip ) (struct map_info*,int ,int *,struct cfi_private*) ;} ;
struct cfi_private {int interleave; int device_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct map_info*) ;
 scalar_t__ FUNC_2 (struct map_info*,int ,int *,struct cfi_private*) ;

__attribute__((used)) static int FUNC_3(struct map_info *VAR_1, struct chip_probe *VAR_2,
        struct cfi_private *VAR_3)
{
 int VAR_4 = (FUNC_1(VAR_1)/4?:1);
 int VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7;

 for (VAR_6 = VAR_5; VAR_6 >= VAR_4; VAR_6 >>= 1) {

  if (!FUNC_0(VAR_6))
      continue;

  VAR_3->interleave = VAR_6;



  VAR_7 = FUNC_1(VAR_1) / VAR_6;

  for (; VAR_7 <= VAR_0; VAR_7<<=1) {
   VAR_3->device_type = VAR_7;

   if (VAR_2->probe_chip(VAR_1, 0, ((void*)0), VAR_3))
    return 1;
  }
 }
 return 0;
}
