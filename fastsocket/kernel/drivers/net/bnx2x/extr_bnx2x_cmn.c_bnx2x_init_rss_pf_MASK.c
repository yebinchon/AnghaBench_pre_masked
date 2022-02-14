
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {scalar_t__ pmf; } ;
struct TYPE_4__ {scalar_t__* ind_table; } ;
struct bnx2x {TYPE_3__ port; TYPE_2__* fp; TYPE_1__ rss_conf_obj; } ;
struct TYPE_5__ {scalar_t__ cl_id; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,int) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_0)
{
 int VAR_1;
 u8 VAR_2 = FUNC_0(VAR_0);




 for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->rss_conf_obj.ind_table); VAR_1++)
  VAR_0->rss_conf_obj.ind_table[VAR_1] =
   VAR_0->fp->cl_id +
   FUNC_3(VAR_1, VAR_2);
 return FUNC_2(VAR_0, VAR_0->port.pmf || !FUNC_1(VAR_0));
}
