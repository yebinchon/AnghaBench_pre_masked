
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ehca_shca {int ib_device; int ipz_hca_handle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ,int ,int *,unsigned long*) ;
 int FUNC_5 (struct ehca_shca*,void*,int *,int) ;

int FUNC_6(struct ehca_shca *VAR_6, void *VAR_7,
      u64 VAR_8)
{

 unsigned long VAR_9;
 u64 *VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_1(VAR_3);
 if (!VAR_10) {
  FUNC_2(&VAR_6->ib_device, "Cannot allocate rblock memory.");
  VAR_9 = -VAR_1;
  goto error_data1;
 }


 VAR_9 = FUNC_4(VAR_6->ipz_hca_handle,
    VAR_8,
    VAR_10,
    &VAR_11);

 if (VAR_9 == VAR_4)
  FUNC_2(&VAR_6->ib_device,
    "No error data is available: %llx.", VAR_8);
 else if (VAR_9 == VAR_5) {
  int VAR_12;

  VAR_12 = FUNC_0(VAR_2, VAR_10[0]);

  if (VAR_12 > VAR_0)
   VAR_12 = VAR_0;

  FUNC_5(VAR_6, VAR_7, VAR_10, VAR_12);
 } else
  FUNC_2(&VAR_6->ib_device,
    "Error data could not be fetched: %llx", VAR_8);

 FUNC_3(VAR_10);

error_data1:
 return VAR_9;

}
