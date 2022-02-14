
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int **,int **,int *) ;
 int FUNC_9 (char*) ;

int FUNC_10(const MPI VAR_3, const MPI VAR_4[], const MPI VAR_5[])
{
 MPI VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 MPI VAR_12 = ((void*)0), VAR_13 = ((void*)0), VAR_14 = ((void*)0), VAR_15 = ((void*)0);
 MPI VAR_16[3];
 MPI VAR_17[3];
 int VAR_18;

 if (!VAR_3 ||
     !VAR_4[0] || !VAR_4[1] ||
     !VAR_5[0] || !VAR_5[1] || !VAR_5[2] || !VAR_5[3])
  return -VAR_0;

 VAR_6 = VAR_5[0];
 VAR_7 = VAR_5[1];
 VAR_8 = VAR_5[2];
 VAR_9 = VAR_5[3];
 VAR_10 = VAR_4[0];
 VAR_11 = VAR_4[1];

 if (!(FUNC_2(VAR_10, 0) > 0 && FUNC_1(VAR_10, VAR_7) < 0)) {
  FUNC_9("DSA_verify assertion failed [0 < r < q]\n");
  return -VAR_1;
 }

 if (!(FUNC_2(VAR_11, 0) > 0 && FUNC_1(VAR_11, VAR_7) < 0)) {
  FUNC_9("DSA_verify assertion failed [0 < s < q]\n");
  return -VAR_1;
 }

 VAR_18 = -VAR_2;
 VAR_12 = FUNC_0(FUNC_5(VAR_7)); if (!VAR_12 ) goto cleanup;
 VAR_13 = FUNC_0(FUNC_5(VAR_7)); if (!VAR_13) goto cleanup;
 VAR_14 = FUNC_0(FUNC_5(VAR_7)); if (!VAR_14) goto cleanup;
 VAR_15 = FUNC_0(FUNC_5(VAR_6)); if (!VAR_15 ) goto cleanup;


 if (FUNC_6(VAR_12, VAR_11, VAR_7) < 0)
  goto cleanup;


 if (FUNC_7(VAR_13, VAR_3, VAR_12, VAR_7) < 0)
  goto cleanup;


 if (FUNC_7(VAR_14, VAR_10, VAR_12, VAR_7) < 0)
  goto cleanup;


 VAR_16[0] = VAR_8; VAR_17[0] = VAR_13;
 VAR_16[1] = VAR_9; VAR_17[1] = VAR_14;
 VAR_16[2] = ((void*)0); VAR_17[2] = ((void*)0);

 if (FUNC_8(VAR_15, VAR_16, VAR_17, VAR_6) < 0)
  goto cleanup;

 if (FUNC_3(VAR_15, VAR_15, VAR_7) < 0)
  goto cleanup;

 VAR_18 = (FUNC_1(VAR_15, VAR_10) == 0) ? 0 : -VAR_1;

cleanup:
 FUNC_4(VAR_12);
 FUNC_4(VAR_13);
 FUNC_4(VAR_14);
 FUNC_4(VAR_15);
 return VAR_18;
}
