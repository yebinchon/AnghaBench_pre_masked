
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i1480u_tx_inflight {unsigned long max; unsigned long threshold; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned long*,unsigned long*) ;

__attribute__((used)) static
ssize_t FUNC_1(struct i1480u_tx_inflight *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4, VAR_5;
 ssize_t VAR_6;
 VAR_6 = FUNC_0(VAR_2, "%lu %lu", &VAR_4, &VAR_5);
 if (VAR_6 != 2)
  return -VAR_0;
 if (VAR_5 <= VAR_4)
  return -VAR_0;
 VAR_1->max = VAR_5;
 VAR_1->threshold = VAR_4;
 return VAR_3;
}
