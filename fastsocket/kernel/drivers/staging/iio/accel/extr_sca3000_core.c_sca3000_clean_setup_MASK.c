
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int bpse; int lock; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sca3000_state*,int ,int**) ;
 int FUNC_4 (struct sca3000_state*,int ,int**,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;
 int FUNC_6 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sca3000_state *VAR_14)
{
 int VAR_15;
 u8 *VAR_16;

 FUNC_1(&VAR_14->lock);

 VAR_15 = FUNC_4(VAR_14, VAR_10, &VAR_16, 1);
 if (VAR_15)
  goto error_ret;
 FUNC_0(VAR_16);


 VAR_15 = FUNC_3(VAR_14,
        VAR_12,
        &VAR_16);
 if (VAR_15)
  goto error_ret;
 VAR_15 = FUNC_5(VAR_14,
         VAR_12,
         VAR_16[1] & VAR_2);
 FUNC_0(VAR_16);
 if (VAR_15)
  goto error_ret;


 FUNC_3(VAR_14,
         VAR_13,
         &VAR_16);


 VAR_15 = FUNC_5(VAR_14,
         VAR_13,
         (VAR_16[1] & VAR_8)
         | VAR_5
         | VAR_6
         | VAR_7
         | VAR_4);
 FUNC_0(VAR_16);

 if (VAR_15)
  goto error_ret;

 VAR_15 = FUNC_4(VAR_14,
     VAR_9,
     &VAR_16, 1);
 if (VAR_15)
  goto error_ret;
 VAR_15 = FUNC_6(VAR_14,
    VAR_9,
    (VAR_16[1] & VAR_1)
    | VAR_0);
 FUNC_0(VAR_16);
 if (VAR_15)
  goto error_ret;



 VAR_15 = FUNC_4(VAR_14,
     VAR_11,
     &VAR_16, 1);
 if (VAR_15)
  goto error_ret;
 VAR_15 = FUNC_6(VAR_14,
    VAR_11,
    (VAR_16[1] & VAR_3));
 FUNC_0(VAR_16);
 VAR_14->bpse = 11;

error_ret:
 FUNC_2(&VAR_14->lock);
 return VAR_15;
}
