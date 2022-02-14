
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
typedef int const __be64 ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct buffer_head *VAR_0,
           __be64 *VAR_1, unsigned VAR_2,
           int *VAR_3)
{
 const __be64 *VAR_4 = (const __be64 *)(VAR_0->b_data + VAR_0->b_size);
 const __be64 *VAR_5 = VAR_1;
 u64 VAR_6 = FUNC_0(*VAR_1);

 *VAR_3 = 0;
 do {
  VAR_1++;
  if (VAR_1 >= VAR_4)
   break;
  if (VAR_2 && --VAR_2 == 0)
   break;
  if (VAR_6)
   VAR_6++;
 } while(FUNC_0(*VAR_1) == VAR_6);
 if (VAR_1 >= VAR_4)
  *VAR_3 = 1;
 return (VAR_1 - VAR_5);
}
