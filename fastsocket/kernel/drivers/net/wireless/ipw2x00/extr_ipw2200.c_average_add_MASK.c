
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct average {size_t pos; int init; scalar_t__* entries; int sum; } ;
typedef scalar_t__ s16 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct average *VAR_1, s16 VAR_2)
{
 VAR_1->sum -= VAR_1->entries[VAR_1->pos];
 VAR_1->sum += VAR_2;
 VAR_1->entries[VAR_1->pos++] = VAR_2;
 if (FUNC_0(VAR_1->pos == VAR_0)) {
  VAR_1->init = 1;
  VAR_1->pos = 0;
 }
}
