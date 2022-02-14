
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int flags; int checksum_inv; int checksum; } ;
typedef TYPE_1__ syssram ;
struct TYPE_4__ {int offset; int sync; int enabled; scalar_t__ locked; scalar_t__ srambuf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (scalar_t__,int,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_1,u32 VAR_2)
{
 syssram *VAR_3 = (syssram*)VAR_0.srambuf;

 if(VAR_1) {
  if(!VAR_2) {
   if((VAR_3->flags&0x03)>0x02) VAR_3->flags = (VAR_3->flags&~0x03);
   FUNC_1((u16*)VAR_0.srambuf,&VAR_3->checksum,&VAR_3->checksum_inv);
  }
  if(VAR_2<VAR_0.offset) VAR_0.offset = VAR_2;

  VAR_0.sync = FUNC_2(VAR_0.srambuf+VAR_0.offset,VAR_0.offset,(64-VAR_0.offset));
  if(VAR_0.sync) VAR_0.offset = 64;
 }
 VAR_0.locked = 0;
 FUNC_0(VAR_0.enabled);
 return VAR_0.sync;
}
