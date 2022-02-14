
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptd {void* faddr; void* len; void* mps; void* count; } ;
struct isp116x_ep {int data; int length; struct isp116x_ep* active; struct ptd ptd; } ;
struct isp116x {scalar_t__ atl_last_dir; int atl_buflen; int atl_bufshrt; struct isp116x_ep* atl_active; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ptd*) ;
 int FUNC_3 (struct ptd*,int ) ;
 void* FUNC_4 (struct isp116x*) ;
 int FUNC_5 (struct isp116x*,int ) ;
 int FUNC_6 (struct isp116x*,int ,int) ;
 int FUNC_7 (struct isp116x*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct isp116x *VAR_5)
{
 struct isp116x_ep *VAR_6;
 struct ptd *VAR_7;
 int VAR_8 = VAR_5->atl_last_dir == VAR_4
     ? VAR_5->atl_buflen : VAR_5->atl_bufshrt;

 FUNC_6(VAR_5, VAR_2, VAR_3);
 FUNC_6(VAR_5, VAR_1, VAR_8);
 FUNC_5(VAR_5, VAR_0);
 for (VAR_6 = VAR_5->atl_active; VAR_6; VAR_6 = VAR_6->active) {
  VAR_7 = &VAR_6->ptd;
  VAR_7->count = FUNC_4(VAR_5);
  VAR_7->mps = FUNC_4(VAR_5);
  VAR_7->len = FUNC_4(VAR_5);
  VAR_7->faddr = FUNC_4(VAR_5);
  VAR_8 -= sizeof(struct ptd);

  if (VAR_6->active || (VAR_5->atl_last_dir == VAR_4)) {
   FUNC_7(VAR_5, VAR_6->data, VAR_6->length);
   VAR_8 -= FUNC_0(VAR_6->length, 4);
  }
  FUNC_2(VAR_7);
  FUNC_3(VAR_7, VAR_6->data);
 }
 FUNC_1(VAR_8);
}
