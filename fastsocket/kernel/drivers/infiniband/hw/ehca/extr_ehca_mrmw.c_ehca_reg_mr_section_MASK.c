
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;
struct ehca_mr_pginfo {int hwpage_size; } ;
struct ehca_mr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int,int,int) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int ,struct ehca_mr*,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (void*) ;

__attribute__((used)) static u64 FUNC_5(int VAR_4, int VAR_5, int VAR_6, u64 *VAR_7,
          struct ehca_shca *VAR_8, struct ehca_mr *VAR_9,
          struct ehca_mr_pginfo *VAR_10)
{
 u64 VAR_11 = 0;
 unsigned long VAR_12 = 0;
 u64 VAR_13 = FUNC_4(VAR_7);
 int VAR_14;

 void *VAR_15 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if ((unsigned long)VAR_15 & (VAR_10->hwpage_size - 1)) {
  FUNC_2(&VAR_8->ib_device, "reg_mr_section will probably fail:"
        "hwpage_size does not fit to "
        "section start address");
 }
 VAR_14 = VAR_0 / VAR_10->hwpage_size;

 while (VAR_12 < VAR_14) {
  u64 VAR_16;
  for (VAR_16 = 0; (VAR_16 < VAR_3) && (VAR_12 < VAR_14);
       VAR_16++) {
   void *VAR_17 = VAR_15 + ((VAR_12++) * VAR_10->hwpage_size);
   VAR_7[VAR_16] = FUNC_4(VAR_17);
  }

  VAR_11 = FUNC_3(VAR_8->ipz_hca_handle, VAR_9,
   FUNC_1(VAR_10->hwpage_size),
   0, VAR_13, VAR_16);

  if ((VAR_11 != VAR_2) && (VAR_11 != VAR_1)) {
   FUNC_2(&VAR_8->ib_device, "register_rpage_mr failed");
   return VAR_11;
  }
 }
 return VAR_11;
}
