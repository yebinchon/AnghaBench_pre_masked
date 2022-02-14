
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int cow_offset; int * fds; int bitmap_words; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct io_thread_req *VAR_0)
{
 int VAR_1;

 if(VAR_0->cow_offset == -1)
  return 0;

 VAR_1 = FUNC_0(VAR_0->fds[1], VAR_0->cow_offset);
 if(VAR_1 < 0){
  FUNC_2("do_io - bitmap lseek failed : err = %d\n", -VAR_1);
  return 1;
 }

 VAR_1 = FUNC_1(VAR_0->fds[1], &VAR_0->bitmap_words,
     sizeof(VAR_0->bitmap_words));
 if(VAR_1 != sizeof(VAR_0->bitmap_words)){
  FUNC_2("do_io - bitmap update failed, err = %d fd = %d\n", -VAR_1,
         VAR_0->fds[1]);
  return 1;
 }

 return 0;
}
