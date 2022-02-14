
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (char const*,int *) ;

int FUNC_2(const char *VAR_3, enum qeth_prot_versions VAR_4,
    __u8 *VAR_5)
{
 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_3, VAR_5);
 else if (VAR_4 == VAR_2)
  return FUNC_1(VAR_3, VAR_5);
 else
  return -VAR_0;
}
