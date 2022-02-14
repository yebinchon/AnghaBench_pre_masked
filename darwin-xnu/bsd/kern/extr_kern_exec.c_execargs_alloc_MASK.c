
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wait_result_t ;
typedef scalar_t__ vm_offset_t ;
struct image_params {char* ip_strings; char* ip_vdata; char* ip_strendp; int ip_argspace; int ip_strspace; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_6(struct image_params *VAR_10)
{
 kern_return_t VAR_11;
 wait_result_t VAR_12;
 int VAR_13, VAR_14 = -1;

 FUNC_1();

 while (VAR_8 == 0) {
  VAR_9++;
  VAR_12 = FUNC_2();
  VAR_9--;
  if (VAR_12 != VAR_5) {
   FUNC_3();
   return (VAR_0);
  }
 }

 VAR_8--;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  vm_offset_t VAR_15 = VAR_6[VAR_13];
  if (VAR_15) {
   VAR_14 = VAR_13;
   VAR_10->ip_strings = (char *)(VAR_6[VAR_13]);
   VAR_6[VAR_13] = 0;
   break;
  }
 }

 FUNC_0(VAR_8 >= 0);

 FUNC_3();

 if (VAR_14 == -1) {
  VAR_11 = FUNC_4(&VAR_10->ip_strings);
 }
 else
  VAR_11 = FUNC_5(VAR_10->ip_strings);

 FUNC_0(VAR_11 == VAR_2);
 if (VAR_11 != VAR_2) {
  return (VAR_1);
 }


 VAR_10->ip_vdata = VAR_10->ip_strings + ( VAR_3 + VAR_4 );
 VAR_10->ip_strendp = VAR_10->ip_strings;
 VAR_10->ip_argspace = VAR_3;
 VAR_10->ip_strspace = ( VAR_3 + VAR_4 );

 return (0);
}
