
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptd {int dummy; } ;
struct isp1362_hcd {int dummy; } ;
struct isp1362_ep_queue {int dummy; } ;
struct isp1362_ep {int length; int ptd_offset; struct ptd* data; struct ptd ptd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ptd*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ptd*) ;
 int FUNC_3 (struct ptd*,struct ptd*) ;
 int FUNC_4 (struct isp1362_hcd*,struct ptd*,int,int) ;
 int FUNC_5 (struct ptd*) ;

__attribute__((used)) static void FUNC_6(struct isp1362_hcd *VAR_2, struct isp1362_ep *VAR_3,
         struct isp1362_ep_queue *VAR_4)
{
 struct ptd *VAR_5 = &VAR_3->ptd;
 int VAR_6 = FUNC_0(VAR_5) == VAR_0 ? 0 : VAR_3->length;

 FUNC_1(VAR_3->ptd_offset < 0);

 FUNC_5(VAR_5);
 FUNC_4(VAR_2, VAR_5, VAR_3->ptd_offset, VAR_1);
 if (VAR_6)
  FUNC_4(VAR_2, VAR_3->data,
         VAR_3->ptd_offset + VAR_1, VAR_6);

 FUNC_2(VAR_5);
 FUNC_3(VAR_5, VAR_3->data);
}
