
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char shmem_magic; size_t shmem_pgport; int devicename; int lock; scalar_t__ rambase; int * ioport; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (char*,int,...) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(int VAR_2, void *VAR_3, const void *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 unsigned char VAR_7;

 if(!FUNC_0(VAR_2)) {
  FUNC_3("Invalid param: %d is not a valid card id\n", VAR_2);
  return;
 }

 if(VAR_5 > VAR_0) {
  return;
 }




 VAR_7 = (unsigned long) VAR_4 / VAR_0;
 FUNC_3("%s: loaded page %d\n", VAR_1[VAR_2]->devicename,VAR_7);





 FUNC_4(&VAR_1[VAR_2]->lock, VAR_6);

 FUNC_2(((VAR_1[VAR_2]->shmem_magic + VAR_7 * VAR_0) >> 14) | 0x80,
  VAR_1[VAR_2]->ioport[VAR_1[VAR_2]->shmem_pgport]);
 FUNC_1(VAR_3,(void *)(VAR_1[VAR_2]->rambase +
  ((unsigned long) VAR_4 % 0x4000)), VAR_5);
 FUNC_5(&VAR_1[VAR_2]->lock, VAR_6);
 FUNC_3("%s: set page to %#x\n",VAR_1[VAR_2]->devicename,
  ((VAR_1[VAR_2]->shmem_magic + VAR_7 * VAR_0)>>14)|0x80);



}
