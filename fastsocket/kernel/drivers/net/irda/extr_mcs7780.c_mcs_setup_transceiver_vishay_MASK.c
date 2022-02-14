
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_cb {int dummy; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mcs_cb*,int ,int*) ;
 int FUNC_1 (struct mcs_cb*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct mcs_cb *VAR_6)
{
 int VAR_7 = 0;
 __u16 VAR_8;


 VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8);
 if (FUNC_2(VAR_7 != 2)) {
  VAR_7 = -VAR_0;
  goto error;
 }






 VAR_8 |= (VAR_1 | VAR_4);
 VAR_8 &= ~VAR_3;
 VAR_8 &= ~VAR_2;
 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_8);
 if (FUNC_2(VAR_7))
  goto error;

 VAR_8 &= ~VAR_1;
 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_8);
 if (FUNC_2(VAR_7))
  goto error;

 VAR_8 &= ~VAR_4;
 VAR_7 = FUNC_1(VAR_6, VAR_5, VAR_8);
 if (FUNC_2(VAR_7))
  goto error;

 VAR_7 = 0;
 error:
  return VAR_7;
}
