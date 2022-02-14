
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {scalar_t__ exponent; void* sign; scalar_t__ significand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int) ;
 int FUNC_1 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int) ;
 int FUNC_2 (struct vfp_double*) ;
 int FUNC_3 (int,struct vfp_double*,int,int,char*) ;
 int FUNC_4 (struct vfp_double*,int ) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (void*) ;

__attribute__((used)) static u32
FUNC_7(int VAR_2, int VAR_3, int VAR_4, u32 VAR_5, u32 VAR_6, char *VAR_7)
{
 struct vfp_double VAR_8, VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_4(&VAR_10, FUNC_5(VAR_3));
 if (VAR_10.exponent == 0 && VAR_10.significand)
  FUNC_2(&VAR_10);

 FUNC_4(&VAR_11, FUNC_5(VAR_4));
 if (VAR_11.exponent == 0 && VAR_11.significand)
  FUNC_2(&VAR_11);

 VAR_12 = FUNC_1(&VAR_9, &VAR_10, &VAR_11, VAR_5);
 if (VAR_6 & VAR_0)
  VAR_9.sign = FUNC_6(VAR_9.sign);

 FUNC_4(&VAR_10, FUNC_5(VAR_2));
 if (VAR_6 & VAR_1)
  VAR_10.sign = FUNC_6(VAR_10.sign);

 VAR_12 |= FUNC_0(&VAR_8, &VAR_10, &VAR_9, VAR_5);

 return FUNC_3(VAR_2, &VAR_8, VAR_5, VAR_12, VAR_7);
}
