
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef void* u16 ;
struct TYPE_2__ {scalar_t__ data; int function; } ;
struct request_context {TYPE_1__ timer; int done; int refcount; void* in_rid; void* out_rid; int state; struct ezusb_priv* upriv; struct request_context* buf; int outurb; } ;
struct ezusb_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct request_context*) ;
 struct request_context* FUNC_4 (int ,int ) ;
 struct request_context* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static struct request_context *FUNC_7(struct ezusb_priv *VAR_4,
            u16 VAR_5, u16 VAR_6)
{
 struct request_context *VAR_7;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->buf = FUNC_4(VAR_0, VAR_2);
 if (!VAR_7->buf) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }
 VAR_7->outurb = FUNC_6(0, VAR_2);
 if (!VAR_7->outurb) {
  FUNC_3(VAR_7->buf);
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_7->upriv = VAR_4;
 VAR_7->state = VAR_1;
 VAR_7->out_rid = VAR_5;
 VAR_7->in_rid = VAR_6;

 FUNC_0(&VAR_7->refcount, 1);
 FUNC_1(&VAR_7->done);

 FUNC_2(&VAR_7->timer);
 VAR_7->timer.function = VAR_3;
 VAR_7->timer.data = (u_long) VAR_7;
 return VAR_7;
}
