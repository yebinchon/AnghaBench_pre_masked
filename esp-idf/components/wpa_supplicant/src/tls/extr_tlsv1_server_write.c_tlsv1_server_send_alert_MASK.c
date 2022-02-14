
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_server {TYPE_1__ rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,int) ;
 void** FUNC_1 (int) ;
 int FUNC_2 (int ,char*,void*,void*) ;

u8 * FUNC_3(struct tlsv1_server *VAR_3, u8 VAR_4,
        u8 VAR_5, size_t *VAR_6)
{
 u8 *VAR_7, *VAR_8, *VAR_9;

 FUNC_2(VAR_0, "TLSv1: Send Alert(%d:%d)", VAR_4, VAR_5);
 *VAR_6 = 0;

 VAR_7 = FUNC_1(10);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_8 = VAR_7;



 *VAR_8++ = VAR_1;

 FUNC_0(VAR_8, VAR_3->rl.tls_version ? VAR_3->rl.tls_version :
       VAR_2);
 VAR_8 += 2;

 VAR_9 = VAR_8;
 VAR_8 += 2;




 *VAR_8++ = VAR_4;

 *VAR_8++ = VAR_5;

 FUNC_0(VAR_9, VAR_8 - VAR_9 - 2);
 *VAR_6 = VAR_8 - VAR_7;

 return VAR_7;
}
