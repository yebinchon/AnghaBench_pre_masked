
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {scalar_t__ avail; scalar_t__ pend_cred; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(const struct sge_fl *VAR_1)
{
 return VAR_1->avail - VAR_1->pend_cred <= VAR_0;
}
