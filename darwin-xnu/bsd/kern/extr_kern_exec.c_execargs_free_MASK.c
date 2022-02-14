
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct image_params {int * ip_strings; } ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct image_params *VAR_8)
{
 kern_return_t VAR_9;
 int VAR_10;
 boolean_t VAR_11 = VAR_1;

 VAR_9 = FUNC_3(VAR_8->ip_strings);

 FUNC_1();
 VAR_6++;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  vm_offset_t VAR_12 = VAR_4[VAR_10];
  if (VAR_12 == 0) {
   VAR_4[VAR_10] = (vm_offset_t) VAR_8->ip_strings;
   VAR_8->ip_strings = ((void*)0);
   break;
  }
 }

 FUNC_0(VAR_8->ip_strings == ((void*)0));

 if (VAR_7 > 0)
  VAR_11 = VAR_3;

 FUNC_2();

 if (VAR_11 == VAR_3)
  FUNC_4();

 return ((VAR_9 == VAR_2 ? 0 : VAR_0));
}
