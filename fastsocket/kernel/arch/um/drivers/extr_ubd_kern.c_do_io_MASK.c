
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int length; int sectorsize; char* buffer; int error; scalar_t__ op; int * fds; scalar_t__* offsets; scalar_t__ offset; int sector_mask; } ;
typedef scalar_t__ __u64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int,unsigned char*) ;
 int FUNC_6 (struct io_thread_req*) ;

__attribute__((used)) static void FUNC_7(struct io_thread_req *VAR_1)
{
 char *VAR_2;
 unsigned long VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9;
 __u64 VAR_10;

 VAR_5 = VAR_1->length / VAR_1->sectorsize;
 VAR_6 = 0;
 do {
  VAR_8 = FUNC_5(VAR_6, (unsigned char *) &VAR_1->sector_mask);
  VAR_7 = VAR_6;
  while((VAR_7 < VAR_5) &&
        (FUNC_5(VAR_7, (unsigned char *)
        &VAR_1->sector_mask) == VAR_8))
   VAR_7++;

  VAR_10 = VAR_1->offset + VAR_1->offsets[VAR_8] +
   VAR_6 * VAR_1->sectorsize;
  VAR_3 = (VAR_7 - VAR_6) * VAR_1->sectorsize;
  VAR_2 = &VAR_1->buffer[VAR_6 * VAR_1->sectorsize];

  VAR_9 = FUNC_2(VAR_1->fds[VAR_8], VAR_10);
  if(VAR_9 < 0){
   FUNC_4("do_io - lseek failed : err = %d\n", -VAR_9);
   VAR_1->error = 1;
   return;
  }
  if(VAR_1->op == VAR_0){
   VAR_4 = 0;
   do {
    VAR_2 = &VAR_2[VAR_4];
    VAR_3 -= VAR_4;
    VAR_4 = FUNC_1(VAR_1->fds[VAR_8], VAR_2, VAR_3);
    if (VAR_4 < 0) {
     FUNC_4("do_io - read failed, err = %d "
            "fd = %d\n", -VAR_4, VAR_1->fds[VAR_8]);
     VAR_1->error = 1;
     return;
    }
   } while((VAR_4 < VAR_3) && (VAR_4 != 0));
   if (VAR_4 < VAR_3) FUNC_0(&VAR_2[VAR_4], 0, VAR_3 - VAR_4);
  } else {
   VAR_4 = FUNC_3(VAR_1->fds[VAR_8], VAR_2, VAR_3);
   if(VAR_4 != VAR_3){
    FUNC_4("do_io - write failed err = %d "
           "fd = %d\n", -VAR_4, VAR_1->fds[VAR_8]);
    VAR_1->error = 1;
    return;
   }
  }

  VAR_6 = VAR_7;
 } while(VAR_6 < VAR_5);

 VAR_1->error = FUNC_6(VAR_1);
}
