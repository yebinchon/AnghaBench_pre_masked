
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
typedef int __le16 ;


 short FUNC_0 (int ) ;
 int FUNC_1 (struct zd1201*,int,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct zd1201 *VAR_0, int VAR_1, short *VAR_2)
{
 int VAR_3;
 __le16 VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4, sizeof(__le16));
 if (VAR_3)
  return VAR_3;
 *VAR_2 = FUNC_0(VAR_4);
 return 0;
}
