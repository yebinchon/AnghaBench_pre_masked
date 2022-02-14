
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,void*,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(unsigned long VAR_5, int *VAR_6)
{
 int VAR_7, VAR_8[2], VAR_9;

 VAR_9 = FUNC_2(VAR_8, 1, 1);
 if(VAR_9 < 0){
  FUNC_4("start_io_thread - os_pipe failed, err = %d\n", -VAR_9);
  goto out;
 }

 VAR_4 = VAR_8[0];
 *VAR_6 = VAR_8[1];

 VAR_9 = FUNC_3(*VAR_6, 0);
 if (VAR_9) {
  FUNC_4("start_io_thread - failed to set nonblocking I/O.\n");
  goto out_close;
 }

 VAR_7 = FUNC_0(VAR_3, (void *) VAR_5, VAR_0 | VAR_1, ((void*)0));
 if(VAR_7 < 0){
  VAR_9 = -VAR_2;
  FUNC_4("start_io_thread - clone failed : errno = %d\n", VAR_2);
  goto out_close;
 }

 return(VAR_7);

 out_close:
 FUNC_1(VAR_8[0]);
 FUNC_1(VAR_8[1]);
 VAR_4 = -1;
 *VAR_6 = -1;
 out:
 return VAR_9;
}
