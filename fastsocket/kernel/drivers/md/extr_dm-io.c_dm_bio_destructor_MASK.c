
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct io {TYPE_1__* client; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int bios; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct bio*,struct io**,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 unsigned VAR_1;
 struct io *VAR_2;

 FUNC_1(VAR_0, &VAR_2, &VAR_1);

 FUNC_0(VAR_0, VAR_2->client->bios);
}
