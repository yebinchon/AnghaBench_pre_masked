
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypt_ctl {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(void)
{
 FUNC_0(sizeof(struct crypt_ctl) != 64);
 VAR_4 = FUNC_1(VAR_5,
   VAR_2 * sizeof(struct crypt_ctl),
   &VAR_3, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 FUNC_2(VAR_4, 0, VAR_2 * sizeof(struct crypt_ctl));
 return 0;
}
