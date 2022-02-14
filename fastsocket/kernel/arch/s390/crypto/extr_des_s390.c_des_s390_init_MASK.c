
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_22 = 0;

 if (!FUNC_1(VAR_7, VAR_0) ||
     !FUNC_1(VAR_8, VAR_0) ||
     !FUNC_1(VAR_9, VAR_0))
  return -VAR_3;

 VAR_22 = FUNC_2(&VAR_18);
 if (VAR_22)
  goto des_err;
 VAR_22 = FUNC_2(&VAR_21);
 if (VAR_22)
  goto ecb_des_err;
 VAR_22 = FUNC_2(&VAR_12);
 if (VAR_22)
  goto cbc_des_err;

 VAR_22 = FUNC_2(&VAR_16);
 if (VAR_22)
  goto des3_128_err;
 VAR_22 = FUNC_2(&VAR_19);
 if (VAR_22)
  goto ecb_des3_128_err;
 VAR_22 = FUNC_2(&VAR_10);
 if (VAR_22)
  goto cbc_des3_128_err;

 VAR_22 = FUNC_2(&VAR_17);
 if (VAR_22)
  goto des3_192_err;
 VAR_22 = FUNC_2(&VAR_20);
 if (VAR_22)
  goto ecb_des3_192_err;
 VAR_22 = FUNC_2(&VAR_11);
 if (VAR_22)
  goto cbc_des3_192_err;

 if (FUNC_1(VAR_5,
   VAR_0 | VAR_1) &&
     FUNC_1(VAR_6,
   VAR_0 | VAR_1)) {
  VAR_22 = FUNC_2(&VAR_14);
  if (VAR_22)
   goto ctr_des_err;
  VAR_22 = FUNC_2(&VAR_13);
  if (VAR_22)
   goto ctr_des3_err;
  VAR_15 = (u8 *) FUNC_0(VAR_4);
  if (!VAR_15) {
   VAR_22 = -VAR_2;
   goto ctr_mem_err;
  }
 }

out:
 return VAR_22;

ctr_mem_err:
 FUNC_3(&VAR_13);
ctr_des3_err:
 FUNC_3(&VAR_14);
ctr_des_err:
 FUNC_3(&VAR_11);
cbc_des3_192_err:
 FUNC_3(&VAR_20);
ecb_des3_192_err:
 FUNC_3(&VAR_17);
des3_192_err:
 FUNC_3(&VAR_10);
cbc_des3_128_err:
 FUNC_3(&VAR_19);
ecb_des3_128_err:
 FUNC_3(&VAR_16);
des3_128_err:
 FUNC_3(&VAR_12);
cbc_des_err:
 FUNC_3(&VAR_21);
ecb_des_err:
 FUNC_3(&VAR_18);
des_err:
 goto out;
}
