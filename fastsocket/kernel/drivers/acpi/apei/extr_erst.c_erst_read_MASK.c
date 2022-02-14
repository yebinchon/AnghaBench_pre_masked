
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cper_record_header {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cper_record_header*,size_t) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

ssize_t FUNC_3(u64 VAR_3, struct cper_record_header *VAR_4,
    size_t VAR_5)
{
 ssize_t VAR_6;
 unsigned long VAR_7;

 if (VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2, VAR_7);
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_2, VAR_7);
 return VAR_6;
}
