
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {scalar_t__ need_reconnect; TYPE_1__* ses; } ;
struct TYPE_2__ {scalar_t__ need_reconnect; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,struct cifs_tcon*,void**,void**) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, int VAR_2, struct cifs_tcon *VAR_3,
   void **VAR_4, void **VAR_5)
{
 if (VAR_3->ses->need_reconnect || VAR_3->need_reconnect)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
