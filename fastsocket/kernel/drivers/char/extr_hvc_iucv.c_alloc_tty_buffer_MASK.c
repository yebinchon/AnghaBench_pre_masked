
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int length; } ;
struct iucv_tty_buffer {TYPE_2__* mbuf; TYPE_1__ msg; } ;
typedef int gfp_t ;
struct TYPE_4__ {scalar_t__ datalen; int type; int version; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 struct iucv_tty_buffer* FUNC_2 (int ,int) ;
 int FUNC_3 (struct iucv_tty_buffer*,int ) ;
 int FUNC_4 (struct iucv_tty_buffer*,int ,int) ;

__attribute__((used)) static struct iucv_tty_buffer *FUNC_5(size_t VAR_4, gfp_t VAR_5)
{
 struct iucv_tty_buffer *VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);
 FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 if (VAR_4 > 0) {
  VAR_6->msg.length = FUNC_0(VAR_4);
  VAR_6->mbuf = FUNC_1(VAR_6->msg.length, VAR_5 | VAR_0);
  if (!VAR_6->mbuf) {
   FUNC_3(VAR_6, VAR_3);
   return ((void*)0);
  }
  VAR_6->mbuf->version = VAR_2;
  VAR_6->mbuf->type = VAR_1;
  VAR_6->mbuf->datalen = (u16) VAR_4;
 }
 return VAR_6;
}
