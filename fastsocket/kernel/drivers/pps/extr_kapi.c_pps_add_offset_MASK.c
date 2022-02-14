
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_ktime {scalar_t__ nsec; scalar_t__ sec; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pps_ktime *VAR_1, struct pps_ktime *VAR_2)
{
 VAR_1->nsec += VAR_2->nsec;
 while (VAR_1->nsec >= VAR_0) {
  VAR_1->nsec -= VAR_0;
  VAR_1->sec++;
 }
 while (VAR_1->nsec < 0) {
  VAR_1->nsec += VAR_0;
  VAR_1->sec--;
 }
 VAR_1->sec += VAR_2->sec;
}
