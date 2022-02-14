
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knote {unsigned int kn_id; scalar_t__ kn_data; } ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_2, long VAR_3)
{

 if (VAR_3 & VAR_1) {
  VAR_3 &= ~VAR_1;

  if (VAR_2->kn_id == (unsigned int)VAR_3)
   VAR_2->kn_data++;
 } else if (VAR_3 & VAR_0) {
  FUNC_0("filt_signal: detected NOTE_EXIT event");
 }

 return (VAR_2->kn_data != 0);
}
