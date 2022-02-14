
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {scalar_t__ state; int conf_mutex; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct qeth_card *VAR_4,
  const char *VAR_5, size_t VAR_6, int *VAR_7, int VAR_8)
{
 char *VAR_9;
 int VAR_10, VAR_11 = 0;

 if (!VAR_4)
  return -VAR_2;

 FUNC_0(&VAR_4->conf_mutex);
 if ((VAR_4->state != VAR_0) &&
     (VAR_4->state != VAR_1)) {
  VAR_11 = -VAR_3;
  goto out;
 }
 VAR_10 = FUNC_2(VAR_5, &VAR_9, 10);
 if (VAR_10 <= VAR_8)
  *VAR_7 = VAR_10;
 else
  VAR_11 = -VAR_2;
out:
 FUNC_1(&VAR_4->conf_mutex);
 return VAR_11 ? VAR_11 : VAR_6;
}
