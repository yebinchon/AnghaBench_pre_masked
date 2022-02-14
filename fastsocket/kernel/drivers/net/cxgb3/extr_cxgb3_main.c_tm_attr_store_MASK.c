
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct device {int dummy; } ;
struct adapter {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 struct port_info* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (char const*,char**,int ) ;
 size_t FUNC_5 (struct adapter*,unsigned int,int) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
        const char *VAR_4, size_t VAR_5, int VAR_6)
{
 struct port_info *VAR_7 = FUNC_1(FUNC_6(VAR_3));
 struct adapter *VAR_8 = VAR_7->adapter;
 unsigned int VAR_9;
 char *VAR_10;
 ssize_t VAR_11;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 VAR_9 = FUNC_4(VAR_4, &VAR_10, 0);
 if (VAR_10 == VAR_4 || VAR_9 > 10000000)
  return -VAR_1;

 FUNC_2();
 VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_6);
 if (!VAR_11)
  VAR_11 = VAR_5;
 FUNC_3();
 return VAR_11;
}
