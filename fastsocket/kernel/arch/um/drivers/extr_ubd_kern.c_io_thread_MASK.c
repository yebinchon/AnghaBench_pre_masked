
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_thread_req {int dummy; } ;


 int FUNC_0 (struct io_thread_req*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct io_thread_req**,int) ;
 int FUNC_3 (int ,struct io_thread_req**,int) ;
 int FUNC_4 (char*,int ,int) ;

int FUNC_5(void *VAR_2)
{
 struct io_thread_req *VAR_3;
 int VAR_4;

 FUNC_1();
 while(1){
  VAR_4 = FUNC_2(VAR_1, &VAR_3,
     sizeof(struct io_thread_req *));
  if(VAR_4 != sizeof(struct io_thread_req *)){
   if(VAR_4 < 0)
    FUNC_4("io_thread - read failed, fd = %d, "
           "err = %d\n", VAR_1, -VAR_4);
   else {
    FUNC_4("io_thread - short read, fd = %d, "
           "length = %d\n", VAR_1, VAR_4);
   }
   continue;
  }
  VAR_0++;
  FUNC_0(VAR_3);
  VAR_4 = FUNC_3(VAR_1, &VAR_3,
      sizeof(struct io_thread_req *));
  if(VAR_4 != sizeof(struct io_thread_req *))
   FUNC_4("io_thread - write failed, fd = %d, err = %d\n",
          VAR_1, -VAR_4);
 }

 return 0;
}
