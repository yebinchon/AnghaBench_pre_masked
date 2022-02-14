
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb_priv {scalar_t__ req; struct ep_data* epdata; } ;
struct kiocb {struct kiocb_priv* private; } ;
struct io_event {int dummy; } ;
struct ep_data {scalar_t__ ep; } ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*) ;
 int FUNC_1 (struct kiocb*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct kiocb *VAR_1, struct io_event *VAR_2)
{
 struct kiocb_priv *VAR_3 = VAR_1->private;
 struct ep_data *VAR_4;
 int VAR_5;

 FUNC_3();
 VAR_4 = VAR_3->epdata;

 FUNC_1(VAR_1);
 if (FUNC_2(VAR_4 && VAR_4->ep && VAR_3->req))
  VAR_5 = FUNC_5 (VAR_4->ep, VAR_3->req);
 else
  VAR_5 = -VAR_0;

 FUNC_4();

 FUNC_0(VAR_1);
 return VAR_5;
}
