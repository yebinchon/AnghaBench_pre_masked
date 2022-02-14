
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {int dummy; } ;
struct dlm_lksb {int sb_lkid; } ;
struct dlm_lkb {int dummy; } ;
struct dlm_args {int dummy; } ;
typedef int dlm_lockspace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_lkb**) ;
 struct dlm_ls* FUNC_3 (int *) ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*) ;
 int FUNC_7 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_8 (struct dlm_ls*,struct dlm_lkb*,void*,unsigned int,struct dlm_args*) ;
 int FUNC_9 (int,struct dlm_lksb*,int,unsigned int,int ,void (*) (void*),void*,void (*) (void*,int),struct dlm_args*) ;

int FUNC_10(dlm_lockspace_t *VAR_5,
      int VAR_6,
      struct dlm_lksb *VAR_7,
      uint32_t VAR_8,
      void *VAR_9,
      unsigned int VAR_10,
      uint32_t VAR_11,
      void (*VAR_12) (void *VAR_13),
      void *VAR_14,
      void (*VAR_15) (void *VAR_16, int VAR_17))
{
 struct dlm_ls *VAR_18;
 struct dlm_lkb *VAR_19;
 struct dlm_args VAR_20;
 int VAR_21, VAR_22 = VAR_8 & VAR_0;

 VAR_18 = FUNC_3(VAR_5);
 if (!VAR_18)
  return -VAR_4;

 FUNC_4(VAR_18);

 if (VAR_22)
  VAR_21 = FUNC_7(VAR_18, VAR_7->sb_lkid, &VAR_19);
 else
  VAR_21 = FUNC_2(VAR_18, &VAR_19);

 if (VAR_21)
  goto out;

 VAR_21 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_10, 0, VAR_12,
         VAR_14, VAR_15, &VAR_20);
 if (VAR_21)
  goto out_put;

 if (VAR_22)
  VAR_21 = FUNC_1(VAR_18, VAR_19, &VAR_20);
 else
  VAR_21 = FUNC_8(VAR_18, VAR_19, VAR_9, VAR_10, &VAR_20);

 if (VAR_21 == -VAR_3)
  VAR_21 = 0;
 out_put:
 if (VAR_22 || VAR_21)
  FUNC_0(VAR_18, VAR_19);
 if (VAR_21 == -VAR_1 || VAR_21 == -VAR_2)
  VAR_21 = 0;
 out:
 FUNC_6(VAR_18);
 FUNC_5(VAR_18);
 return VAR_21;
}
