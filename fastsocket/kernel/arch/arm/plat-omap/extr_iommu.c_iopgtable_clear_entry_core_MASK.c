
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int*) ;
 int* FUNC_2 (struct iommu*,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int ,int) ;

__attribute__((used)) static size_t FUNC_6(struct iommu *VAR_8, u32 VAR_9)
{
 size_t VAR_10;
 u32 *VAR_11 = FUNC_2(VAR_8, VAR_9);
 int VAR_12 = 1;

 if (!*VAR_11)
  return 0;

 if (*VAR_11 & VAR_3) {
  int VAR_13;
  u32 *VAR_14 = FUNC_4(VAR_11, VAR_9);

  VAR_10 = VAR_5;
  if (*VAR_14 & VAR_4) {
   VAR_12 *= 16;

   VAR_14 = (u32 *)((u32)VAR_14 & VAR_0);
  }
  VAR_10 *= VAR_12;
  FUNC_5(VAR_14, 0, VAR_12 * sizeof(*VAR_14));
  FUNC_1(VAR_14, VAR_14 + (VAR_12 - 1) * sizeof(*VAR_14));




  VAR_14 = FUNC_4(VAR_11, 0);
  for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
   if (VAR_14[VAR_13])
    goto out;

  FUNC_3(VAR_14);
  VAR_12 = 1;
 } else {
  VAR_10 = VAR_1;
  if ((*VAR_11 & VAR_2) == VAR_2) {
   VAR_12 *= 16;

   VAR_11 = (u32 *)((u32)VAR_11 & VAR_6);
  }
  VAR_10 *= VAR_12;
 }
 FUNC_5(VAR_11, 0, VAR_12 * sizeof(*VAR_11));
 FUNC_0(VAR_11, VAR_11 + (VAR_12 - 1) * sizeof(*VAR_11));
out:
 return VAR_10;
}
