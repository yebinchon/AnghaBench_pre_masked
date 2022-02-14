
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; unsigned int high_slices; int member_1; int member_0; } ;


 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static struct slice_mask FUNC_3(unsigned long VAR_1,
          unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_1 + VAR_2 - 1;
 struct slice_mask VAR_4 = { 0, 0 };

 if (VAR_1 < VAR_0) {
  unsigned long VAR_5 = FUNC_2(VAR_3, VAR_0);
  unsigned long VAR_6 = FUNC_2(VAR_1, VAR_0);

  VAR_4.low_slices = (1u << (FUNC_1(VAR_5) + 1))
   - (1u << FUNC_1(VAR_6));
 }

 if ((VAR_1 + VAR_2) > VAR_0)
  VAR_4.high_slices = (1u << (FUNC_0(VAR_3) + 1))
   - (1u << FUNC_0(VAR_1));

 return VAR_4;
}
