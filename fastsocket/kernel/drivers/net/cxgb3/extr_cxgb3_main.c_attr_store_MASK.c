
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (char const*,char**,int ) ;
 size_t FUNC_4 (struct net_device*,unsigned int) ;
 struct net_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
     const char *VAR_4, size_t VAR_5,
     ssize_t(*VAR_6) (struct net_device *, unsigned int),
     unsigned int VAR_7, unsigned int VAR_8)
{
 char *VAR_9;
 ssize_t VAR_10;
 unsigned int VAR_11;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_11 = FUNC_3(VAR_4, &VAR_9, 0);
 if (VAR_9 == VAR_4 || VAR_11 < VAR_7 || VAR_11 > VAR_8)
  return -VAR_1;

 FUNC_1();
 VAR_10 = (*VAR_6) (FUNC_5(VAR_3), VAR_11);
 if (!VAR_10)
  VAR_10 = VAR_5;
 FUNC_2();
 return VAR_10;
}
