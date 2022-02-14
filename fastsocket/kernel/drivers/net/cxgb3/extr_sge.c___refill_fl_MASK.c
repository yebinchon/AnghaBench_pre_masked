
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {scalar_t__ credits; scalar_t__ size; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct adapter*,struct sge_fl*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct adapter *VAR_3, struct sge_fl *VAR_4)
{
 FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_1, VAR_4->size - VAR_4->credits),
    VAR_0 | VAR_2);
}
