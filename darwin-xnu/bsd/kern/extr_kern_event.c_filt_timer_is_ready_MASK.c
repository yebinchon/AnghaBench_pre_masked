
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct knote {scalar_t__* kn_ext; int kn_sfflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static bool
FUNC_2(struct knote *VAR_1)
{
 uint64_t VAR_2, VAR_3 = VAR_1->kn_ext[0];

 if (VAR_3 == 0) {
  return 1;
 }

 if (VAR_1->kn_sfflags & VAR_0) {
  VAR_2 = FUNC_1();
 } else {
  VAR_2 = FUNC_0();
 }
 return VAR_3 <= VAR_2;
}
