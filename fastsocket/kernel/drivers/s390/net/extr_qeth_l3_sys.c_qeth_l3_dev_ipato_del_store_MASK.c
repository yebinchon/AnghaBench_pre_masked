
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qeth_card {int conf_mutex; } ;
typedef int ssize_t ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qeth_card*,int,int *,int) ;
 int FUNC_3 (char const*,int,int *,int*) ;

__attribute__((used)) static ssize_t FUNC_4(const char *VAR_0, size_t VAR_1,
    struct qeth_card *VAR_2, enum qeth_prot_versions VAR_3)
{
 u8 VAR_4[16];
 int VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_2->conf_mutex);
 VAR_6 = FUNC_3(VAR_0, VAR_3, VAR_4, &VAR_5);
 if (!VAR_6)
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_1(&VAR_2->conf_mutex);
 return VAR_6 ? VAR_6 : VAR_1;
}
