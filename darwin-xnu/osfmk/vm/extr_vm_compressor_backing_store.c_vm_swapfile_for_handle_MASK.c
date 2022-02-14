
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct swapfile {unsigned int swp_index; int swp_queue; } ;
typedef int queue_entry_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;

__attribute__((used)) static struct swapfile *
FUNC_3(uint64_t VAR_4)
{

 uint64_t VAR_5 = 0;
 unsigned int VAR_6 = 0;
 struct swapfile* VAR_7 = ((void*)0);

 VAR_5 = (VAR_4 & VAR_2);
 VAR_6 = (VAR_4 >> VAR_1);

 VAR_7 = (struct swapfile*) FUNC_1(&VAR_3);

 while(FUNC_0(&VAR_3, (queue_entry_t)VAR_7) == VAR_0) {

  if (VAR_6 == VAR_7->swp_index) {
   break;
  }

  VAR_7 = (struct swapfile*) FUNC_2(&VAR_7->swp_queue);
 }

 if (FUNC_0(&VAR_3, (queue_entry_t) VAR_7)) {
  VAR_7 = ((void*)0);
 }

 return VAR_7;
}
