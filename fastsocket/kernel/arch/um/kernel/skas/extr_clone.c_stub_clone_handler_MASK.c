
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stub_data {long err; int offset; int fd; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 long FUNC_1 (int ,int,int) ;
 long FUNC_2 (int ,int ,long,int ) ;
 long FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 () ;

void __attribute__ ((__section__ (".__syscall_stub")))
FUNC_5(void)
{
 struct stub_data *VAR_10 = (struct stub_data *) VAR_5;
 long VAR_11;

 VAR_11 = FUNC_1(VAR_7, VAR_1 | VAR_0 | VAR_4,
       VAR_5 + VAR_6 / 2 - sizeof(void *));
 if (VAR_11 != 0)
  goto out;

 VAR_11 = FUNC_3(VAR_8, VAR_3, 0, 0, 0);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_2(VAR_9, VAR_2,
       (long) &VAR_10->timer, 0);
 if (VAR_11)
  goto out;

 FUNC_0(VAR_10->fd, VAR_10->offset);
 goto done;

 out:






 VAR_10->err = VAR_11;
 done:
 FUNC_4();
}
