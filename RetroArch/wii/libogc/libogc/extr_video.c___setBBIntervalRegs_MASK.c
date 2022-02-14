
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _timing {int be3; int bs3; int be1; int bs1; int be4; int bs4; int be2; int bs2; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(const struct _timing *VAR_2)
{
 VAR_1[10] = (VAR_2->be3<<5)|VAR_2->bs3;
 VAR_1[11] = (VAR_2->be1<<5)|VAR_2->bs1;
 VAR_0 |= FUNC_0(10);
 VAR_0 |= FUNC_0(11);

 VAR_1[12] = (VAR_2->be4<<5)|VAR_2->bs4;
 VAR_1[13] = (VAR_2->be2<<5)|VAR_2->bs2;
 VAR_0 |= FUNC_0(12);
 VAR_0 |= FUNC_0(13);
}
