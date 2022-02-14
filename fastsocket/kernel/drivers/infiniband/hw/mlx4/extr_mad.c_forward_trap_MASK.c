
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {int sm_lock; int * sm_ah; struct ib_mad_agent*** send_agent; } ;
struct ib_mad_send_buf {int ah; int mad; } ;
struct ib_mad_agent {int dummy; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ib_mad_send_buf*) ;
 struct ib_mad_send_buf* FUNC_1 (struct ib_mad_agent*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ib_mad_send_buf*) ;
 int FUNC_3 (struct ib_mad_send_buf*,int *) ;
 int FUNC_4 (int ,struct ib_mad*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct mlx4_ib_dev *VAR_5, u8 VAR_6, struct ib_mad *VAR_7)
{
 int VAR_8 = VAR_7->mad_hdr.mgmt_class != VAR_2;
 struct ib_mad_send_buf *VAR_9;
 struct ib_mad_agent *VAR_10 = VAR_5->send_agent[VAR_6 - 1][VAR_8];
 int VAR_11;
 unsigned long VAR_12;

 if (VAR_10) {
  VAR_9 = FUNC_1(VAR_10, VAR_8, 0, 0, VAR_4,
           VAR_3, VAR_1);
  if (FUNC_0(VAR_9))
   return;






  FUNC_5(&VAR_5->sm_lock, VAR_12);
  FUNC_4(VAR_9->mad, VAR_7, sizeof *VAR_7);
  if ((VAR_9->ah = VAR_5->sm_ah[VAR_6 - 1]))
   VAR_11 = FUNC_3(VAR_9, ((void*)0));
  else
   VAR_11 = -VAR_0;
  FUNC_6(&VAR_5->sm_lock, VAR_12);

  if (VAR_11)
   FUNC_2(VAR_9);
 }
}
