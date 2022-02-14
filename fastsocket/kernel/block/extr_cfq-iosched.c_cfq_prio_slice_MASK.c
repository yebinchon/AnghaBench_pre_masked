
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_data {int* cfq_slice; } ;


 int const VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct cfq_data *VAR_2, bool VAR_3,
     unsigned short VAR_4)
{
 const int VAR_5 = VAR_2->cfq_slice[VAR_3];

 FUNC_0(VAR_4 >= VAR_1);

 return VAR_5 + (VAR_5/VAR_0 * (4 - VAR_4));
}
