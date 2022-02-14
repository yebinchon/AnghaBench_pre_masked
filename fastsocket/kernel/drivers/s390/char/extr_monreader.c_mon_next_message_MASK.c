
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {size_t read_index; int read_ready; struct mon_msg** msg_array; } ;
struct mon_msg {scalar_t__ mca_offset; scalar_t__ pos; scalar_t__ msglim_reached; scalar_t__ replied_msglim; } ;


 int VAR_0 ;
 struct mon_msg* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct mon_msg *FUNC_4(struct mon_private *VAR_2)
{
 struct mon_msg *VAR_3;

 if (!FUNC_2(&VAR_2->read_ready))
  return ((void*)0);
 VAR_3 = VAR_2->msg_array[VAR_2->read_index];
 if (FUNC_3(VAR_3->replied_msglim)) {
  VAR_3->replied_msglim = 0;
  VAR_3->msglim_reached = 0;
  VAR_3->pos = 0;
  VAR_3->mca_offset = 0;
  VAR_2->read_index = (VAR_2->read_index + 1) %
          VAR_1;
  FUNC_1(&VAR_2->read_ready);
  return FUNC_0(-VAR_0);
 }
 return VAR_3;
}
