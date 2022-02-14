
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct swapfile {scalar_t__ swp_io_count; int swp_flags; } ;
typedef int kern_return_t ;
typedef int event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;

kern_return_t
FUNC_4(struct swapfile *VAR_5, uint64_t *VAR_6, int VAR_7)
{
 FUNC_0(&VAR_3);

 VAR_5->swp_io_count--;

 if ((VAR_5->swp_flags & VAR_2) && VAR_5->swp_io_count == 0) {

  VAR_5->swp_flags &= ~VAR_2;
  FUNC_2((event_t) &VAR_5->swp_flags);
 }
 FUNC_1(&VAR_3);

 if (VAR_7) {
  FUNC_3(*VAR_6);
  VAR_4++;

  return VAR_0;
 }
 return VAR_1;
}
