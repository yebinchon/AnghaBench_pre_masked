
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; } ;
typedef TYPE_1__ avmcard ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(avmcard *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5 = VAR_1 + 1 * VAR_0;
 unsigned char *VAR_6 = (unsigned char *)VAR_3;
 while (VAR_4--) {
  while ( !FUNC_0(VAR_2->port)
         && FUNC_2(VAR_1, VAR_5));
  if (!FUNC_0(VAR_2->port))
   return -1;
         FUNC_1(VAR_2->port, 0x01, *VAR_6++);
 }
 return 0;
}
