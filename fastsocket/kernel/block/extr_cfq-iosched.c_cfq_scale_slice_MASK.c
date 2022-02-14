
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cfq_group {int weight; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline u64 FUNC_1(unsigned long VAR_2, struct cfq_group *VAR_3)
{
 u64 VAR_4 = VAR_2 << VAR_1;

 VAR_4 = VAR_4 * VAR_0;
 FUNC_0(VAR_4, VAR_3->weight);
 return VAR_4;
}
